
class Solution {
  public:
    int isPerfect(int N) {
        int num=N, digit=1,sum=0,i,check=N;
        while(num!=0)
        {
            N=num%10;
            digit=1;
          for(i=1;i<=N;i++)
          {
            digit*=i;
          }
            sum+=digit;
            num=num/10;
        }
        if(sum==check)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
