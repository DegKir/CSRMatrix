cmake_minimum_required(VERSION 3.5)
project(CSRMatrLib)
set(CMAKE_CXX_STANDARD 20)

option(USE_MY_LIBRARY "help_text" ON)

add_subdirectory(cmake)
set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")

include(GNUInstallDirs)

add_subdirectory(src) #Внутри будет установлена переменная SOURCE_LIB
add_subdirectory(include) #Внутри будет установлена переменная HEADER_LIB
add_library(hello ${SOURCE_LIB} ${HEADER_LIB})
target_include_directories(hello PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_include_directories(hello PUBLIC
            $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
            $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}> )

if(NOT USE_MY_LIBRARY)
    find_package(SPARSKIT)
    message("search for SPARSKIT2 ...")
    target_link_libraries(hello PUBLIC ${SKIT_LIBRARY})
    target_compile_definitions(hello PUBLIC USE_SPARSKIT)
endif()

install(TARGETS hello EXPORT hello-targets
        ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
        LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
        RUNTIME DESTINATION ${CMAKE_INSTALL_LIBDIR}
        PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})


add_subdirectory(example)
