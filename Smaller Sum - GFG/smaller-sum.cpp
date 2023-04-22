//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    vector<long long> smallerSum(int n,vector<int> &arr)
    {
        map<int, long long>mp;
        vector<long long>v;
        vector<int>aux;
        aux = arr;
        long long sum = 0;
        sort(aux.begin() , aux.end());
        for(int i = 0; i < aux.size();)
        {
            int temp = aux[i];
            mp[aux[i]] = sum;
            while(temp == aux[i])
            {
                sum += aux[i];
                i++;
            }
            
        }
        for(int j = 0; j < arr.size(); j++)
        {
            v.push_back(mp[arr[j]]);
        }
        return v;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob; 
        vector<long long> ans=ob.smallerSum(n,arr);
        for(int i=0;i<n;i++){
            if(i!=n-1){
                cout<<ans[i]<<" ";
            }
            else{
                cout<<ans[i]<<endl;
            }
        }
    }
    return 0;
}
// } Driver Code Ends