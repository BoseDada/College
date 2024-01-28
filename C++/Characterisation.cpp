#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <regex>
using namespace std;

vector<string> cppKeywords = {
        "alignas", "alignof", "and", "and_eq", "asm", "auto", 
        "bitand", "bitor", "bool", "break", "case", "catch", 
        "char", "char8_t", "char16_t", "char32_t", "class", 
        "compl", "concept", "const", "consteval", "constexpr", 
        "const_cast", "continue", "co_await", "co_return", "co_yield", 
        "decltype", "default", "delete", "do", "double", 
        "dynamic_cast", "else", "enum", "explicit", "export", 
        "extern", "false", "float", "for", "friend", "endl", 
        "goto", "if", "inline", "int", "long", 
        "mutable", "namespace", "new", "noexcept", "not", 
        "not_eq", "nullptr", "operator", "or", "or_eq", 
        "private", "protected", "public", "register", "reinterpret_cast", 
        "requires", "return", "short", "signed", "sizeof", 
        "static", "static_assert", "static_cast", "struct", "switch", 
        "template", "this", "thread_local", "throw", "true", 
        "try", "typedef", "typeid", "typename", "union", 
        "unsigned", "using", "virtual", "void", "volatile", 
        "wchar_t", "while", "xor", "xor_eq", "cout", "cin"
    };

    vector<string> cppFunctions = {
        "length", "substr()", "size()",
        "push_back()", "size()", "push_back()","size()", "insert()", 
        "sort()", "find()", "now()", 
        "join()", "detach()"
    };
    
    vector<string> cppPunctuators = {
        "(", ")", "[", "]", "{", "}", ",", ";", ":", "."
    };

    vector<string> cppOperators = {
    "+", "-", "/", "*", "%", "<", ">", "&", "|", "=", "^",
    "!", "<<", ">>", "==", "+=", "++", "--", "!=", "||", "&&"
    };

    vector<string> datatypes = {
        "int","float","double","long int", "short int","string", "char"
    };

int variablefinder(string token){
    for (int i=0; i < cppKeywords.size(); i++){
        if (token == cppKeywords[i])
        return 0;
    }
    return 1;
}

int main()
{
    regex intChecker("\\d+");
    regex varChecker("^[a-zA-Z_]\\w*$");
    regex funcChecker("^[a-zA-Z_]\\w*[(]\\w*\\s?\\w*[)]$");

    ifstream InputFile;
    InputFile.open("sample.txt");
    ofstream OutputFile;
    OutputFile.open("new.txt");
    int keywords = 0;
    int pdfunctions = 0;
    int punctuators = 0;
    int operators = 0;
    int number = 0;
    int variable = 0;
    OutputFile << '[';
    if (InputFile.is_open()){
        string token;
        while (InputFile >> token){
        for (int i = 0; i < cppKeywords.size(); i++) {
            if (token == cppKeywords[i]) {
                keywords++;
            }
        }   
        for (int i=0; i < cppFunctions.size(); i++){
            if (token == cppFunctions[i]){
                pdfunctions++;
            }
        }
        for (int i=0; i < cppPunctuators.size(); i++){
            if (token == cppPunctuators[i]){
                punctuators++;
            }
        }
        for (int i=0; i < cppOperators.size(); i++){
            if (token == cppOperators[i]){
                operators++;
            }
        }
        if (regex_match(token, intChecker)){
            number++;
        }
        if (regex_match(token,varChecker)){
            if (variablefinder(token)){
                variable++;
            }
        }

        OutputFile << token << ',';
    }
    }
    OutputFile << ']';
    cout << "Keywords: " << keywords << endl;
    cout << "Pre-defined Functions: " << pdfunctions << endl;
    cout << "Punctuators: " << punctuators << endl;
    cout << "Operators: " << operators << endl;
    cout << "Variables: " << variable << endl;
    cout << "Numbers/Constants: " << number << endl;
    InputFile.close();
    OutputFile.close();
    return 0;
}

