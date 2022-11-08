class Solution{
    public:
    vector<long long int> twoOddNum(long long int arr[], long long int N)  
    {
        long long int temp = 0;
        for(int i = 0; i < N; i++)
        {
            temp = temp ^ arr[i];
        }
        long long num1 = 0 , num2 = 0 , rightmost = temp &~(temp - 1);
        for(int i = 0; i < N; i++ )
        {
            if(arr[i] & rightmost)
            {
                num1 ^= arr[i];
            }
            else
            {
                num2^=arr[i];
            }
        }
        vector<long long int>v({num1 , num2});
        sort(v.rbegin() , v.rend());
        return v;
    }
};
