cmake_minimum_required(VERSION 3.10)
project(custom-library VERSION 1.0)

find_package(CURL REQUIRED)

add_library(custom-library SHARED
    library/src/library.cpp
)

target_include_directories(custom-library PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CURL_INCLUDE_DIRS}
)

target_link_libraries(custom-library PUBLIC
    ${CURL_LIBRARIES}
)

include(GenerateExportHeader)
generate_export_header(custom-library)


install(TARGETS custom-library
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    RUNTIME DESTINATION bin
    INCLUDES DESTINATION include
)

install(FILES 
    ${CMAKE_CURRENT_SOURCE_DIR}/include/library.hpp
    DESTINATION include
)