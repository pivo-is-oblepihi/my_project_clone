cmake_minimum_required(VERSION 3.0)

project (gui_gist)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

file(GLOB_RECURSE  SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/source/*.cpp ${CMAKE_CURRENT_SOURCE_DIR}/include/*.h )
find_package(Qt5 REQUIRED COMPONENTS Core Gui Widgets Charts)

add_library(${PROJECT_NAME} SHARED ${SOURCE_FILES})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/lib)
target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include/${PROJECT_NAME})

target_include_directories(gui_gist PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/qeneri_rand_num"
                          )
                      target_link_libraries(
                          ${PROJECT_NAME}
                          Qt5::Core
                          Qt5::Charts
                      )
                      target_link_libraries(gui_gist PUBLIC qeneri_rand_num)



include("unittest.cmake")
