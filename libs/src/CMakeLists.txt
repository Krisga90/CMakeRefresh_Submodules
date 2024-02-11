add_library(${LIBRARY_NAME} STATIC my_lib.cpp)

target_include_directories(
    ${LIBRARY_NAME}
    PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/../include
    "${CMAKE_BINARY_DIR}/configured/include")