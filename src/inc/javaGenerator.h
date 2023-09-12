#include <fstream>

void javaGenerator() {
    std::ofstream file("Main.java");
    file << "public class Main {\n"
        << "\tpublic static void main(String[] args) {\n"
        << "\t\tSystem.out.println(\"Hello, World!\");\n"
        << "\t}\n"
        << "}";
    file.close();
}