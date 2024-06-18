#include <iostream>
#include "rclcpp/rclcpp.hpp"
#include "speed_control/msg/speed_control.hpp"

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    auto node = rclcpp::Node("speed_pub", "");
    rclcpp::Publisher<speed_control::msg::SpeedControl>::SharedPtr publisher = node.create_publisher<speed_control::msg::SpeedControl>("agc_speed", 10);
    auto message = speed_control::msg::SpeedControl();
    message.left = 0.2;
    message.right = 0.2;
    double start = rclcpp::Clock().now().seconds();
    double end = rclcpp::Clock().now().seconds();
    while (rclcpp::ok() && end - start<5)
    {
        
        end = rclcpp::Clock().now().seconds();

    }

    return 0;
}
