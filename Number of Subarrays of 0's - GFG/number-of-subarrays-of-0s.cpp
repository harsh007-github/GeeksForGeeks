//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

long long int no_of_subarrays(int n, vector<int> &arr) 
{
    long long int len = 0, ans = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i] == 0)
        {
            len++;
        }
        else
        {
            ans += len * (len + 1)/ 2;
            len = 0;
        }
    }
    ans += len * (len + 1)/ 2;
    return ans;
    
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cout << no_of_subarrays(n, arr) << endl;
    }
}

// } Driver Code Ends