class Solution {
  public:
    int inBase(int num , int base)
    {
        int count = 0;
        while(num != 0)
        {
            count++;
            num /= base;
        }
        return count;
    }
    string baseEquiv(int n, int m)
    {
        for(int i = 2; i <= 32; i++)
        {
            if(inBase(n , i) == m)
            {
                return "Yes";
            }
        }
        return "No";
            
    }
};
