//User function template for C++
class Solution{
public:

	int maxProduct(int arr[], int n) 
	{
	    sort(arr , arr + n);
	    return arr[n - 1] * arr[n - 2];
	}
};
