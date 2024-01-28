#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream InputFile;
    InputFile.open("sample.txt");
    ofstream OutputFile;
    OutputFile.open("new.txt");
    char ch;
    while (InputFile.get(ch)){
        OutputFile << ch;
    }
    
    InputFile.close();
    OutputFile.close();
    return 0;
}