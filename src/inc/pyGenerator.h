#include <fstream>

void pyGenerator() {
    std::ofstream file("main.py");
    file << "print(\"Hello world!\")";
    file.close();
}