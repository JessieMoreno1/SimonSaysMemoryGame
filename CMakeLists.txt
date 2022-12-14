cmake_minimum_required(VERSION 3.23)
project(SimonSays)

set(CMAKE_CXX_STANDARD 14)

add_executable(SimonSays main.cpp Squares.cpp Squares.h States.cpp States.h StatesEnum.h Fonts.cpp Fonts.h FontsEnum.h MouseEvents.cpp MouseEvents.h MainMenu.cpp MainMenu.h Game.cpp Game.h)
target_link_libraries(SimonSays sfml-graphics sfml-audio)
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)