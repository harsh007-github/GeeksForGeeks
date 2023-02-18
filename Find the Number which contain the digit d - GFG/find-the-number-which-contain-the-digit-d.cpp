//{ Driver Code Starts
// CPP program to print the number which
// contain the digit d from 0 to n
#include <bits/stdc++.h>
using namespace std;
vector<int> solve(int n, int d);


int main() {
    int t, n, d;
    cin >> t;
    while (t--) {
        cin >> n >> d;
        vector<int> v = solve(n, d);
        for (auto it : v) cout << it << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends

bool isTwo(int n , int req)
{
    if(n < 10)
    {
        if(n == req)
        return true;
        return false;
    }
    else
    {
        int num = n;
        while(num != 0)
        {
            n = num % 10;
            if(n == req)
            {
                return true;    
            }
            num = num / 10;
        }
        return false;    
    }
    
}
vector<int> solve(int n, int d)
{
    vector<int>v;
    for(int i = 0; i <= n; i++)
    {
        if(isTwo(i , d) == true)
        {
            v.push_back(i);
        }
    }
    if(v.size() == 0)
    {
        return {-1};    
    }
    
    return v;
    
}