

string transform(string S)
{
    int i;
    S[0]=S[0]-32;
     for(i=1;i<S.size();i++)
     {
        if(S[i-1]==' ')
        {
            S[i]= S[i]-32;
        }
     }
     return S;
}
