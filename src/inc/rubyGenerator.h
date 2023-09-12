#include <fstream>

void rubyGenerator() {
    std::ofstream file("main.rb");
    file << "puts \"Hello, World!\"";
    file.close();
}