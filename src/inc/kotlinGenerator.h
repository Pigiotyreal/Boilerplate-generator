#include <fstream>

void kotlinGenerator() {
    std::ofstream file("Main.kt");
    file << "fun main(args: Array<String>) {\n"
        << "\tprintln(\"Hello, World!\")\n"
        << "}";
    file.close();
}