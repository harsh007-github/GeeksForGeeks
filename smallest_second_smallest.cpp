
vector<int> minAnd2ndMin(int a[], int n) 
{
    sort(a , a + n);
    vector<int>v;
    v.push_back(a[0]);
    for(int i = 1; i < n; i++)
    {
        if(a[i - 1] != a[i])
        {
            v.push_back(a[i]);
            return v;
        }
    }
    return {-1};
    
}
