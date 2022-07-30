//
//  main.cpp
//  zooSim
//
//  Created by Anton Sukhorukov on 31/07/2022.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
    
    std::string newstring;
    
    std::cout << "Hello, welcome to the Zoo simulator! Are you new?\n";
    
    
    std::cin >> newstring;
    
    std::cout << "nice to know it is: " <<newstring << std::endl;
    
    return 0;
}
