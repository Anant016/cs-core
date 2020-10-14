```c++
#include <iostream>
#include<vector>
using namespace std;

// 4. Is Power of 2
bool isPowerOfTwo(int n) {
    int count=0;
    if(n<0){
        return false;
    }
    // 1. logn
    while(n){
        if(n&1==1) count++;
        n>>=1;
    }
    
    // 2.     
    // for(int i=31;i>=0;i--){
    //     if((n & (1<<i))==0) continue;
    //     else count++;
    // }
    if(count==1) return true;
    else return false;
}

int main() {
    // 1. Find Missing Number
    int x=0;
    vector<int> arr={0,1,3};
	for(auto it:arr){
		x=x^it;
	}
	for(int i=0;i<arr.size();i++){
		x=x^(i+1);
	}
	cout<<x<<endl;
	
    // 2. Non-Repeating Number
    x=0;
    arr={2,2,7,8,6,7,8};
	for(int i=0; i<arr.size(); i++){
		x=x^arr[i];
	}
	cout<<x<<endl;
	
    
    // 3. Two Non-Repeating Numbers
    int Xor=0,y=0;x=0;
	arr={2,2,7,8,6,7,9,8};
	for(int i=0; i<arr.size(); i++){
		Xor=Xor^arr[i];
	}
	int set_bit_no = Xor & ~(Xor-1);
	for(int i = 0; i<arr.size(); i++){  
        if(arr[i] & set_bit_no)  
        x = x ^ arr[i]; 
        else
        y = y ^ arr[i]; 
    }  
	cout<<x<<" "<<y<<endl;
	
    // 	5. Multiple of 3
    string s="011";
    
    // 	a. will not work for very long string 
    // 	long long num=0;
    // 	int j=0;
    // 	for(int i=s.length()-1;i>=0;i--){
    // 		if(s[i]=='1'){
    // 			num=num+(1*pow(2,j));
    // 		}
    // 		else{
    // 			num=num+(0*pow(2,j));
    // 		}
    // 		j++;
    // 	}
    // 	if(num%3==0) cout<<1<<endl;
    // 	else cout<<0<<endl;
    // 	}
    
    // b.
    int odd_count=0,even_count=0;
	for(int i=0;i<s.length();i++){
		if(i%2 !=0 && s[i]=='1'){
		    odd_count++;
		}
		if(i%2==0 &&s[i]=='1'){
		    even_count++;
		}
	}
	if(((2*(odd_count))+even_count)%3==0) cout<<1<<endl;
	else cout<<0<<endl;
	return 0;
	
}

```
