#include "quick.h"
#include <iostream>

Quick::Quick(std::string p, std::string t)
{
    pattern = p;
    text = t;
}

void Quick::algorithm()
{

    // ez jo
    std::vector<int> vec(256, pattern.length() + 1);

    for(int i = 0; i < pattern.length(); ++i){
        vec[pattern[i]] = pattern.length() - i;
    }


    int i = 0;
    int j = 0;

    while(i < text.length() - pattern.length()){
        if(text[i + j] == pattern[j]){
            ++j;
            std::cout << ".";
            if(j == pattern.length()){
                std::cout << "qtalalat : " << i << std::endl;
                j = 0;
                i = i + vec[text[i + pattern.length()]];
            }
        }else{
            i = i + vec[text[i + pattern.length()]];
            j = 0;
        }
    }

    if( i == text.length() - pattern.length()){
        int k;
       for(k = 0; k < pattern.length(); ++k){
            if(text[i + j] != pattern[j]) break;
        }
            if(k == pattern.length()){
                std::cout << "q illeszkedik : " << i + 1 << std::endl;
            }

    }
}

void Quick::writeOutDatas()
{

}
