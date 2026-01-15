cmake_minimum_required(VERSION 3.10)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 3.0.2
    GIT_SHALLOW ON)

FetchContent_MakeAvailable(SFML)

project(tic_tac_toe)

set(Resource_src src/resources/board.cpp
src/resources/enemy.cpp
src/resources/player.cpp
src/resources/managers/resource_manager.cpp
src/resources/managers/texture_manager.cpp
)

set(Logic_src src/logic/logic_manager.cpp
)

set(Graphic_src src/graphics//graphic_manager.cpp
)

add_executable(${PROJECT_NAME} ${Resource_src} ${Graphic_src} ${Logic_src} src/game.cpp src/main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE SFML::Graphics SFML::Audio)

if (MSVC)
    target_compile_options(${PROJECT_NAME} PRIVATE /W4)
else()
    target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wextra -Wpedantic)
endif()
