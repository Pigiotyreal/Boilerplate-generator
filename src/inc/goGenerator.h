#include <fstream>

void goGenerator() {
    std::ofstream file("main.go");
    file << "package main\n"
        << "import \"fmt\"\n"
        << "func main() {\n"
        << "\tfmt.Println(\"Hello, World!\")\n"
        << "}";
    file.close();
}