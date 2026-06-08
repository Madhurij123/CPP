#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> v(n);
    
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) 
	{
        cin >> v[i];
    }

    int k;
    cout << "Enter rotation count: ";
    cin >> k;

    k = k % n;

    // Right rotation
    for (int r = 0; r < k; r++)
	 {
        int last = v[n - 1];
        for (int i = n - 1; i > 0; i--) {
            v[i] = v[i - 1];
        }
        v[0] = last;
    }

    cout << "\nAfter rotation:\n";
    for (int i = 0; i < n; i++)
	 {
        cout << v[i] << " ";
    }

    cout << "\n\nCount for each element:\n";
    for (int i = 0; i < n; i++) 
	{
        int cnt = 0;
        for (int j = i + 1; j < n; j++)
		 {
            if (v[j] <= v[i]) 
			{
                cnt++;
            }
        }
        cout << v[i] << " -> " << cnt << endl;
    }

    return 0;
}

