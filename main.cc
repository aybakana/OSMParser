#include "osmparser/object.h"
#include <iostream>
#include <string>

int main(int argc, char** argv)
{

    if ( argc != 2 )
    {
        std::cout << "./main <osmFilePath>" <<std::endl;
        exit(0);
    }

    std::string filePath = argv[1];
    osmp::Object obj = osmp::Object(filePath);
    std::cout <<" Number of Nodes: " << obj.GetNodesSize() << std::endl;
    std::cout <<" Number of Ways: " << obj.GetWaysSize() << std::endl;
    std::cout <<" Number of Relations: " << obj.GetRelationsSize() << std::endl;
    
    std::cout <<" Press a number to exit..." << std::endl;
    std::string i;
    std::cin >> i;
    return 0;
}