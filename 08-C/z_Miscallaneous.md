1. 
```c++
int x=3;
cout<<&x; //hexadecimal address

char ch='A'
cout<<&ch; // ERROR:Exception due to Operator Overloading
cout<<(void*)&ch; // this works
```
