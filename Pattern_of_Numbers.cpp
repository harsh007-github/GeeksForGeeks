public:
	
	void printTriangle(int n) 
	{
	    int a = 1;
	    for(int i = n; i > 0; i--)
	    {
	        for(int j = i; j > 0; j--)
	        {
	            cout<<a<<" ";
	            a++;
	        }
	        cout<<endl;
	        a = 1; 
	    }
	}
};
