#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sstream>

int main(int argc, char **argv){
    ros::init(argc,argv,"talker")
    ros::NodeHandle nh;

    ros::Publisher talk_pub = nh.advertise<std_msgs::String>("topic_name",100)
    ros::Rate loop_rate(1); //Hz
    int count=0;
    while (ros::ok())
    {
        std_msgs::String msg;
        std::stringstream ss;
        ss << "I have been running for "<< count << "Sec.";

        msg.data = ss.str();
        talk_pub.publish(msg);
        
        ros::spinOnce();
        loop_rate.sleep();
    }
    

    return 0;
}
