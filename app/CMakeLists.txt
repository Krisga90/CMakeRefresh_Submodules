set(EXEC_SOURCE main.cpp)

add_executable(${PROJECT_NAME} ${EXEC_SOURCE})



target_link_libraries(${PROJECT_NAME} PUBLIC 
    ${LIBRARY_NAME}
    nlohmann_json)