class Solution{   
public:
    int checkPerfectSquare(int N)
    {
        double ans = sqrt(N);
        if(floor(ans) == ceil(ans))
        {
            return 1;
        }
        return 0;
    }
};
