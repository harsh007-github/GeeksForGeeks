class Solution{
    public:
    
    int LastIndex(string s, char p)
    {
        int ans = -15;
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == p)
            {
                ans = i;
            }
        }
        if(ans == -15)
        {
            return -1;
        }
        return ans;
    }
};
