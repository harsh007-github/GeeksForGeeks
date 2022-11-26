class Solution
{
public:
    string getBinaryRep(int N)
    {
        return(bitset<30>(N).to_string());
    }
};
