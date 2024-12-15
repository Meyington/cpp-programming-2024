cmake_minimum_required(VERSION 3.5)

project(3_homework_string LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(3_homework_string main.cpp
    string.h string.cpp)

include(GNUInstallDirs)
install(TARGETS 3_homework_string
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
