# Bits

# Always Watch Overflow!!!   if n>30

## Functions of Bits:

- Print Binary Representation
    
    ```cpp
    void PrintNum(long long n){
        if(n==1) {
            cout << (n & 1);
            return;
        }
        PrintNum(n>>1);
        cout<<(n&1);
    }
    ```
    
- Get Bit in given index
    
    ```cpp
    int GetBit(int n,int idx){
        return (n>>idx)&1;
    }
    ```
    
- Set Bit in  given index as 1
    
    ```cpp
    int SetBit1(int n,int idx){
        return n|(1<<idx);
    }
    ```
    
- Set Bit in  given index as 0
    
    ```cpp
    int SetBit0(int n,int idx){
        return n& (~(1<<idx));
    }
    ```
    
- Flip Bit (if 0 set 1 , if 1 set 0)
    
    ```cpp
    int FlipBit(int n,int idx){
        return n^ (1<<idx);
    }
    ```
    
- Count Number of Bits which is 1
    
    ```cpp
    int CountBits1(int n){
        int cnt=0;
        while(n){
            cnt++;
            n&=(n-1);
        }
        return cnt;
    }
    ```
    
- Count Number of Bits which is 0
    
    ```cpp
    long long CountBits0(long long n){
        long long cnt=0;
        while(n){
            if(!(n&1))cnt++;
            n>>=1;
        }
        return cnt;
    }
    ```
    
- Get Bit at given index
    
    ```cpp
    int GetBit(int n,int idx){
        return ((n>>idx)&1)==1;
    }
    ```
    
- Generate All Subsets
    
    there are 2^n subset for n
    
    ```cpp
    int GetBit(int n,int idx){
        return ((n>>idx)&1)==1;
    }
    int main(){
    		int n; cin>>n;
        vector<int>v(n);
        multiset<vector<int>>ss;  // to store subsets order 
        for(auto &it:v)cin>>it;
        for(int i=0;i<(1<<n);i++){
            vector<int>vv;  // for every subset
            for(int j=0;j<n;j++){
                if(GetBit(i,j)){  // check if this bit on and push elment for that bit
    								// you can use (i>>j)&1  instead of GetBit Function it will do the same
                    vv.push_back(v[j]);
                }
            }
            ss.insert(vv);
        }
        for(auto it:ss){  // this for print all subsets in accending order
            for(auto i:it){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
    ```
    
- Get First Bit Equal to one
    
    ```cpp
    int GetFirstBit(int x){
        return log2(x&-x)+1;
    }
    ```
    
- check if number is power of two or not
    
    number is power of two if it’s binary representation contains only one 10,1000,1000000 .... 
    
    ```cpp
    // you can use count bits which is one or :
    bool isPowerOfTwo(int n){
    	return n&(n-1)==0;
    }
    ```