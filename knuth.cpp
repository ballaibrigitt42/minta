#include "knuth.h"
#include <iostream>

Knuth::Knuth(std::string p, std::string t)
{
    prefixCount = 0;
    algCount = 0;
    pattern = p;
    text = t;
    setVector();
    calculatePrefixTable();
}

Knuth::Knuth()
{
}

// sets the vector's elements to zero
void Knuth::setVector()
{
    for(int i = 0; i < pattern.size() + 1; ++i)
    {
        prefixTable.push_back(0);
    }
}

// calculate the prefix table
 void Knuth::calculatePrefixTable()
 {
    int i = 1;
    int j = 0;
    prefixTable[0] = 0;
    prefixCount += 4;
    while( i < pattern.length() - 1){
        ++prefixCount;
        if(pattern[i] == pattern[j]){
            ++i;
            ++j;
            prefixTable[i] = j;
            prefixCount += 3;
        }
        else{
            ++prefixCount;
            if(j == 0){
                ++i;
                prefixTable[i] = 0;
                prefixCount += 2;
            }else{
                j = prefixTable[j];
                ++prefixCount;
            }
        }
    }
 }

// this is the kmp algorithm
 void Knuth::algorithm()
 {
   int i = 0;
   int j = 0;
   algCount += 3;
    algCount += 2;
    while(i < text.length() && j < pattern.length()){
        ++algCount;
        if(text[i] == pattern[j]){
            ++i;
            ++j;
            algCount += 2;
        }else{
            algCount += 2;
            if(j == 0){
                ++i;
            }else{
                j = prefixTable[j];
            }
        }
    }
   if(j == pattern.length()){
        std::cout << "talalat : " << i - pattern.length() << std::endl;
        algCount += 1;
   }

 }

// this writes out the prefix table
 void Knuth::writeOutPrefixTable()
 {
     //std::cout << "negy" << std::endl;
     for(unsigned int i = 0; i < prefixTable.size(); ++i)
     {
         std::cout << prefixTable[i];
     }
     std::cout << std::endl;
 }

void Knuth::writeOutDatas()
{
    std::cout << "A prefix table muveletek szama : " << prefixCount << std::endl;
    std::cout << "Az algoritmsu muveleteinek a szama : " << algCount << std::endl;
}
