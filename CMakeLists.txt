#cmake_minimum_required(VERSION 2.8)
#project(hello )
#find_package( OpenCV 3.4 REQUIRED )
#include_directories( ${OpenCV_INCLUDE_DIRS} )
#add_executable( disp_image 01_display_image.cpp )
#target_link_libraries( hello ${OpenCV_LIBS} )

cmake_minimum_required(VERSION 2.8)
project(empty_image)
find_package(OpenCV 3.4 REQUIRED core imgproc highgui)

# add executable
add_executable( empty_image 001_create_black_channel_img.cpp)

include_directories(
  ${OpenCV_INCLUDE_DIRS}
  "${PROJECT_SOURCE_DIR}/include"
  "${PROJECT_BINARY_DIR}"
)

target_link_libraries( empty_image ${OpenCV_LIBS})


