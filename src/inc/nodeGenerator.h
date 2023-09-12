#include <fstream>
#include <string>

void nodeGenerator() {
    std::string command = "mkdir src";
    system(command.c_str());
    std::ofstream file("src/index.js");
    file << "console.log(\"Hello world!\")";
    file.close();
    std::ofstream file2("package.json");
    file2 << "{\n"
        << "\t\"name\": \"my-node-project\",\n"
        << "\t\"version\": \"1.0.0\",\n"
        << "\t\"description\": \"This is my node project!\",\n"
        << "\t\"main\": \"src/index.js\",\n"
        << "\t\"scripts\": {\n"
        << "\t\t\"start\": \"node src/index.js\"\n"
        << "\t},\n"
        << "\t\"keywords\": [],\n"
        << "\t\"author\": \"\",\n"
        << "\t\"license\": \"ISC\"\n"
        << "}";
    file2.close();
}