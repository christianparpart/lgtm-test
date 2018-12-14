cmake_minimum_required(VERSION 3.0)
project(lgtm-test VERSION "0.0.0" LANGUAGES CXX)

add_executable(lgtm-test lgtm-test.cpp)
set_target_properties(lgtm-test PROPERTIES CXX_STANDARD 17 CXX_STANDARD_REQUIRED ON)
