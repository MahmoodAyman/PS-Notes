### problem statement

`find if a string is a substring of another at any point`

```cpp
bool is_substring(string main,string sub,int pos=0){
    if(pos==sub.size())return true;
    if(main[pos]!=sub[pos])return false;
    return is_substring(main,sub,pos+1);
}

int main() {
    cout<<is_substring("abcdefgh","abcd")<<endl; // you give function initial value so we are good 
    cout<<is_substring("abcdefgh","",3)<<endl;
    cout<<is_substring("abcdefgh","abdd")<<endl;
}
```

### output:

1

0

0