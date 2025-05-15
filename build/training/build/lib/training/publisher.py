import rclpy
from rclpy.node import Node
from training_interfaces.msg import Person

class PersonPublisher(Node):
    def __init__(self):
        super().__init__('person_publisher')
        self.publisher_ = self.create_publisher(Person, 'person_topic', 10)
        self.timer = self.create_timer(1.0, self.timer_callback)

    def timer_callback(self):
        msg = Person()
        msg.name = "Vishrut"
        msg.age = 19
        self.publisher_.publish(msg)
        self.get_logger().info(f"Publishing: {msg.name}, {msg.age}")

def main(args=None):
    rclpy.init(args=args)
    node = PersonPublisher()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()

