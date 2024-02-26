cmake_minimum_required(VERSION 3.5)
project(CSRMatrLib)
set(CMAKE_CXX_STANDARD 20)

add_subdirectory(src) #Внутри будет установлена переменная SOURCE_LIB
add_subdirectory(include) #Внутри будет установлена переменная HEADER_LIB

add_library(hello ${SOURCE_LIB} ${HEADER_LIB})
#add_library(hello ${SOURCE_LIB}) что это поменяет ?

target_include_directories(hello PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_subdirectory(example)
