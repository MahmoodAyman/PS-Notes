    void PrintNum(long long n){
        if(n==1) {
            cout << (n & 1);
            return;
        }
        PrintNum(n>>1);
        cout<<(n&1);
    }