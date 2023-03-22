cmake_minimum_required(VERSION 3.24)
project(ExampleMVC)

set(CMAKE_CXX_STANDARD 17)

add_executable(ExampleMVC main.cpp game_controller.cpp game_controller.h game_model.cpp game_model.h)
