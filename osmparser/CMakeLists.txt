cmake_minimum_required(VERSION 3.10)


# Define variables
set(LIB_INCLUDE_DIR inc)
set(LIB_FILES        
        src/util.cc
        src/member.cc
        src/node.cc
        src/relation.cc
        src/way.cc
        src/object.cc
        )

# Declare the library (and define sources)
add_library(osmparser STATIC ${LIB_FILES}) #

# Declare the include dir (to allow <StaticLib.hpp>)
target_include_directories(osmparser PUBLIC
                          "${LIB_INCLUDE_DIR}"
                          )

target_link_libraries(osmparser PUBLIC
	tinyxml2
)