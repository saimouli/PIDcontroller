set(GTEST_SHUFFLE 1)

add_executable(
    cpp-test
    main.cpp
    mockgeneralPID.h
    GmockStatic.h
    testPID.cpp
    ../app/PID.cpp
    ../app/generalPID.cpp
)

target_include_directories(cpp-test PUBLIC ../vendor/googletest/googletest/include PUBLIC ../vendor/googletest/googlemock/include ${CMAKE_SOURCE_DIR}/include)

target_link_libraries(cpp-test PUBLIC gtest PUBLIC gmock)
