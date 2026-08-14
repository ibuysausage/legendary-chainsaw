# CMakeLists.txt

cmake_minimum_required(VERSION 4.2.3)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")
set(CMAKE_INSTALL_PREFIX "/usr/local" CACHE PATH "install prefix" FORCE)
set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type" FORCE)

project(programs)

if(NOT TARGET uninstall)
  configure_file(
    "${CMAKE_CURRENT_SOURCE_DIR}/cmake_uninstall.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake"
    IMMEDIATE @ONLY)

  add_custom_target(uninstall
    COMMAND ${CMAKE_COMMAND} -P ${CMAKE_CURRENT_BINARY_DIR}/cmake_uninstall.cmake)
endif()

set(HELLO_SOURCES src/hello-world/main.cpp src/hello-world/hi.cpp include/hi.h)
add_executable(hello ${HELLO_SOURCES})
target_include_directories(hello PRIVATE include)
install(TARGETS hello DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)


add_executable(dog src/dog-age/main.cpp)
install(TARGETS dog DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)


add_executable(add src/addition/main.cpp)
install(TARGETS add DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)


add_executable(var src/variable/main.cpp)
install(TARGETS var DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)

add_executable(onepiece src/one-piece/main.cpp)
install (TARGETS onepiece DESTINATION ${CMAKE_INSTALL_PREFIX}/bin)


message("Build type used: " ${CMAKE_BUILD_TYPE})
