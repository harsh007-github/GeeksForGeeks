// User function template for c++
class Solution {
  public:
    string removeChars(string s1, string s2) 
    {
        for(int i = 0; i < s2.size(); i++)
        {
            for(int j = 0; j < s1.size(); j++)
            {
                if(s1[j] == s2[i])
                {
                    s1[j] = '\0';
                }
            }
        }
        return s1;
    }
};
