  public:
    int countSquares(int N) 
    {
        N = ceil(sqrt(N)) - 1;
        return N;
    }
};
