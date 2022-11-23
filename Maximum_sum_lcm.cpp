//User function Template for C++
class Solution {
  public:
    long long int maxSumLCM(int n) 
    {
        long long int sum = 0;
        for(int i = 1; i*i <= n; i++)
        {
            if(n % i == 0)
            {
                sum += i;
                if(i != n / i)
                {
                    sum += n / i;
                }
            }
        }
        return sum;
    }
};
