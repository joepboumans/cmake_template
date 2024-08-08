cmake_minimum_required(VERSION 3.12)
project(CMakeTest)
set(CMAKE_CXX_STANDARD 23)

if(UNIX)
  message("This is a ${CMAKE_SYSTEM_NAME} system")
  add_definitions(-DSYSTEM="UNIX")
elseif(WIN32)
  message("ThIS is a Windows System")
  add_definitions(-DSYSTEM="WINDOWS")
endif()

# https://github.com/catchorg/Catch2/blob/devel/docs/cmake-integration.md#installing-catch2-from-git-repository
find_package(Catch2 3 REQUIRED)
add_executable(ctest test.cpp)
target_link_libraries(ctest PRIVATE Catch2::Catch2WithMain)

include(CTest)
include(Catch)
catch_discover_tests(ctest)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_SOURCE_DIR src)

set(SOURCES main.cpp)
message("Building sources ${SOURCES}")
add_subdirectory(lib/custom_math)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
add_executable(cmake_test ${SOURCES})
target_link_libraries(cmake_test custom_math)
