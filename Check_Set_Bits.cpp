   
class Solution{
public:
    bool SetBit(int N)
    {
        int temp = 0;
        while(N)
        {
            temp = N & 1;
            N >>= 1;
            if(temp == 0)
            {
                return false;
            }
        }
        return true;
    }
    int isBitSet(int N)
    {
        if(N % 2 == 0)
        {
            return 0;
        }
        else
        {
            if(SetBit(N) == true)
            {
                return 1;
            }
            return 0;
        }
    }
};
