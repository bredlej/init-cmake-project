add_executable(test_mylibrary test_mylibrary.c)
target_link_libraries(test_mylibrary myproject_library Unity)
add_test(test_myproject_all test_mylibrary)
