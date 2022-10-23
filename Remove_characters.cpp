class Solution{
public:	

	string removeCharacters(string S) 
	{
	    int i;
	    for(i=0;i<S.size();i++)
	    {
	        if((S[i]>=65 && S[i]<=90) || (S[i]>=97 && S[i]<=122))
	        {
	            S[i]='\0';
	        }
	    }
	    return S;
	}
};
