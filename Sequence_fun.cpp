
class Solution {
	public:
		long long  NthTerm(int n){
		    int i=2;
		    long long ans=2;
		    for(i=2;i<=n;i++)
		    {
		        ans=(ans*i+1)%1000000007;
		    }
		    return ans;
		}

};
