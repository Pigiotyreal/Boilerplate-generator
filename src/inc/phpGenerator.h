#include <fstream>

void phpGenerator() {
    std::ofstream file("index.php");
    file << "<?php\n"
        << "echo 'Hello, World!';\n"
        << "?>";
    file.close();
}