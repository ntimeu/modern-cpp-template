cmake_policy(SET CMP0048 NEW)

project(ttt
	VERSION 1.0.0
	DESCRIPTION "Simple CMake example"
	HOMEPAGE_URL "https://github.com/ntimeu/ttt"
	LANGUAGES CXX)
cmake_minimum_required(VERSION 3.17)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

option(ENABLE_TESTS "Compile tests for all subprojects" OFF)
if(ENABLE_TESTS)
	add_subdirectory(vendor/Catch2)
	enable_testing()
endif()

add_compile_options(-Wall)
add_compile_options(-Wextra)
add_compile_options(-Werror)
add_compile_options(-Wpedantic)
add_compile_options(-Wold-style-cast)
add_compile_options(-fvisibility=hidden)
add_compile_options(-pipe)
add_link_options(-pipe)

option(OPTIMIZE "Force Optimization flags on all projects" OFF)
if(OPTIMIZE)
	add_compile_options(-O3)
	add_compile_options(-flto)
	add_link_options(-flto)
else()
	add_compile_options(-O0)
endif()

option(DEBUG "Force debug flags at compilation" ON)
if(DEBUG)
	add_compile_options(-g3)
	add_compile_options(-Og)
endif()

add_subdirectory(factorial)

add_executable(ttt src/main.cpp)
target_include_directories(ttt PRIVATE factorial)
target_link_libraries(ttt factorial)
