cmake_minimum_required(VERSION 3.10)
project(ProyectoIoT CXX)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

add_executable(Proyecto
    src/main.cpp
    src/DispositivoIoT.cpp
)