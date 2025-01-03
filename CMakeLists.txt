cmake_minimum_required(VERSION 3.5)

project(project_projoppr CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS 1 )

set(RAYLIB_VERSION 5.5)
find_package(raylib 5.5 QUIET) # QUIET or REQUIRED
if(NOT raylib_FOUND) # If there's none, fetch and build raylib
  include(FetchContent)
  FetchContent_Declare(
    raylib
    DOWNLOAD_EXTRACT_TIMESTAMP OFF
    URL https://github.com/raysan5/raylib/archive/refs/tags/5.0.tar.gz)
  FetchContent_GetProperties(raylib)
  if(NOT raylib_POPULATED) # Have we downloaded raylib yet?
    set(FETCHCONTENT_QUIET NO)
    FetchContent_MakeAvailable(raylib)
    set(BUILD_EXAMPLES
        OFF
        CACHE BOOL "" FORCE) # don't build the supplied examples
  endif()
endif()

set(SOURCE_FILES src/main.cpp src/menu/menu.cpp
                 src/game/game.cpp)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})

target_include_directories(${PROJECT_NAME} PRIVATE  ${CMAKE_CURRENT_SOURCE_DIR}/inc )

target_link_libraries(${PROJECT_NAME} raylib)
