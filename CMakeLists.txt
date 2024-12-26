cmake_minimum_required(VERSION 3.5)

project(lldb-bug VERSION 0.1 LANGUAGES CXX)

set(TARGET_NAME "${PROJECT_NAME}")

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core REQUIRED)

set(PROJECT_SOURCES
   main.cpp
   holder.cpp
)


include_directories(${CMAKE_SOURCE_DIR})
link_directories(${CMAKE_SOURCE_DIR})

add_executable(${TARGET_NAME} ${PROJECT_SOURCES})

target_link_libraries(
   ${TARGET_NAME} 
   PRIVATE 
   Qt${QT_VERSION_MAJOR}::Core
)