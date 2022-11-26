//User function template for C++

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) 
    {
        sort(A.begin() , A.end());
        sort(B.begin() , B.end());
        for(int i = 0; i < A.size(); i++)
        {
            if(A[i] != B[i])
            {
                return false;
            }
        }
        return true;
    }
};
