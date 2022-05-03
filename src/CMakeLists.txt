cmake_minimum_required(VERSION 3.10)

add_library(osmparser STATIC
	"osmimember.cpp"
	"osmnode.cpp"
	"osmobject.cpp"
	"osmrelation.cpp"
	"osmway.cpp"
	"util.cpp"
)

target_link_libraries(osmparser PUBLIC
	tinyxml2
)