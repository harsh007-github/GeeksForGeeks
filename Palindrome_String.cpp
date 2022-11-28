//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string s)
	{
	    string rev;
	    rev.assign(s);
	    reverse(s.begin() , s.end());
	    if(rev == s)
	    {
	        return 1;
	    }
	    return 0;
	}

};
