﻿cmake_minimum_required (VERSION 3.8)

project ("BigModeGameJam2023")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_PREFIX_PATH "lib/SDL2")
set(CMAKE_MODULE_PATH "lib/SDL2/cmake/sdl2-config.cmake")
set(CMAKE_COMPILE_WARNING_AS_ERROR OFF)

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)

add_executable(OurGame "src/main.cpp" "include/image_data.h")
target_link_libraries(OurGame SDL2::SDL2 SDL2::SDL2main ${SDL2IMAGE_LIBRARIES})
target_include_directories(OurGame PUBLIC include)


add_custom_command(TARGET OurGame POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_RUNTIME_DLLS:OurGame> $<TARGET_FILE_DIR:OurGame>
  COMMAND_EXPAND_LISTS
  )