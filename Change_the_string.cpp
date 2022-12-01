
class Solution{
    public:
    
    string modify (string s)
    {
        if(s[0] >= 65 && s[0] <= 90)
        {
            for(int i = 1; i < s.size(); i++ )
            {
                s[i] = toupper(s[i]);
            }
        }
        else 
        {
            for(int i = 1; i < s.size(); i++)
            {
                s[i] = tolower(s[i]);    
            }
            
        }
        return s;
    }
};
