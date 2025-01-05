if(WIN32)
set(CMAKE_TOOLCHAIN_FILE "C:/Program Files/Microsoft Visual Studio/2022/Community/VC/vcpkg/scripts/buildsystems/vcpkg.cmake")
endif()

cmake_minimum_required(VERSION 3.20)
project(NOVA VERSION 0.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add JSON
include(FetchContent)
FetchContent_Declare(json URL https://github.com/nlohmann/json/releases/download/v3.11.3/json.tar.xz)
FetchContent_MakeAvailable(json)

add_executable(${PROJECT_NAME} src/main.cpp "src/smedia_embed.cpp"  "src/clash.cpp" "src/clash.h" "src/leetcode.cpp" "src/leetcode.h")

if(APPLE)
    # Find DPP for Mac (Apple Silicon)
    include_directories(/opt/homebrew/opt/libdpp/include)
    target_link_libraries(${PROJECT_NAME} PRIVATE /opt/homebrew/opt/libdpp/lib/libdpp.dylib)
elseif(WIN32)
    # Find DPP for Windows, assumes VCPKG
    find_package(DPP CONFIG REQUIRED)
    find_package(cpr CONFIG REQUIRED)
    target_link_libraries(${PROJECT_NAME} PRIVATE dpp::dpp)
else()
    # Linux/Raspberry Pi config
    find_package(PkgConfig REQUIRED)
    pkg_check_modules(DPP REQUIRED dpp)
    include_directories(${DPP_INCLUDE_DIRS})
    target_link_libraries(${PROJECT_NAME} PRIVATE ${DPP_LIBRARIES})
endif()

find_package(cpr CONFIG REQUIRED)
target_link_libraries(${PROJECT_NAME} PRIVATE 
    cpr::cpr
    nlohmann_json::nlohmann_json
)