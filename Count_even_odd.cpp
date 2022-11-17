
class Solution{
    public:
    /*Function to count even and odd elements in the array
    * arr : Array with its elements
    * sizeof_array : number of array elements
    * countOdd : variable to count number of odd elements
    * countEven : variable to count number of even elements
    */
    void countOddEven(int arr[], int sizeof_array)
    {
        int counteven = 0 , countodd = 0;
        for(int i = 0; i < sizeof_array; i++)
        {
            if(arr[i] % 2 == 0)
            {
                counteven++;
            }
            else
            {
                countodd++;
            }
        }
        cout << countodd << " " << counteven << endl;
    }
};
