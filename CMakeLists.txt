cmake_minimum_required (VERSION 3.8)

project ("BigModeGameJam2023")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_PREFIX_PATH "lib/SDL2")
set(CMAKE_MODULE_PATH "lib/SDL2/cmake/sdl2-config.cmake")
find_package(SDL2 REQUIRED)


add_executable(OurGame "src/main.cpp")
target_link_libraries(OurGame SDL2::SDL2 SDL2::SDL2main)
target_include_directories(OurGame   PUBLIC include)


add_custom_command(TARGET OurGame POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_RUNTIME_DLLS:OurGame> $<TARGET_FILE_DIR:OurGame>
  COMMAND_EXPAND_LISTS
  )