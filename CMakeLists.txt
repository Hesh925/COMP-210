cmake_minimum_required(VERSION 3.27)
project(COMP_210 VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME} main.cpp
        utils/queue/queue.cpp
        utils/CircularList/CircularList.cpp
        NumberList.cpp
)