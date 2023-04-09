#ifndef CSV_PARSER_H
#define CSV_PARSER_H
#include <string>
#include <vector>

using namespace std;

class CsvParser {
   private:
   public:
    vector<vector<string>*> data;
    CsvParser(string file_text);
    ~CsvParser();
};

ostream &operator<<(ostream &out, const CsvParser &cp);

#endif /* CSV_PARSER_H */
