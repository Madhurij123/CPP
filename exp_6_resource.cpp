#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, totalResource;

    cout << "Enter number of jobs: ";
    cin >> n;

    string name[100];
    int resource[100], profit[100];

    cout << "Enter job name, resource required, and profit:\n";
    for (int i = 0; i < n; i++) {
        cin >> name[i] >> resource[i] >> profit[i];
    }

    cout << "Enter total available resources: ";
    cin >> totalResource;

    // Sort by profit/resource ratio (descending)
    for (int i = 0; i < n - 1; i++) 
	{
        for (int j = 0; j < n - i - 1; j++)
		 {
            double r1 = (double)profit[j] / resource[j];
            double r2 = (double)profit[j + 1] / resource[j + 1];

            if (r1 < r2) 
			{
                swap(name[j], name[j + 1]);
                swap(resource[j], resource[j + 1]);
                swap(profit[j], profit[j + 1]);
            }
        }
    }

    int usedResource = 0, totalProfit = 0;

    cout << "\nAllocated Jobs: ";
    for (int i = 0; i < n; i++) {
        if (usedResource + resource[i] <= totalResource)
		 {
            usedResource += resource[i];
            totalProfit += profit[i];
            cout << name[i] << " ";
        }
    }

    cout << "\nTotal Profit: " << totalProfit;

    return 0;
}
