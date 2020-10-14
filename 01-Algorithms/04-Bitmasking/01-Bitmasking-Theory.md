## BitMasking
```c++
#include <iostream>
#include<vector>
using namespace std;

int main() {
    int n=16;
    int k=3;//pos from left starting from 0
    
    // 1. Is Set Bit
    if((n & (1<<k))==0) cout<<k<<":Not Set Bit";
    else cout<<k<<":Set Bit"<<endl;
    
    // 2. Set Bit
    n=57;//61
    n = n | (1<<2);
    cout<<endl<<n<<endl;
    
    // 3. Bit Off
    n = n & ~(1<<k);
    
    // 4. Toggle Bit
    n = n ^ (1<<k); // x^0=x // x^1 =~x
    
    // 5. Odd Even
    if(n&1)cout<<endl<<"odd"<<endl;
    else cout<<endl<<"even";
    
    // 6. Print Bits
    n=8;
    for(int i=31;i>=0;i--){
        if((n & (1<<i))==0){
            cout<<0;
        }else{
            cout<<1;
        }
    }
    
    // NEXT TOPIC
    // Max int = pow(2,32)/2 - 1;
    int x=2147483647;
    cout<<endl<<x;
    
    // Type Casting
    long LONG=10000000000;
    int INT=1;
    short SHORT=1;
    
    // Expected Value
    LONG=INT;
    LONG=SHORT
    
    INT=SHORT; 
    
    // UnExpected Value
    INT=LONG;
    
    cout<<endl<<endl<<LONG<<endl<<INT<<endl<<SHORT;
}

// byte = 8 bits (1 byte)
// short = 16 bits (2 byte)
// int = 32 bits (4 byte)
// long = 64 bits (8 byte)

// n<<1 = (n= n*2)
// n<<3 = (n=n*pow(2,3)) =(n=n*2*2*2)

// n>>1 = (n=n/2)  5=2.5=2

// 1. Is Set Bit
// 10
// 1010 (n) &
// 1000 (1<<3)

// 2. Set Bit
// 57
// 111001 +
// 000100 (1<<k)

// (256) (pow(2,8))
// -ve no.
// 1. 0->+ve 1->-ve (2 0's) (-127 to 127) 
// 2. 2's complementary (1' complement(flip) + 1) (-128 to 127)
// 10000000 - 01111111+1 (10000000)
// if last bit 0 ->simple
// if last bit 1 ->2'complement(-ve no)


// 0
// 1	1
// 2	10
// 3	11
// 4	100
// 5	101
// 6	110
// 7	111
// 8	1000
// 9	1001
// 10	1010
```
