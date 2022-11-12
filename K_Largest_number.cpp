
class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        vector<int>v;
        sort(arr , arr + n);
        for(int i = n-1; i >= n - k; i--)
        {
            v.push_back(arr[i]);
        }
        return v;
    }
};
