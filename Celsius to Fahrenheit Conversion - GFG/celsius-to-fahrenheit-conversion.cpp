//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    double celciusToFahrenheit(int C)
    {
        double far = (C * 1.8) + 32;
        return far;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout <<setprecision(2)<<fixed<< ob.celciusToFahrenheit(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends