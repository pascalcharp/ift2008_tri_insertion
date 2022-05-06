set(TEST_SOURCES tests_tri_insertion.cpp ${PROJECT_SOURCE_DIR}/tri_insertion.cpp ${PROJECT_SOURCE_DIR}/tri_insertion.h)

add_executable(
        test_tri_insertion
        ${TEST_SOURCES}
)

target_include_directories(test_tri_insertion PRIVATE ${PROJECT_SOURCE_DIR} )

target_link_libraries(
        test_tri_insertion
        gtest_main
        gtest
        pthread
)

include(GoogleTest)
gtest_discover_tests(test_tri_insertion)