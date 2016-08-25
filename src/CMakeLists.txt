cmake_minimum_required (VERSION 2.8.11)
project (Sample)

aux_source_directory(. SRC)

add_executable(${PROJECT_NAME} ${SRC})

