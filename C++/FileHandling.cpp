#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile;
    inputFile.open("sample.txt");
    ofstream outputFile; 
    outputFile.open("example.txt"); 

    if (outputFile.is_open()){
        char ch;
        while(inputFile.get(ch)){
            outputFile << ch;
        }
    }
    inputFile.close();
    outputFile.close();
    return 0;
}
