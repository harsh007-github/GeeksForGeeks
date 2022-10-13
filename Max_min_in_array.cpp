class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	int i,max,min,a;
    	
    	if(A[0]>A[1])
    	{
    	     max=A[0];
    	}
    	else
    	{
    	    max=A[1];
    	}
    	for(i=0;i<N;i++)
    	{
    	    if(max>A[i])
    	    {
    	        max=max;
    	    }
    	    else
    	    {
    	        max=A[i];   
    	    }
    	}
    	
    	if(A[0]<A[1])
    	{
    	     min=A[0];
    	}
    	else
    	{
    	    min=A[1];
    	}
    	for(i=0;i<N;i++)
    	{
    	    if(min<A[i])
    	    {
    	        min=min;
    	    }
    	    else
    	    {
    	        min=A[i];   
    	    }
    	}
    	int sum=max+min;
    	return sum;
    	
        
    }

};
