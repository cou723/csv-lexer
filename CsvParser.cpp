#include"CsvParser.hpp"
#include<iostream>

ostream &operator<<(ostream &out, const CsvParser &cp) {
    out << "------------" << std::endl;
    for (size_t i = 0; i < cp.data.size(); ++i) {
        for (size_t j = 0; j < cp.data[i]->size(); ++j) {
            out << (*cp.data[i])[j] << ",";
        }
        out << std::endl;
    }
    out << "------------";
    return out;
}

CsvParser::CsvParser(std::string str) {
    size_t i = 0;
    data.push_back(new vector<string>());
    while (str[i] != '\0') {
        string word = "";
        while (str[i] != ',' && str[i] != '\n') {
            word += str[i];
            i++;
        }
        data.back()->push_back(word);
        if (str[i] == '\n') {
            data.push_back(new vector<string>());
        }
        i++;
    }
}

CsvParser::~CsvParser() {
    data.clear();
}
