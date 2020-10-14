#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,b;
    cin>>n>>b;
    int ans=0;
    int i=0;
    while(n!=0){
        ans+=(pow(b,i)*(n%10));
        n=n/10;
        i++;
    }
    cout<<ans;
}