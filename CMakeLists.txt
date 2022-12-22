cmake_minimum_required(VERSION 3.10)

project(OSMParser)

include_directories(vendor/tinyxml2)
link_directories(vendor/tinyxml2)
add_subdirectory(vendor/tinyxml2)

include_directories(osmparser)
link_directories(osmparser)
add_subdirectory(osmparser)


add_executable(main main.cc)

target_link_libraries(main PUBLIC
	tinyxml2
    osmparser
)