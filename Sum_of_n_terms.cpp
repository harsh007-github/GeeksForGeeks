// User function template for C++

class Solution {
  public:
    long long sumOfSeries(long long N) 
    {
        long long sum;
        sum = N * (N+1) / 2;
        return sum*sum;
    }
};
