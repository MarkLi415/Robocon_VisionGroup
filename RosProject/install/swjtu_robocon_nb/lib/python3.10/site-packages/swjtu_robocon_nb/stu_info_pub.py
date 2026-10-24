import rclpy
from rclpy.node import Node
from zyzf_zuishuai.msg import StudentInfo

class StudentInfoPub(Node):
    def __init__(self, node_name):
        super().__init__(node_name)
        self.info_publisher_ = self.create_publisher(
            StudentInfo, 'student_info',10)
        self.timer = self.create_timer(1,self.timer_callback)

    def timer_callback(self):
        msg=StudentInfo()
        msg.student_name = "李敏秀"
        msg.student_id = "2026112597"
        msg.student_sex = "男"
        msg.student_major = "人工智能"

        self.get_logger().info(f'{str(msg)}')
        self.info_publisher_.publish(msg)

def main():
    rclpy.init()
    node=StudentInfoPub('student_info_pub')
    rclpy.spin(node)
    rclpy.shutdown()
