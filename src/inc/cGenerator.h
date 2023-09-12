#include <fstream>
#include <string>

void cGenerator() {
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
}