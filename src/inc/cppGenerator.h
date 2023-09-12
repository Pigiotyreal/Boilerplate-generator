#include <fstream>
#include <string>

void cppGenerator() {
    std::string command = "mkdir src";
    system(command.c_str());
    command = "mkdir src/inc";
    system(command.c_str());
    command = "mkdir bin";
    system(command.c_str());
    std::ofstream file("src/main.cpp");
    file << "#include <iostream>\n"
        << "\n"
        << "int main() {\n"
        << "\tstd::cout << \"Hello world!\" << std::endl;\n"
        << "\treturn 0;\n"
        << "}";
    file.close();
    std::ofstream file2("Makefile");
    file2 << "CC = g++\n"
        << "CFLAGS = -Wall -Wextra -Werror -I./src/inc\n"
        << "SRC = src/main.cpp\n"
        << "OBJ = $(SRC:.cpp=.o)\n"
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
}