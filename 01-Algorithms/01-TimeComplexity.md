## Time Complexity

```c++
1. int sum(int n){
    if(n<=0){
        return 0;
    }
    return n+sum(n-1);
}
```
> Time - O(n)<br/>
> Space - O(n)


```c++
2. for(int a:A){
        ...
}
for(int b:B){
    ...
}
```
> Time - O(A+B)

```c++
3. for(int a:A){
  for(int b:B){
    ...
  }
}
```
> Time - O(A*B)

```
4. Array of Strings.
Sorted each string, then sorted full array.
```
> Time - O(a*slogs + aloga*s)

```c++
5. int fibo(int n){
    if(n==1 || n==0) return n;
    return fibo(n-1)+fibo(n-2);
}
```
> Time - O(2^n)  =  (branches^depth)

```c++
6. boolean IsPrime(int n){
    for(int i=2;i*i<n;i++){
        if(n%x==0){
            return false;
        }
    }
    return true;
}
```
>Time - O(sqrt(n))

```c++
7. int div(int a,int b){
    int count=0;
    inst sum=b;
    while(sum<=a){
        sum+=b;
        count++;
    }
    return count;
}
```
> Time- O(a/b)


<hr/>

### Tricky Ones

```
1. fibonaaci of n no.s
```
~~> n*(2^n) ~~
> 2^n

```c++
2. int sum(Node node){
    if(node==NULL) return 0;
    return sum(node.left) + node->val + sum(node->right); 
}
```
> 2^depth = 2^logn = n

```c++
for(int i=N;i>0;i/=2){
    for(int j=0;j<i;j++){
        ...
    }
}
```
> O(n)<br/>
n(logn)=nlogn<br/>
logn*n=n
