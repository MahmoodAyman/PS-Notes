
## Stack
    
stack one of the most container that has many ideas and applications on it and need you to be careful with handling to avoid run time errors 

you can access the last element pushed to the stack only and you have no random access 

one of the most application is regular expressions and undo and redo 

## Always check if the stack empty before you pop to print anything
    
```cpp
int main() {
    Balltze();
    int q; cin>>q;
    stack<int>st;
    while(q--){
        string t; cin>>t;
        int x;
        if(t=="push"){
            cin>>x;
            st.push(x);
        }
        else if(t=="pop"){
            if(!st.empty())
                st.pop();
        }
        else{
            if(!st.empty()){
                cout<<st.top()<<endl;
            }
        }
    }
}

st=stack<int>(); // this is to clear stack elements 
```
    

---