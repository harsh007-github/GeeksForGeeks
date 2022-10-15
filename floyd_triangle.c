void printFloydTriangle(int N)
{
   int r,c,i=1;
   for(r=1;r<=N;r++)
   {
       for(c=1;c<=r;c++)
       {
           printf("%d",i++);
           printf(" ");
       }
       printf("\n");
   }
}
