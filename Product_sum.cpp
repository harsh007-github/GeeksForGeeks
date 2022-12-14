//User function Template for C++
class Solution {
  public:
    long long int countDigits(long long int a, long long int b) 
    { 
        if(a < 0)
        {
            a = -(a); 
        }
        if(b < 0)
        {
            b = -(b);
        }
        long long int prod = a * b;
        
        return log10(prod) + 1;
    }
};
