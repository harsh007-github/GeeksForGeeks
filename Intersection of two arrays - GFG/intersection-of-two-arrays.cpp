//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) 
    {
        map<int , int>mp;
        map<int , bool>flag;
        int count = 0;
        for(int i = 0; i < n; i++)
        {
            if(mp[a[i]] >= 1)
            {
                continue;    
            }
            
            mp[a[i]]++;
        }
        for(int j = 0; j < m; j++)
        {
            
            if(mp[b[j]] > 0 && flag[b[j]] != true)
            {
                count++;
            }
            flag[b[j]] = true;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends