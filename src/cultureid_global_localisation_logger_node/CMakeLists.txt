#add_library(cultureid_global_localisation_logger fmt_global_localisation_logger.cpp)

#target_link_libraries(cultureid_global_localisation_logger
  #${catkin_LIBRARIES})

#add_dependencies(cultureid_global_localisation_logger
  #${catkin_EXPORTED_TARGETS})

#add_executable(cultureid_global_localisation_logger_node
  #fmt_global_localisation_logger_node.cpp)

#target_link_libraries(cultureid_global_localisation_logger_node
  #cultureid_global_localisation_logger
  #${catkin_LIBRARIES}
#)

#add_dependencies(cultureid_global_localisation_logger_node
  #${catkin_EXPORTED_TARGETS}
#)


add_executable(cultureid_global_localisation_logger_node
  cultureid_global_localisation_logger.cpp
  cultureid_global_localisation_logger_node.cpp)

target_link_libraries(cultureid_global_localisation_logger_node
  ${catkin_LIBRARIES}
)
