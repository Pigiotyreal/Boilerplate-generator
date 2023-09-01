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
        std::ofstream file("index.html");
        file << "<!DOCTYPE html><html lang=\"en\"><head><meta charset=\"UTF-8\"><meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\"><title>My website!</title></head><body><h1>Hello world!</h1></body></html>";
        file.close();
        return 0;
    }

    std::cout << "Hello world!" << std::endl;
    return 0;
}