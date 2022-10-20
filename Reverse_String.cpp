class Solution {
  public:
    string revStr(string S) {
        string H;
        H.assign(S);
        int i,n=S.size()-1;
        
        for(i=0;i<=n;i++)
        {
            S[i]=H[n-i];
        }
        return S;
    }
};
