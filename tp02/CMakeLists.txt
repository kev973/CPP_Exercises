cmake_minimum_required(VERSION 3.1)
project(tp2)

add_executable(exo
    main.cpp
)

target_compile_features(exo PUBLIC cxx_std_17)
