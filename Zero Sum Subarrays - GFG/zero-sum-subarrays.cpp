//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    long long int findSubarray(vector<long long int> &arr, int n ) 
    {
        long long int sum = 0 , ans = 0;
        map<long long int , long long int>m;
        for(int i = 0; i < n; i ++)
        {
            m[sum]++; // 1 -> 1
            sum += arr[i]; // 1
            ans += m[sum]; // 1
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n; //input size of array
       
        vector<long long int> arr(n,0);
        
        for(int i=0;i<n;i++)
            cin>>arr[i]; //input array elements
        Solution ob;
        cout << ob.findSubarray(arr,n) << "\n";
    }
	return 0;
}
// } Driver Code Ends