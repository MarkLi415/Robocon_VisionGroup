import rclpy
from rclpy.node import Node
from zyzf_zuishuai.msg import StudentInfo

class StudentInfoSub(Node):
    def __init__(self, node_name):
        super().__init__(node_name)
        self.info_subscriber_ = self.create_subscription(
            StudentInfo, 'student_info', self.callback, 10)

    def callback(self,msg):
        self.get_logger().info(f'{msg.student_name},{msg.student_id},{msg.student_sex},{msg.student_major}')

def main(args=None):
    rclpy.init(args=args)
    node = StudentInfoSub("info_read")
    rclpy.spin(node)
    rclpy.shutdown()
