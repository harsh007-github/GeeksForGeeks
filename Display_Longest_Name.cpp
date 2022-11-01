
class Solution{
    public:
    string longest(string names[], int n)
    {
        string max;
        if(names[0].size()>names[1].size())
        {
            max=names[0];
        }
        else
        {
            max=names[1];
        }
        for(int i=0;i<n;i++)
        {
            if(max.size()<names[i].size())
            {
                max=names[i];
            }
        }
        return max;
    }
};
