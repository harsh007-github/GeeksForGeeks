
class Solution{
  public:
    int middle(int A, int B, int C)
    {
        if((A > B && A < C) || (A < B && A > C))
        {
            return A;
        }
        else if((B > A && B < C) || (B > C && B < A))
        {
            return B;
        }
        else
        {
            return C;
        }
    }
};
