//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int equilibriumPoint(long long arr[], int n) 
    {
        if(n == 1)
        return 1;
        if(n == 2)
        return -1;
        int sum = arr[0];
        int  total = 0;
        for(int a = 0; a < n; a++)
        {
            total += arr[a];
        }
        for(int i = 1; i < n; i++)
    {
        if(total - arr[i] == 2 * sum)
        {
            return i + 1;
        }
        sum += arr[i];
    }
        return -1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends