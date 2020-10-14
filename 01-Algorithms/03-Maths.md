```c++
#include <iostream>
using namespace std;

// 2. GCD - Euclid's Algo
//O(log(a+b))
int gcd(int a,int b){
     return b==0? a : gcd(b,a%b);
}
//O(a+b)
int gcd2(int a, int b){
    if(a==b){
        return a;
    }
    if(a>b){
        return gcd2(a-b,b);
    }
    else{
        return gcd2(a,b-a);
    }
}

// 3. IsPrime
int isPrime(int n){
       for(int i=2;i*i<n;i++){
        if(n%i==0){
            return -1;
        }
    }
    return 1;
}

// 4. Binomial Coeff
int binom(int n,int k){
    int ans=1;
    if(k>n-k){
        k=n-k;
    }
    for(int i=0;i<k;i++){
        ans*=(n-i);
        ans/=(i+1);
    }
    return ans;
}

int main() {
    // 1. Birthday Paradox
    float prob=1;
    int people=0;
    float num=365;
    while(prob>0.5){
        prob*=(num/365);
        num--;
        people++;
    }
    cout<<people;
    
    // Pascal triangle O(n3)
    // cout<<binom(3,2); //=>(3*2)/2
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<binom(i,j)<<" ";
        }
        cout<<endl;
    }
    
    // O(n,2)
    for (int line = 1; line <= n; line++) { 
        int C = 1; 
        for (int i = 1; i <= line; i++){
             cout<< C<<" ";  
             C = C * (line - i) / i;  
        } 
        cout<<"\n"; 
    } 
    
}
```
