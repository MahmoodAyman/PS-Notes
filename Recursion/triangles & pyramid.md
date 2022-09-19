### How to draw triangle without using any loops?

```cpp
void asterisk(int n){
    if(n==0) {
        cout<<endl;
        return;
    }
    cout<<"*";
    asterisk(n-1);
}
void triangle(int n){
    if(n==0)return;
    triangle(n-1);
    asterisk(n);
}
int main() {
    triangle(3);
}
```

### output:

*

**

***

---

## now what about reversing this triangle?

just reverse 2 lines… literally :”D 

```cpp
void asterisk(int n){
    if(n==0) {
        cout<<endl;
        return;
    }
    cout<<"*";
    asterisk(n-1);
}
void triangle(int n){
    if(n==0)return;
    asterisk(n);
    triangle(n-1);
}
int main() {
    triangle(3);
}
```

---

## What about drawing Pyramid?

here we need 2 loops one for * and second for spaces 

mean we need 2 recursion functions and one main that calls the two 

see the code: 

```cpp
void spaces(int x){
    if(x==1)return;
    cout<<" ";
    spaces(x-1);
}
void asterisk(int x){
    if(x==0)return;
    cout<<"*";
    asterisk(x-1);
}
int n;
void pyramids(int stars,int sps){
    if(stars>n)return;
    spaces(sps);
    asterisk(stars);
    cout<<endl;
    pyramids(stars+2,sps-1);
}
int main() {
     n=4; // n is the levels of pyramid;
     n*=2;
    pyramids(1,n/2);
}
```