  public:
    vector<int> satisfyEqn(int A[], int N) 
    {
        for(int a = 0; a < N; a++)
        {
            for(int b = 0; b < N; b++)
            {
                if(a == b) continue;
                for(int c = 0; c < N; c++)
                {
                    if(c == a || c == b) continue;
                    for(int d = 0; d < N; d++)
                    {
                        if(d == a || d == b || d == c) continue;
                        if((A[a] + A[b]) == (A[c] + A[d]))
                        {
                            return {a,b,c,d};
                        }
                    }
                }
            }
        }
        return {-1,-1,-1,-1};
        
    }
};
