#include <fstream>

void htmlGenerator() {
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
}