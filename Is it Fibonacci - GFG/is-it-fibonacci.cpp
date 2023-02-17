//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int N, int K, vector<long long> GeekNum) 
    {
        vector<long long>ans(N);
        for(int a = 0; a < GeekNum.size(); a++)
        {
            ans[a] = GeekNum[a];
        }
        long long int sum = 0, i = 0, b = 0;
        for(int j = K; j < N; j++)
        {
            for(i = b; i < j; i++)
            {
                sum+= ans[i];
            }
            ans[i] = sum;
            sum = 0;
            b++;
        }
        return ans[N - 1];
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends