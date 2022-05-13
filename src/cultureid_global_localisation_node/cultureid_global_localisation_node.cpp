#include <cultureid_global_localisation_node/cultureid_global_localisation.h>

int main(int argc, char** argv)
{
  ros::init(argc, argv, "cultureid_global_localisation");
  ros::NodeHandle nh;
  ros::NodeHandle nh_private("~");

  CultureidGlobalLocalisation pipeline_localisation(nh, nh_private);
  ros::spin();
  return 0;
}
