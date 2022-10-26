
string convert(string s)
{
    int i=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            int cap=s[i]-65;
            s[i]=90-cap;
        }
        else
        {
          int small=s[i]-97;
          s[i]=122-small;
        }
    }
    return s;
}
