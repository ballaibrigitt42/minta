#include <iostream>
#include <cstdlib>
#include "knuth.h"
#include "quick.h"

using namespace std;

void chooseFromMenu();
void patAndText(string& pattern, string& text);
void mainText();

int main()
{
    //chooseFromMenu();
    //Knuth k("c", "fcafdafvakcicavakcicak");
    //k.algorithm();
    //k.writeOutDatas();

    Quick q("alf", "alffff");
    q.algorithm();

    return 0;
}

void chooseFromMenu()
{
    mainText();

    int choosenNumber;
    string pattern;
    string text;

    do{
        cin >> choosenNumber;
        switch (choosenNumber)
        {
            case 1 : cout << "1-es volt" << endl;
                     patAndText(pattern, text);
                     // knuthAlgorithm();
                break;
            case 2 : cout << "2-es volt" << endl;
                     patAndText(pattern, text);
                     // boyerAlgorithm();
                break;
            case 3 : cout << "exit" << endl;
                     exit(1);
                break;
            default : cout << "Probald megegyszer!" << endl;
        }
    }while(choosenNumber != 1 && choosenNumber != 2 && choosenNumber != 3);
}

void mainText()
{
    cout << "Melyik algoritmust szeretned hasznalni?" << endl;

    cout << "1 - Knuth-Morris-Pratt" << endl;
    cout << "2 - Boyer-Morre" << endl;
    cout << "3 - exit" << endl << endl;
}


void patAndText(string& pattern, string& text)
{
    cout << "Mi a minta?" << endl;
    cin >> pattern;
    cout << "Mi a szoveg" << endl;
    cin >> text;
}
