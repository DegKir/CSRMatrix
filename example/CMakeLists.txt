project(myexample)

add_executable(myexample main.cpp)

target_link_libraries(myexample hello)

install(TARGETS myexample
        RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}/examples)
