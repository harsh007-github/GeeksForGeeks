

/*you are required to complete this method*/

int reverse(int x)

{

    int num = x , n  , rev = 0;

    while(num != 0)

    {

        n = num % 10;

        if(n == 0)

        {

            n = 5;

        }

        rev = rev * 10 + n;

        num = num / 10;

    }

    return rev;

}

int convertFive(int n) 

{

    int ans = reverse(n);

    ans = reverse(ans);

    return ans;

    

}
