cmake_minimum_required(VERSION 3.12)
project(CMakeTest)
set(CMAKE_CXX_STANDARD 23)

if(UNIX)
  message("THis is a ${CMAKE_SYSTEM_NAME} system")
  add_definitions(-DSYSTEM="UNIX")
elseif(WIN32)
  message("THIS is a Windows System")
  add_definitions(-DSYSTEM="WINDOWS")
endif()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/bin)
set(CMAKE_SOURCE_DIR src)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
add_executable(cmake_test main.cpp)
