//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
  public:
    string gameResult (string s)
        {
            if(s == "RR" || s == "PP" || s == "SS" )
            {
                return "DRAW";
            }
            else if(s == "RS" || s == "SP" || s == "PR")
            {
                return "A";
            }
            else
            {
                return "B";
            }            
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.gameResult (s) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends