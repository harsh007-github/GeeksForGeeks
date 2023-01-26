//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        //Brute Force
        string small = "";
        string large = "";
        for(int i  = 0; i < n; i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                large += str[i];
            }
            else
            {
                small += str[i];
            }
        }
        int l = 0 , s = 0;
        sort(small.begin() , small.end());
        sort(large.begin() , large.end());
        for(int j = 0; j < n; j++)
        {
            if(str[j] >= 'A' && str[j] <= 'Z')
            {
                str[j] = large[l];
                l++;
            }
            else
            {
                str[j] = small[s];
                s++;
            }
        }
        return str;
        
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
		cin>>n;
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends