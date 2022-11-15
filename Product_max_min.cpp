    public:
        long long find_multiplication(int a[], int b[], int n, int m)
    {
        sort(a , a + n);
        sort(b , b + m);
        long long ans = a[n - 1] * b[0];
        return ans;
    }
};
