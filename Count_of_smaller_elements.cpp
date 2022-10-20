
int countOfElements(int arr[], int n, int x) 
{
    int i,count=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]<=x)
        {
            count++;
        }
    }
    return count;
}
