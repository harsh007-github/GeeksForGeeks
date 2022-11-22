

class Solution{
    
    public:

    string Sandwiched_Vowel(string s)
    {
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'o' ||s[i] == 'u')
            {
                if((s[i - 1] != 'a' &&  s[i - 1] != 'e' &&  s[i - 1] != 'i' && s[i - 1] != 'o' && s[i - 1] != 'u') && (s[i + 1] != 'a' && s[i + 1] != 'e' && s[i + 1] != 'i' && s[i + 1] != 'o' && s[i + 1] != 'u'))
                {
                    if(i - 1 < 0 || i + 1 >= s.size())
                    {
                        continue;
                    }
                    s[i] = 0;
                }
            }
        }
        return s;
    }
};
