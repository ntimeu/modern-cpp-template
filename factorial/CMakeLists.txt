project(factorial CXX)

add_library(factorial STATIC src/factorial.cpp)
target_include_directories(factorial PUBLIC include)
