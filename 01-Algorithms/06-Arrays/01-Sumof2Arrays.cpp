#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;cin>>n1;
    vector<int> arr1(n1);
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cin>>n2;
    vector<int> arr2(n2);
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int s=n1>n2?n1:n2;
    vector<int> ans(s+1);
    
    int i=arr1.size()-1;
    int j=arr2.size()-1;
    int k=ans.size()-1;
    
    int c=0;
    while(k>=0){
        int a1=(i>=0)?arr1[i]:0;
        int a2=(j>=0)?arr2[j]:0;
        int val=a1+a2+c;
        c=val/10;
        ans[k]=val%10;
        k--;
        j--;
        i--;
    }
    // to remove starting zeroes
    for(i=0;i<ans.size();i++){
        if(ans[i]!=0){
            break;
        }
    }
    for(int x=i;x<ans.size();x++){
        cout<<ans[x]<<endl;
    }
    
}