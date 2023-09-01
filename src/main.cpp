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
    } else if(arg == "node" || arg == "nodejs") {
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
        return 0;
    } else if(arg == "c") {
        std::string command = "mkdir src";
        system(command.c_str());
        command = "mkdir src/inc";
        system(command.c_str());
        command = "mkdir bin";
        system(command.c_str());
        std::ofstream file("src/main.c");
        file << "#include <stdio.h>\n"
            << "\n"
            << "int main() {\n"
            << "\tprintf(\"Hello world!\\n\");\n"
            << "\treturn 0;\n"
            << "}";
        file.close();
        std::ofstream file2("Makefile");
        file2 << "CC = gcc\n"
            << "CFLAGS = -Wall -Wextra -Werror -I./src/inc\n"
            << "SRC = src/main.c\n"
            << "OBJ = $(SRC:.c=.o)\n"
            << "NAME = bin/main\n"
            << "\n"
            << "all: $(NAME)\n"
            << "\n"
            << "$(NAME): $(OBJ)\n"
            << "\t$(CC) $(CFLAGS) -o $(NAME) $(OBJ)\n"
            << "\n"
            << "clean:\n"
            << "\trm -f $(OBJ)\n"
            << "\n"
            << "fclean: clean\n"
            << "\trm -f $(NAME)\n"
            << "\n"
            << "re: fclean all\n"
            << "\n"
            << ".PHONY: all clean fclean re";
        file2.close();
        return 0;
    }
}