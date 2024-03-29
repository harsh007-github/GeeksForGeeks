//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        bitset<1000000> vis;
        for(int i = 0; i < N; i++)
        {
            int num = frogs[i];
            if(num <= leaves && !vis[num])
            {
                for(int j = num; j <= leaves; j += num)
                {
                    vis.set(j);
                }
            }
        }
        int visited = leaves - vis.count();
        return visited;
    }
};


//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, leaves;
        cin >> N >> leaves;
        int frogs[N];
        for (int i = 0; i < N; i++) {
            cin >> frogs[i];
        }

        Solution ob;
        cout << ob.unvisitedLeaves(N, leaves, frogs) << endl;
    }
}
// } Driver Code Ends