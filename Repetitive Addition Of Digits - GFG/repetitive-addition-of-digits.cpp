//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int digits(long long N)
    {
        int sum = 0;
        long long num = N;
        while(num !=0)
        {
            N = num % 10;
            sum += N;
            num = num / 10;
        }
        if(sum < 10)
        {
            return sum;    
        }
        else
        {
            digits(sum);
        }
        
    }
    int singleDigit(long long N)
    {
        if(N < 10)
        {
            return N;
        }
        else
        {
            return digits(N);    
        }
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        int ans  = ob.singleDigit(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends