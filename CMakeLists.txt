# CMakeList.txt : CMake project for vcpkgConsumingRegistry, include source and define project specific logic here.

cmake_minimum_required (VERSION 3.8)

project ("vcpkgConsumingRegistry")

# Lely-CANopen master library (from our custom registries)
# find_package("lely-canopen" REQUIRED)

# Add source to this project's executable.
add_executable (vcpkgConsumingRegistry "vcpkgConsumingRegistry.cpp" "vcpkgConsumingRegistry.h")

# Lely-CANopen master library (from our custom registries)
target_include_directories(vcpkgConsumingRegistry PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/out/build/linux-debug-vcpkg/vcpkg_installed/x64-linux/include)

target_link_directories(vcpkgConsumingRegistry PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/out/build/linux-debug-vcpkg/vcpkg_installed/x64-linux/lib/)

target_link_libraries(vcpkgConsumingRegistry
	PUBLIC lely-coapp.a
	PUBLIC lely-co.a
	PUBLIC lely-io2.a
	PUBLIC lely-can.a
	PUBLIC lely-ev.a
	PUBLIC lely-tap.a
	PUBLIC lely-util.a
	PUBLIC lely-libc.a
)