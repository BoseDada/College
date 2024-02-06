#include <iostream>
#include <fstream>
using namespace std;

void removingleftrecursion(char arr[],int size, char ss){
    cout << endl;
    char alpha[10];
    char beta[10];
    for (int i = 0; i < size; i++) {
        if (arr[i] == '>') {
            if (arr[i + 1] == ss) {
                int j = i;
                int k = 0;
                while (arr[j + 2] != '|' && arr[j + 2] != '}') {
                    alpha[k] = arr[j + 2];
                    j++;
                    k++;
                }
            }
        }
        if (arr[i] == '|') { 
            int k = i;
            int m = 0;
            while (arr[k + 1] != ss && arr[k + 1] != '}') {
                beta[m] = arr[k + 1];
                k++;
                m++;
            }
        }
    }
    

    char rep = 'G';
    cout << "Left recursion removed: " << endl;
    for (int i=0; i<1; i++){
        cout << ss << '>' << beta[i] << rep << endl;
    }
    for (int j=0; j<1; j++){
        cout << rep << '>' << alpha[j] << rep << "|" << '$' << endl;
    }
}

int main()
{
    ifstream inputfile;
    inputfile.open("newfile.txt");
    char arr[50];
    int i = 0;
    if (inputfile.is_open()){
        while(!inputfile.eof()){
            inputfile >> arr[i];
            i++;
        }
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Original Production: } denotes end of preoduction" << endl;
    for (int i=0; i<size; i++){
        cout << arr[i];
    }
    cout << endl;
    cout << "Start symbol: ";
    char ss;
    for (int i=0; i<size; i++){
        if (arr[i] == '>') break;
        ss = arr[i];
        cout << arr[i];
    }
    cout << endl;
    for (int i=0; i<size; i++){
        if (arr[i] == '>'){
            if (arr[i+1] == ss){
                cout << "Left recursion spotted";
                removingleftrecursion(arr,size,ss);
            }
        }
    }
    inputfile.close();
    return 0;
}