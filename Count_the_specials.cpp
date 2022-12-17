int countSpecials(int arr[], int sizeof_array, int K)
{    
    int f = floor(sizeof_array/K), count = 0;
    int map[1000] = {0};
    for(int i = 0; i < sizeof_array; i++)
    {
        map[arr[i]]++;
    }
    for(int i = 0; i < sizeof(map) / sizeof(int); i++)
    {
        if(map[i] == f)
        {
            count++;
        }
    }
    return count;
    
}
