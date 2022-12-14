//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	public:
	    int fact(int n)
	    {
	        int ans = 1;
	        for(int i = 1; i <= n; i++)
	        {
	            ans *= i;
	        }
	        return ans;
	    }
		int is_StrongNumber(int n)
		{
		    int sum = 0 , num = n , temp = n;
            while(num != 0)
            {
                n = num % 10;
                sum += fact(n);
                num = num /10;
            }
            if(sum == temp)
            {
                return 1;
            }
            return 0;
		}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_StrongNumber(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends