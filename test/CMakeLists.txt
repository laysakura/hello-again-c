add_executable(run_all_tests run_all_tests.cpp)

if(DEFINED ENV{CPPUTEST_HOME})
    message("Using CppUTest found in $ENV{CPPUTEST_HOME}")
else()
    message(FATAL_ERROR "CPPUTEST_HOME is not set; You must tell CMake where to find CppUTest")
endif()

add_library(cpputest STATIC IMPORTED)
set_property(TARGET cpputest PROPERTY
             IMPORTED_LOCATION $ENV{CPPUTEST_HOME}/lib/libCppUTest.a)

add_library(linked_list_test linked_list_test.cpp)
target_include_directories(linked_list_test PUBLIC ${PROJECT_SOURCE_DIR}/include $ENV{CPPUTEST_HOME}/include)

target_link_libraries(run_all_tests cpputest linked_list_test linked_list)
