//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Converts arr[0..n-1] to reduced form.
	void convert(int arr[], int n) 
	{
	    map<int , int> firstMap;
	    for(int i  = 0; i < n; i++)
	    {
	        firstMap[i] = arr[i];
	    }
	    sort(arr , arr + n);
	    map<int ,int>secondMap;
	    for(int j = 0; j < n; j++)
	    {
	        secondMap[arr[j]] = j;
	    }
	    for(int k = 0;k < n; k++)
	    {
	        arr[k] = secondMap[firstMap[k]];
	    }
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.convert(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends