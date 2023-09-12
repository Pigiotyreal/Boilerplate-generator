#include <iostream>
#include <string>
#include <fstream>
#include "inc/htmlGenerator.h"
#include "inc/pyGenerator.h"
#include "inc/jsGenerator.h"
#include "inc/nodeGenerator.h"
#include "inc/cGenerator.h"
#include "inc/cppGenerator.h"
#include "inc/javaGenerator.h"
#include "inc/rubyGenerator.h"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "One argument is required." << std::endl;
        return 1;
    }

    std::string arg = argv[1];
    if(arg == "html") {
        htmlGenerator();
        return 0;
    } else if(arg == "py" || arg == "python") {
        pyGenerator();
        return 0;
    } else if(arg == "js" || arg == "javascript") {
        jsGenerator();
    } else if(arg == "node" || arg == "nodejs") {
        nodeGenerator();
        return 0;
    } else if(arg == "c") {
        cGenerator();
        return 0;
    } else if(arg == "cpp" || arg == "c++") {
        cppGenerator();
        return 0;
    } else if(arg == "java") {
        javaGenerator();
        return 0;
    } else if(arg == "ruby") {
        rubyGenerator();
        return 0;
    }
}