#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    
    cout << "Enter a string: ";
    cin >> str;

    int n = strlen(str);

    int dp[100][100];

    for (int i = 0; i < n; i++) 
	{
        dp[i][i] = 1;
    }

   
    for (int len = 2; len <= n; len++)
	
	 {
        for (int i = 0; i < n - len + 1; i++)
		 {
            int j = i + len - 1;

            if (str[i] == str[j])
			 {
                if (len == 2)
                    dp[i][j] = 2;
                else
                    dp[i][j] = dp[i + 1][j - 1] + 2;
            }
			 else
			 {
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
            }
        }
    }

    cout << "Length of Longest Palindromic Subsequence: " << dp[0][n - 1];

    return 0;
}



