cmake_minimum_required(VERSION 3.16)

# Project name and version
project(firmware-esp32 VERSION 1.0.0 LANGUAGES C CXX)

# Set C standard
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Source files
file(GLOB_RECURSE SOURCES
    "${PROJECT_SOURCE_DIR}/src/*.c"
    "${PROJECT_SOURCE_DIR}/src/**/*.c"
)

# Build executable (for native/test builds)
# For ESP-IDF, this is typically managed by idf.py
if(NOT DEFINED IDF_BUILD)
    add_executable(${PROJECT_NAME} ${SOURCES})
    target_include_directories(${PROJECT_NAME} PRIVATE ${PROJECT_SOURCE_DIR}/include)
endif()

# Test configuration
enable_testing()
add_subdirectory(tests)
