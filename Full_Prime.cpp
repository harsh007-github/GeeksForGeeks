//{ Driver Code Starts
//Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    bool isPrime(int N)
    {
        if(N<2)
        {
            return false;
        }
        else
        {
        for(int i=2;i*i<=N;i++)
        {
            if(N%i==0)
                return false;
        }
        return true;
        }
    }
    
    bool isDigitPrime(int N)
    {
        {
            
         int num=N;
        while(num!=0)
        {
            N=num%10;
            num=num/10;
            if(isPrime(N)==false)
            {
                return false;
            }
        }
        return true;
        }
    }
    
	int fullPrime(int N)
	{
        if(isPrime(N)==false)
        {
            return 0;
        }
        if(isDigitPrime(N)==false)
        {
            return 0;
        }
            return 1;
	}
};


//{ Driver Code Starts.
int main()
{
	int t;
    cin>>t;
    while(t--){
	   int N;
	   cin>>N;
       Solution ob;
       cout << ob.fullPrime(N)<<"\n";
    }
}
// } Driver Code Ends
