#include <fstream>

void jsGenerator() {
    std::ofstream file("index.js");
    file << "console.log(\"Hello world!\")";
    file.close();
}