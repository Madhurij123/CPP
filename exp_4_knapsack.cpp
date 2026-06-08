#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, capacity;

    cout << "Enter number of items: ";
    cin >> n;

    int weight[n], profit[n];
    float ratio[n];

    for(int i = 0; i < n; i++)
    {
        cout << "Enter profit and weight of item " << i+1 << ": ";
        cin >> profit[i] >> weight[i];
        ratio[i] = (float)profit[i] / weight[i];
    }

    cout << "Enter knapsack capacity: ";
    cin >> capacity;

    for(int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(ratio[i] < ratio[j])
            {
                swap(ratio[i], ratio[j]);
                swap(profit[i], profit[j]);
                swap(weight[i], weight[j]);
            }
        }
    }

    float totalProfit = 0;
    int currentWeight = 0;

    for(int i = 0; i < n; i++)
    {
        if(currentWeight + weight[i] <= capacity)
        {
            currentWeight += weight[i];
            totalProfit += profit[i];
        }
    }

    cout << "Maximum profit = " << totalProfit << endl;

    return 0;
}



