add_executable(PID-app main.cpp PID.cpp generalPID.cpp)
include_directories(
    ${CMAKE_SOURCE_DIR}/include
)
