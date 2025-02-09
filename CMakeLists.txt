if(WIN32)
    set(CMAKE_TOOLCHAIN_FILE "C:/Program Files/Microsoft Visual Studio/2022/Community/VC/vcpkg/scripts/buildsystems/vcpkg.cmake")
endif()

cmake_minimum_required(VERSION 3.20)
project(NOVA VERSION 0.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

# Add JSON
FetchContent_Declare(json 
    URL https://github.com/nlohmann/json/releases/download/v3.11.3/json.tar.xz
    DOWNLOAD_EXTRACT_TIMESTAMP TRUE
)
FetchContent_MakeAvailable(json)

if (NOT WIN32)
    # Add DPP
    FetchContent_Declare(
        DPP
        GIT_REPOSITORY https://github.com/brainboxdotcc/DPP.git
        GIT_TAG v10.0.35  
    )
    set(DPP_BUILD_TEST OFF CACHE BOOL "Disable DPP tests")
    set(DPP_NO_VCPKG ON CACHE BOOL "Disable VCPKG for DPP")
    FetchContent_MakeAvailable(DPP)

    # Add CPR
    FetchContent_Declare(
    cpr
    GIT_REPOSITORY https://github.com/libcpr/cpr.git
    GIT_TAG 1.11.1  
    )
    set(CPR_BUILD_TESTS OFF CACHE BOOL "Don't build tests")
    set(CPR_ENABLE_SSL ON CACHE BOOL "Enable SSL support")
    FetchContent_MakeAvailable(cpr)
endif()


add_executable(${PROJECT_NAME} src/main.cpp "src/smedia_embed.cpp"  "src/clash.cpp" "src/clash.h" "src/leetcode.cpp" "src/leetcode.h")

if(APPLE)
    # Find DPP for Mac 
    include_directories(/opt/homebrew/opt/libdpp/include)
    target_link_libraries(${PROJECT_NAME} PRIVATE /opt/homebrew/opt/libdpp/lib/libdpp.dylib)
elseif(WIN32)
    # Find DPP for Windows, assumes VCPKG
    find_package(DPP CONFIG REQUIRED)
    find_package(cpr CONFIG REQUIRED)
    target_link_libraries(${PROJECT_NAME} PRIVATE dpp::dpp)
else()
    # Linux/Raspberry Pi config
    target_include_directories(${PROJECT_NAME} PRIVATE ${dpp_SOURCE_DIR}/include) 
    target_link_libraries(${PROJECT_NAME} PRIVATE dpp)
endif()

# Only find CPR if wind otherwise use fetched ver
if(WIN32)
    find_package(cpr CONFIG REQUIRED)
    target_link_libraries(${PROJECT_NAME} PRIVATE cpr::cpr)
else()
    target_link_libraries(${PROJECT_NAME} PRIVATE cpr)
endif()

target_link_libraries(${PROJECT_NAME} PRIVATE nlohmann_json::nlohmann_json)