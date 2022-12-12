//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool canPair(vector<int> nums, int k)
    {
        long long n = nums.size();
        if(n % 2 != 0)
        {
            return false;
        }
        else
        {
            long long count = 0;
            vector<int>vis(100001 , 0);
            for(int i = 0; i < n; i++)
            {
                int x = nums[i] % k;
                if(vis[k - x] > 0 || (x == 0 && vis[0] > 0))
                {
                    if(x == 0)
                    {
                        vis[0]--;
                    }
                    else
                    {
                        vis[k - x]--;
                    }
                    count++;
                    
                }
                else
                {
                    vis[x]++;
                }
            }
            if(2 * count ==  n)
            {
                return true;
            }
            return false;
        }
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++) cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
}
// } Driver Code Ends