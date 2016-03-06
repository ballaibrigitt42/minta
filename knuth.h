#ifndef KNUTH_H
#define KNUTH_H
#include <string>
#include <vector>

class Knuth
{
private:
    std::vector<int> prefixTable;
    std::string pattern;
    std::string text;
    int prefixCount;
    int algCount;
public:
    Knuth(std::string pattern, std::string text);
    Knuth();
    void calculatePrefixTable();
    void algorithm();
    void writeOutPrefixTable();
    void setVector();
    void writeOutDatas();
};

#endif // KNUTH_H
