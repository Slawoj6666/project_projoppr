cmake_minimum_required(VERSION 3.5)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(project_projoppr CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS 1 ~/project_projoppr)

set(RAYLIB_VERSION 5.0)
find_package(raylib 5.0 QUIET) # QUIET or REQUIRED
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

set(SOURCE_FILES project_projoppr/main.cpp project_projoppr/menu/menu.cpp)

add_executable(Game ${SOURCE_FILES})

target_include_directories(Game PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")

target_link_libraries(Game raylib)
