#include <cultureid_global_localisation_logger_node/cultureid_global_localisation_logger.h>

int main(int argc, char** argv)
{
  ros::init(argc, argv, "cultureid_global_localisation_logger");

  CultureidGlobalLocalisationLogger cultureid_global_localisation_logger;
  ros::spin();
  return 0;
}
