
class Solution{
    public:
    bool IsPerfect(int a[],int n)
    {
        int arr[n];
        int i,b=n-1;
        for(i=0;i<n;i++)
        {
            arr[i]=a[i];
        }
        for(i=0;i<n;i++)
        {
            a[i]=arr[b-i];
        }
        for(i=0;i<n;i++)
            {
            if(a[i]!=arr[i])
             {
                 return 0;
             }   
            }
            return 1;
        
    }
};


