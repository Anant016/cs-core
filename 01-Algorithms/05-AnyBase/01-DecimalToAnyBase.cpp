#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,b;cin>>n>>b;
    vector<int> arr;
    while(n!=0){
        arr.push_back(n%b);
        n=n/b;
    }
    for(int i=arr.size()-1;i>=0;i--){
        cout<<arr[i];
    }
}