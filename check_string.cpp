class Solution
{
    public:
        bool check (string s)
        {
        	for(int i=0;i<s.size();i++)
        	{
        	    if(s[0]!=s[i])
        	    {
        	        return false;
        	    }
        	}
        	return true;
        	
        }
};
