//User function template for C++

class Solution{

public:	

	

	int divisibleBy4 (string str)

	{

	    int n = str.size();

	    int ans = (str[n - 2] - 48)*10 + str[n - 1] - 48;

        if(ans % 4 == 0)

        {

            return 1;

        }

        return 0;

        

	}

};

