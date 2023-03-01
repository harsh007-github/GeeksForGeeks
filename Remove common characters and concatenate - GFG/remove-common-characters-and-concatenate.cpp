//{ Driver Code Starts
// C++ program Find concatenated string with 
// uncommon characters of given strings 
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends


class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        map<char , int>mp;
        string ans;
        for(int i = 0; i < s2.size(); i++)
        {
            mp[s2[i]]++;
        }
        for(int j = 0; j < s1.size(); j++)
        {
            if(mp[s1[j]] > 0)
            {
                continue;
            }
            else
            {
                ans += s1[j];
            }
        }
        map<char , int>m;
        for(int i = 0; i < s1.size(); i++)
        {
            m[s1[i]]++;
        }
        for(int j = 0; j < s2.size(); j++)
        {
            if(m[s2[j]] > 0)
            {
                continue;
            }
            else
            {
                ans += s2[j];
            }
        }
        if(ans.size() == 0)
        return "-1";
        return ans;
        
    }

};

//{ Driver Code Starts.

/* Driver program to test above function */
int main() 
{ 
	int t;
	cin >> t;
	
	while(t--){
    	string s1, s2;
    	cin >> s1 >> s2;
    	Solution obj;
    	string res = obj.concatenatedString(s1, s2);
    	cout<<res<<endl;
	}
	return 0; 
}

// } Driver Code Ends