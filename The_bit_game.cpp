class Solution{   
public:
    int swapBitGame(long long N)
    {
        long long ans = __builtin_popcountll(N);
        if(ans % 2 == 0)
        {
            return 2;
        }
        return 1;
    }
};
