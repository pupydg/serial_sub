#include <memory>
#include "rclcpp/rclcpp.hpp"
#include <serial/serial.h>
#include <speed_control/msg/speed_control.hpp>
using std::placeholders::_1;

serial::Serial speed_serial;

class SpeedSubscriber : public rclcpp::Node
{
public:
    SpeedSubscriber() : Node("speed_subscriber")
    {
        speed_sub = this->create_subscription<speed_control::msg::SpeedControl>(
            "agv_speed", 10, std::bind(&SpeedSubscriber::speed_callback, this, _1));
    }

private:
    void speed_callback(const speed_control::msg::SpeedControl::SharedPtr msg) const
    {
        if (!speed_serial.isOpen())
        {
            RCLCPP_ERROR(get_logger(), "Can not open the serial !");
            return;
        }
        std::string speed = std::to_string(msg->left) + " " + std::to_string(msg->right) + ";";
        speed_serial.write(speed);
    }
    rclcpp::Subscription<speed_control::msg::SpeedControl>::SharedPtr speed_sub;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    speed_serial.setPort("/dev/ttyUSB0");
    speed_serial.setBaudrate(115200);
    speed_serial.open();

    rclcpp::spin(std::make_shared<SpeedSubscriber>());
    speed_serial.close();
    rclcpp::shutdown();
    return 0;
}