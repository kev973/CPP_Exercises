cmake_minimum_required(VERSION 3.1)
project(tp1)

add_executable(exo
ex1/main.cpp
)

target_compile_features(exo PUBLIC cxx_std_17)
