add_test( test_basic /workspaces/cs225/release-f22/cs225project/build/test test_basic  )
set_tests_properties( test_basic PROPERTIES WORKING_DIRECTORY /workspaces/cs225/release-f22/cs225project/build)
add_test( test_empty_line /workspaces/cs225/release-f22/cs225project/build/test test_empty_line  )
set_tests_properties( test_empty_line PROPERTIES WORKING_DIRECTORY /workspaces/cs225/release-f22/cs225project/build)
add_test( test_medium /workspaces/cs225/release-f22/cs225project/build/test test_medium  )
set_tests_properties( test_medium PROPERTIES WORKING_DIRECTORY /workspaces/cs225/release-f22/cs225project/build)
set( test_TESTS test_basic test_empty_line test_medium)
