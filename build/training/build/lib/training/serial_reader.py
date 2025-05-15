import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import serial

class SerialReader(Node):
    def __init__(self):
        super().__init__('serial_reader')
        # Update port name as needed
        self.ser = serial.Serial('/dev/ttyUSB0', 9600, timeout=1)
        self.ser.flush()  # flush buffer on startup
        self.publisher_ = self.create_publisher(String, 'sensor_data', 10)
        self.timer = self.create_timer(0.1, self.read_serial)  # check every 100ms

    def read_serial(self):
        try:
            if self.ser.in_waiting > 0:
                raw_line = self.ser.readline().decode('utf-8', errors='ignore').strip()
                if raw_line:
                    msg = String()
                    msg.data = raw_line
                    self.publisher_.publish(msg)
                    self.get_logger().info(f'Published: {raw_line}')
        except Exception as e:
            self.get_logger().error(f'Error reading serial: {e}')

def main(args=None):
    rclpy.init(args=args)
    node = SerialReader()
    rclpy.spin(node)
    rclpy.shutdown()

if __name__ == '__main__':
    main()

