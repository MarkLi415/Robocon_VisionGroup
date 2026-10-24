# generated from rosidl_cmake/cmake/rosidl_cmake_aggregate_target-extras.cmake.in

# Create a convenience aggregate target zyzf_zuishuai::zyzf_zuishuai
# that links all generated interface targets, so downstream packages can use
# a single modern CMake target name instead of ${zyzf_zuishuai_TARGETS}.
if(zyzf_zuishuai_TARGETS AND NOT TARGET zyzf_zuishuai::zyzf_zuishuai)
  add_library(zyzf_zuishuai::zyzf_zuishuai INTERFACE IMPORTED)
  set_target_properties(zyzf_zuishuai::zyzf_zuishuai PROPERTIES
    INTERFACE_LINK_LIBRARIES "${zyzf_zuishuai_TARGETS}")
endif()
