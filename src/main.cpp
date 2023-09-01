#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "One argument is required." << std::endl;
        return 1;
    }

    std::string arg = argv[1];
    if (arg == "html") {
        std::cout << "htmllll" << std::endl;
    }

    std::cout << "Hello world!" << std::endl;
    return 0;
}