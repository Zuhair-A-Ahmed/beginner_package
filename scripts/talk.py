# /usr/bin/env python
#Zuhair
from mimetypes import init
import rospy
from std_msgs.msg import String

def run_node():
    rospy.init_node('talker_node_py_name')
    talk_pub = rospy.Publisher("topic_name",String, queue_size=100)#capital S of string because this is ros version of string
    count = 0
    while not rospy.is_shutdown():
        if count&2 == 0:
            
if __name__ == '__main__':
    try:
        run_node()
    except rospy.ROSInterruptException:
        pass
