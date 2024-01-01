#include <iostream>
#include <string>
using namespace std;

int isOperator(char arr)
{
    switch (arr){
        case '+': return 1;
        case '-': return 1;
        case '*': return 1;
        case '/': return 1;
        case '^': return 1; 
    }

    return 0;
}

int isOperand(char arr)
{
    if (arr >= 65 && arr <= 90 || arr >= 97 && arr <= 122){
            return 1;
    }
    return 0;
}

int inPrecedence(char stac){
        switch (stac){
            case '+': return 2;
            case '-': return 2;
            case '*': return 4;
            case '/': return 4;
        }
    
    return 0;
}

int outPrecedence(char arr){
        switch (arr){
            case '+': return 1;
            case '-': return 1;
            case '*': return 3;
            case '/': return 3;
        }
    
    return 0;
}

void infixtopost(char arr[],int n)
{
    int top = -1;
    char stac[20];
    for (int i=0; i<n; i++){
        if (isOperand(arr[i])){
            cout << arr[i] << " ";
        }
        else if (isOperator(arr[i])){
            if (top == -1 || outPrecedence(arr[i]) > inPrecedence(stac[top])){
                top++;
                stac[top] = arr[i];
            }
            else{
                while (top != -1 && outPrecedence(arr[i]) < inPrecedence(stac[top])){
                    cout << stac[top];
                    top--;
                }
                top++;
                stac[top] = arr[i];
            }
        }   
    }
    cout << stac[top];
    top--;
}

int main()
{
    int n;
    cout << "Enter expression length: ";
    cin >> n;
    char arr[20];
    
    for (int i=0; i<n; i++){
        cout << "Enter character: ";
        cin >> arr[i];
    }
    infixtopost(arr,n);
    return 0;
}