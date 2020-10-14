' * ' - Dereference Operator

**Pointers** - Special type of variable, capable of holding the address.
1. Helps access memory location of a variable
2. supports dynamic allocation of a variable.


-1.
```c++
int x=10;
int *y=&x; // Declare And Assign
int *z; // No initialization / Garbage value (Wild)
```

2.
```
Size of ptr is always same.

4 byte (32 bit systems)

8 byte (64 bit systems)
```
3. 
```c++
int a=10;
char *ptr=&a; // will read only 1 byte (cause error while dereferencing)
```

4. ptr of ptr
```c++
    int x=10;
    int *ptr=&x;
    int **ptr2=&ptr; // address of ptr
    cout<<*ptr<<endl<<**ptr2; // both will now print 10;
```

5. Pass by reference 
```c++
// both works
void fun(int *x){
    *x=12;
}
void fun2(int &x){
    x=12;
}
int main() {
    int x=10;
    fun(&x);
    fun2(x);
    cout<<x;
}
```

6.
```c++
int **arr=new int*[100] // 1d Dynamic Array  
```
7.
```c++
int *ptr; // wild pointer/illegal memory runtime
ptr=null; // Memory Leak
// Dangling Pointer - A pointer pointing to memory location, that has been deleted/freed.

& -> 
1. can never be null
2. can't be changed
3. don't need explicit dereferncing mechanism
```
