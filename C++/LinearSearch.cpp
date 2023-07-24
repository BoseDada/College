#include <iostream>
using namespace std;

int main()
{
    int n,arr[10];//0
    int ele;//0
    cout << "Enter array length: ";//1
    cin >> n;//1
    for (int i=0; i<n; i++){//n
        cout << "Enter number: ";//n+1
        cin >> ele;//n+1
        arr[i] = ele;//n+1
    }//0
    int num; //0
    cout << "Enter number to be searched: ";//1
    cin >> num;//1
    for (int i=0; i<n; i++){//n+1
        if (arr[i] == num){//n
            cout << "Number found at index " << i;//n
        }//0
    }//0
}//0

//step count = 0+0+1+1+n+n+1+n+1+n+1+0+0+1+1+n+1+n+n
//           = 7n+8