#include <iostream>
using namespace std;

//Write a program to implement insertion sort

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main() {
    int n,arr[10];
    cout << "Name: Adyot Bose" << endl;
    cout << "EnrolmentNo: A2305221082" << endl;
    cout << "Enter size: ";
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cout << "Enter element: ";
        cin >> arr[i];
    }
    insertionSort(arr, n);

    for (int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

