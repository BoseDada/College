#include <iostream>
using namespace std;

//Write a program to implement fractional knapsack problem

int main()
{
    cout << "Name: Adyot Bose" << endl;
    cout << "Enrollment no.: A2305221082" << endl;
    int n, i, j, wt, temp, temp1, temp2;
    float sum = 0, total = 0;
    cout << "Enter the number of items: ";
    cin >> n;
    float weight[n], profit[n];
    float ratio[n], x[n];
    cout << "-Enter the weight and profit of each item-";
    cout << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Enter weight: ";
        cin >> weight[i];
        cout << "Enter profit: ";
        cin >> profit[i];
    }
    cout << "Enter the weight of the knapsack: ";
    cin >> wt;
    for (i = 0; i < n; i++)
    {
        ratio[i] = profit[i] / weight[i];
        x[i] = 0;
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (ratio[j] < ratio[j+1])
            {
                temp = ratio[j];
                ratio[j] = ratio[j+1];
                ratio[j+1] = temp;
                temp1 = weight[j];
                weight[j] = weight[j+1];
                weight[j+1] = temp1;
                temp2 = profit[j];
                profit[j] = profit[j+1];
                profit[j+1] = temp2;
            }
        }
    }
    cout << endl;
    cout << "Sorted weights" << endl;
    for (int i=0; i<n; i++)
    {
        cout << weight[i] << " ";
    }
    cout << endl;
    cout << "Sorted profits" << endl;
    for (int i=0; i<n; i++)
    {
        cout << profit[i] << " ";
    }
    cout << endl;
    cout << "Sorted ratios" << endl;
    for (int i=0; i<n; i++)
    {
        cout << ratio[i] << " ";
    }
    cout << endl;
    for (i = 0; i < n; i++)
    {
        if (total + weight[i] <= wt)
        {
            x[i] = 1;
            total += weight[i];
        }
        else
        {
            x[i] = (wt - total) / weight[i];
            total = wt;
            break;
        }
    }
    for (i = 0; i < n; i++)
    {
        sum += x[i] * profit[i];
    }
    cout << endl;
    cout << "The maximum profit is: " << sum;
    cout << endl;
    for (i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }
    return 0;
}



