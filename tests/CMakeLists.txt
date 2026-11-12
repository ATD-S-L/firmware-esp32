add_executable(test_main test_main.c)
target_include_directories(test_main PRIVATE ${PROJECT_SOURCE_DIR}/include)

add_test(NAME MainTest COMMAND test_main)
