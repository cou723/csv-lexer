#include <fstream>
#include <iostream>
#include <vector>
#include "CsvParser.hpp"
#include<iostream>
#include<sstream>
int main(int argc, char const* argv[]) {
    if (argc != 2)
        return 1;
    std::ifstream inputFile(argv[1]);
    std::string fileContents;
    if (inputFile.is_open()) { // check if the file was opened successfully
        std::stringstream buffer;
        buffer << inputFile.rdbuf(); // read the entire file into the stringstream
        fileContents = buffer.str(); // get the string contents of the stringstream

        std::cout << fileContents << std::endl; // output the file contents to the console
        inputFile.close(); // close the file
    } else {
        std::cout << "Unable to open file" << std::endl;
    }
    CsvParser csv = CsvParser(fileContents);
    std::cout << csv << std::endl;
    return 0;
}
