cmake_minimum_required(VERSION 3.1)
project(tp02)

add_executable(exo
    Card.cpp
    Card.hpp
    Player.cpp
    Player.hpp
    main.cpp
)

target_compile_features(exo PUBLIC cxx_std_17)
