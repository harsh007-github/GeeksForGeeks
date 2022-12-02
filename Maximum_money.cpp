class Solution {
  public:
    int maximizeMoney(int N , int K) 
    {
        if(N % 2 == 0)
        {
            return ((N / 2) * K );
        }
        else
        {
            if(N == 1)
            {
                return N*K;
            }
            else
            {
                return ((N / 2) + 1) * K;
            }
        }
    }
};
