
class Solution{
    public:
    int findSingle(int N, int arr[])
    {
        sort(arr , arr+N);
        for(int i=0;i<N;i++)
        {
            if(i % 2 == 0)
            {
                if(arr[i] != arr[i+1])
                {
                    return arr[i];
                }
            }
        }
    }
};
