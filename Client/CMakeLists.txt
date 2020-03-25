cmake_minimum_required(VERSION 3.10)

set(PROJECT_NAME MathsApp)
project(${PROJECT_NAME})

set(CMAKE_PREFIX_PATH)
set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(Qt5 COMPONENTS REQUIRED Widgets Core Gui)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}/build/bin")
set(CMAKE_CXX_FLAGS "-Wall -O2 --pedantic-errors -DGCC=\"$(shell which gcc)\"")

file(GLOB MathsApp_SOURCES "${MathsApp_SOURCE_DIR}/src/*.cpp")
file(GLOB MathsApp_HEADERS "${MathsApp_SOURCE_DIR}/include/*.hpp")
qt_wrap_cpp(MathsApp_MOC_SOURCES ${MathsApp_HEADERS})

add_executable(${PROJECT_NAME} ${MathsApp_SOURCES} ${MathsApp_HEADERS} ${MathsApp_MOC_SOURCES})

target_link_libraries(${PROJECT_NAME} PUBLIC Qt5::Core Qt5::Widgets Qt5::Gui)
