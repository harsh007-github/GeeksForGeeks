class Solution
{
	public:
		string is_AutomorphicNumber(int n)
		{
		    int num=n,sqr=n*n,count=0,rev=0,temp=n;
		    while(num!=0)
		    {
		        count++;
		        n=num%10;
		        rev=rev*10+n;
		        num=num/10;
		    }
		    int mod=pow(10,count);
		    if(sqr%mod==temp)
		    {
		        return "Automorphic";
		    }
		    else
		    {
		        return "Not Automorphic";
		    }
		}
};
