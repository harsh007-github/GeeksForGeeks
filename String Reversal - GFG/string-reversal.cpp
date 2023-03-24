//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string reverseString(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<reverseString(s)<<endl;
	    }
}

// } Driver Code Ends


string reverseString(string s)
{
    map<char,int>mp;
    string ans;
    for(int i = s.size() - 1; i >= 0; i--)
    {
        if(mp[s[i]] >= 1)
        {
            continue;
        }
        else
        {
            if(s[i] == 32)
            {
                continue;
            }
            mp[s[i]]++; 
            ans += s[i];
        }
    }
    return ans;
}