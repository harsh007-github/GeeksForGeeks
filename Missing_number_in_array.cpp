// User function template for C++

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) 
    {
        sort(array.begin() , array.end());
        int a = 1;
        for(int i = 0; i < array.size(); i++)
        {
            if(array[i] != a)
            {
                return a;
            }
            a++;
        }
        return n;
    }
};
