import rclpy
from rclpy.node import Node
from training_interfaces.msg import Person

class PersonSubscriber(Node):
    def __init__(self):
        super().__init__('person_subscriber')
        self.subscription = self.create_subscription(
            Person,
            'person_topic',
            self.listener_callback,
            10)

    def listener_callback(self, msg):
        self.get_logger().info(f"Received: Name={msg.name}, Age={msg.age}")

def main(args=None):
    rclpy.init(args=args)
    node = PersonSubscriber()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()

