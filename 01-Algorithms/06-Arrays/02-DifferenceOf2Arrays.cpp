#include<bits/stdc++.h>
using namespace std;

// void solve(long long int ans){
//     if(ans==0) return;
//     solve(ans/10);
//     cout<<ans%10<<endl;
// }


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
    vector<int> ans(n2);
    
    int i=arr1.size()-1;
    int j=arr2.size()-1;
    int k=ans.size()-1;
    
    int c=0;
    
    while(k>=0){
  
        int a1=(i>=0)?arr1[i]:0;
        if(arr2[j]+c>=a1){
            ans[k]=arr2[j]+c-a1;
            c=0;
        }else{
            ans[k]=arr2[j]+10+c-a1;
            c=-1;
        }
        k--;
        j--;
        i--;
    }
    for(i=0;i<ans.size();i++){
        if(ans[i]!=0){
            break;
        }
    }
    for(int x=i;x<ans.size();x++){
        cout<<ans[x]<<endl;
    }
    
    
    // long long int num2=0,num1=0;
    // for(int i=0;i<n2;i++){
    //     num2=num2*10 +arr2[i];
    // }
    // for(int i=0;i<n1;i++){
    //     num1=num1*10 +arr1[i];
    // }
    // long long int ans=num2-num1;
    // solve(ans);
    
    
}