//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
   	int maximum_Cuts(int n)
   	{
   	    int arr[n];
   	    arr[0] = 2;
   	    arr[1] = 4;
   	    for(int i = 2; i < n; i++)
   	    {
   	        arr[i] = arr[i - 1] + i + 1;
   	        
   	    }
   	    return arr[n - 1];
   	    
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.maximum_Cuts(n);
		cout << ans <<"\n";
	}  
	return 0;
}
// } Driver Code Ends