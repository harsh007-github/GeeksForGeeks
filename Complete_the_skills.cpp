    public:
    void scores(long long a[], long long b[], int &ca, int &cb)
    {
        int  i;
        for(i=0;i<3;i++)
        {
            if(a[i]>b[i])
            {
               ca++; 
            }
            else if(b[i]>a[i])
            {
                cb++;
            }
        }
    }
};
