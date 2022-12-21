cmake_minimum_required(VERSION 3.23)
project(ReferenceGameObj)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)

FetchContent_Declare(librobots
        GIT_REPOSITORY https://github.com/HEIGVD-PRG1-F-2022/librobots.git
        GIT_TAG v0.2.10
        )
FetchContent_MakeAvailable(librobots)

FetchContent_Declare(libdio
        GIT_REPOSITORY https://github.com/HEIGVD-PRG1-F-2022/libdio.git
        GIT_TAG v0.2.4
        )
FetchContent_MakeAvailable(libdio)

add_executable(ReferenceGameObj main.cpp
        ${CMAKE_CURRENT_SOURCE_DIR}/all.cpp.obj
        ${CMAKE_CURRENT_SOURCE_DIR}/Game.cpp.obj
        ${CMAKE_CURRENT_SOURCE_DIR}/RobotSmart.cpp.obj
        ${CMAKE_CURRENT_SOURCE_DIR}/RobotsSimple.cpp.obj
        )

target_link_libraries(ReferenceGameObj PRIVATE librobots libdio)
