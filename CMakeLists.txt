cmake_minimum_required(VERSION 2.8)

project(path)

add_library(${PROJECT_NAME} INTERFACE)

add_custom_target(${PROJECT_NAME}_ide SOURCES filesystem/fwd.h filesystem/path.h filesystem/resolver.h)
