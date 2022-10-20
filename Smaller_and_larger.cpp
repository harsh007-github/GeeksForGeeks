class Solution{
public:	
	vector<int> getMoreAndLess(int arr[], int n, int x) {
	    vector<int>v;
	    int count=0,count1=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>=x)
	        {
	            count++;
	        }
	        if(arr[i]<=x)
	        {
	            count1++;
	        }
	    }
	    v.push_back(count1);
	    v.push_back(count);
	    return v;
	}
};
