#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    inputFile.open("sample.txt");
    ofstream outputFile; 
    outputFile.open("example.txt"); 
    int tokens = 0;
    if (inputFile.is_open()){
        char ch;
        while(inputFile.get(ch)){
            if (ch == ' ' || ch == '\n'){
                tokens += 1;
            }
        }
    }
    cout << tokens << endl;
    inputFile.close();
    outputFile.close();
    return 0;
}