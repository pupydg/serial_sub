#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <iostream>
#include "rclcpp/rclcpp.hpp"
#include "speed_control/msg/speed_control.hpp"

using namespace std::chrono_literals;
double left_speed,right_speed;

/* This example creates a subclass of Node and uses std::bind() to register a
 * member function as a callback from the timer. */

class MinimalPublisher : public rclcpp::Node
{
public:
  MinimalPublisher()
      : Node("minimal_publisher"), count_(0)
  {
    publisher_ = this->create_publisher<speed_control::msg::SpeedControl>("agv_speed", 10);
    timer_ = this->create_wall_timer(
        1ms, std::bind(&MinimalPublisher::timer_callback, this));
  }

private:
  void timer_callback()
  {
    auto message = speed_control::msg::SpeedControl();
    message.left = left_speed;
    message.right = right_speed;
    publisher_->publish(message);
    RCLCPP_INFO(get_logger(),"left : %f",message.left);
  }
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Publisher<speed_control::msg::SpeedControl>::SharedPtr publisher_;
  size_t count_;
};

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::WallRate r(50);
  auto node = std::make_shared<MinimalPublisher>();
  double start = rclcpp::Clock().now().seconds();
  double end = rclcpp::Clock().now().seconds();
  while (rclcpp::ok() && end - start <5)
  {
    left_speed = 0.2;
    right_speed = 0.2;
    rclcpp::spin_some(node);
    r.sleep();
    end = rclcpp::Clock().now().seconds();
    std::cout << end - start << std::endl;
  }
  while (rclcpp::ok())
  {
    left_speed = 0;
    right_speed = 0;
    rclcpp::spin_some(node);
    r.sleep();
  }
  std::cout << end - start << std::endl;
  rclcpp::shutdown();
  return 0;
}