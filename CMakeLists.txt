cmake_minimum_required(VERSION 3.20)
project(NOVA VERSION 0.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME} src/main.cpp)

if(APPLE)
    # Find DPP for Mac (Apple Silicon)
    include_directories(/opt/homebrew/opt/libdpp/include)
    target_link_libraries(${PROJECT_NAME} PRIVATE /opt/homebrew/opt/libdpp/lib/libdpp.dylib)
elseif(WIN32)
    # Find DPP for Windows, assumes VCPKG
    find_package(DPP CONFIG REQUIRED)
    target_link_libraries(${PROJECT_NAME} PRIVATE dpp::dpp)
endif()
