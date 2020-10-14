#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,b1,b2;cin>>n>>b1>>b2;
    
    int dec=0;
    int i=0;
    while(n!=0){
        dec+=(pow(b1,i)*(n%10));
        n=n/10;
        i++;
    }
    
    vector<int> arr;
    while(dec!=0){
        arr.push_back(dec%b2);
        dec=dec/b2;
    }
    
    for(int i=arr.size()-1;i>=0;i--){
        cout<<arr[i];
    }
    
   
}