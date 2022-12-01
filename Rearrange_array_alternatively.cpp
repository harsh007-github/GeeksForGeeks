class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    {
        vector<long long>v;
        long long max = n - 1;
        long long min = 0;
        for(int i = 0; i < n; i++)
        {
            if(i % 2 == 0)
            {
                v.push_back(arr[max--]);
            }
            else
            {
                v.push_back(arr[min++]);
            }
        }
        for(int i = 0; i < n; i++)
        {
            arr[i] = v[i];
        }
        
    }
};
