#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "One argument is required." << std::endl;
        return 1;
    }

    std::string arg = argv[1];
    if(arg == "html") {
        std::ofstream file("index.html");
        file << "<!DOCTYPE html>\n"
            << "<html lang=\"en\">\n"
            << "<head>\n"
            << "\t<meta charset=\"UTF-8\">\n"
            << "\t<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n"
            << "\t<title>My website!</title>\n"
            << "</head>\n"
            << "<body>\n"
            << "\t<h1>Hello world!</h1>\n"
            << "</body>\n"
            << "</html>";
        file.close();
        return 0;
    } else if(arg == "py" || arg == "python") {
        std::ofstream file("main.py");
        file << "print(\"Hello world!\")";
        file.close();
        return 0;
    } else if(arg == "js" || arg == "javascript") {
        std::ofstream file("index.js");
        file << "console.log(\"Hello world!\")";
        file.close();
    }
}