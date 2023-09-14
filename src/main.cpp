#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include "inc/htmlGenerator.h"
#include "inc/pyGenerator.h"
#include "inc/jsGenerator.h"
#include "inc/nodeGenerator.h"
#include "inc/cGenerator.h"
#include "inc/cppGenerator.h"
#include "inc/javaGenerator.h"
#include "inc/rubyGenerator.h"
#include "inc/phpGenerator.h"
#include "inc/goGenerator.h"
#include "inc/kotlinGenerator.h"

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cout << "One argument is required." << std::endl;
        return 1;
    }

    std::string arg = argv[1];
    std::transform(arg.begin(), arg.end(), arg.begin(), ::tolower);

    if(arg == "html") {
        htmlGenerator();
    } else if(arg == "py" || arg == "python") {
        pyGenerator();
    } else if(arg == "js" || arg == "javascript") {
        jsGenerator();
    } else if(arg == "node" || arg == "nodejs") {
        nodeGenerator();
    } else if(arg == "c") {
        cGenerator();
    } else if(arg == "cpp" || arg == "c++") {
        cppGenerator();
    } else if(arg == "java") {
        javaGenerator();
    } else if(arg == "ruby") {
        rubyGenerator();
    } else if(arg == "php") {
        phpGenerator();
    } else if(arg == "go") {
        goGenerator();
    } else if(arg == "kotlin") {
        kotlinGenerator();
    } else {
        std::cout << "Invalid argument." << std::endl;
        return 1;
    }

    return 0;
}