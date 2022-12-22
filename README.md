# OSMParser

OSMParser is a C++ library for reading and parsing OSM XML data.
It uses tinyxml2 to read map data from a file and creates a C++ object to store all relevant data.

## OSMParser does
* extract all nodes, ways, relations from the XML file
* tag each node, way, relation accordingly
* make it easy to retrieve references (`nd`- and `member`-tags are stored as pointers)

## OSMParser does not
* render map data
* assemble relations like multipolygons
* query map data

To see OSMParser in action check out my [related project](https://github.com/Lauchmelder23/MapViewer)

## Example
* main.cc has example way of extracting number of nodes, ways, relations from an OSM file

## To Compile and Run

# On Linux

* mkdir build
* cd build
* cmake ..
* make -j4
* ./main ../sampledata/sample.osm

# On Windows

* mkdir build
* cd build
* cmake ..
* cmake --build . -j4
* main.exe ../sampledata/sample.osm
