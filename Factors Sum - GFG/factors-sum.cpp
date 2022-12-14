//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
    long long factorSum(int N)
    {
        long long sum = 0;
        for(int i = 1; i * i <= N; i++)
        {
            if(N % i == 0)
            {
                sum += i ;
                if(N / i != i)
                {
                    sum += N / i; 
                }    
            }
            
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        Solution ob;
       	cout <<  ob.factorSum(N) << "\n";
   
    }
    return 0;
}

// } Driver Code Ends