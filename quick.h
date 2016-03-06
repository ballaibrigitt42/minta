#ifndef QUICK_H
#define QUICK_H
#include <string>
#include <vector>

class Quick{
private:
    std::string pattern;
    std::string text;
    int algCount;
public:
    Quick(std::string pattern, std::string text);
    Quick();
    void algorithm();
    void writeOutDatas();
};
#endif // QUICK_H
