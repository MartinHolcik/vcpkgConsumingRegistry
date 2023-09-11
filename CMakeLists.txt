# CMakeList.txt : CMake project for vcpkgConsumingRegistry, include source and define project specific logic here.

cmake_minimum_required (VERSION 3.8)

project ("vcpkgConsumingRegistry")

# Set CMAKE_PREFIX_PATH to include vcpkg's installed packages
# set(CMAKE_PREFIX_PATH "${CMAKE_PREFIX_PATH};/home/holm/.vs/vcpkgConsumingRegistry/build/linux-ARMv7-debug-vcpkg/vcpkg_installed/x64-linux/")
# set(CMAKE_GENERATOR_PLATFORM "x64")

#LELY CANopen master library form our custom registries
find_package("lely-canopen" REQUIRED)

# Add source to this project's executable.
add_executable (vcpkgConsumingRegistry "vcpkgConsumingRegistry.cpp" "vcpkgConsumingRegistry.h")

# TODO: Add tests and install targets if needed.
target_link_libraries(vcpkgConsumingRegistry PRIVATE lely-canopen::lely-canopen)