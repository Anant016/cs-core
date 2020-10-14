```c++

#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
using namespace std;

// Bubble Sort - Last 
void bubblesort(vector<int> arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

// Selection Sort - First
void selectionsort(vector<int> arr,int n){
    int pos;
    int small;
    for(int i=0;i<n-1;i++){
        pos=i;
        small=arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[j]<small){
                small=arr[j];
                pos=j;
            }
        }
        swap(arr[i],arr[pos]);
    }
}

// Insertion Sort 
void insertionsort(vector<int> arr,int n){
    int temp;
    int j;
    for(int i=1;i<n;i++){
        j=i-1;
        temp=arr[i];
        while(j>=0 && temp<arr[j]){
            swap(arr[j],arr[j+1]);
            j--;
        }
        swap(temp,arr[j+1]);
    }
}

// MERGE SORT
void merge(vector<int> &arr,int l,int m,int r){
    int n1=m-l+1;
    int n2=r-m;
    vector<int> left(n1);
    vector<int> right(n2);
    
    for (int i = 0; i < n1; i++) 
        left[i] = arr[l + i]; 
    for (int j = 0; j < n2; j++) 
        right[j] = arr[m + 1 + j]; 
        
    int i=0,j=0,k=l;
    
    while(i<n1 && j<n2){
        if(left[i]<=right[j]){
            arr[k]=left[i];
            i++;
        }else{
            arr[k]=right[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=right[j];
        j++;
        k++;
    }
}

void mergesort(vector<int> &arr,int l,int r){
    if(l<r){
        int mid=l+(r-l)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}


// QUICK SORT
int partition (vector<int> &arr, int low, int high){  
    int pivot = arr[high]; 
    int i = (low - 1);
  
    for (int j = low; j < high; j++){  
        if (arr[j] < pivot){  
            i++;
            swap(arr[i], arr[j]);  
        }  
    }  
    swap(arr[i + 1], arr[high]);  
    return (i + 1);  
}  
  
void quicksort(vector<int> &arr,int l,int r){
    if(l<r){
        int pi = partition(arr, l, r);  
        quicksort(arr, l, pi - 1);  
        quicksort(arr, pi + 1, r);  
    }
}

// COUNTING SORT
void countingsort(vector<int> arr){
    map<int,int> m;
    for(int i=0;i<arr.size();i++){
        m[arr[i]]++;
    }
    for(auto it:m){
        while(it.second>=1){
            cout<<it.first<<" ";
            it.second--;
        }
    }
}

int main() {
    vector<int> arr ={6,9,1,0,5,3,4,2,0,8,7};

    // 1. BASIC
    // sort(arr.begin(),arr.end());
    
    // bubblesort(arr,arr.size());
    
    // selectionsort(arr,arr.size());
    
    // insertionsort(arr,arr.size()); 
    
    
    // 2. ADVANCED
    // mergesort(arr,0,arr.size()-1);
    
    // quicksort(arr,0,arr.size());
    
    // countingsort(arr);
    
    // ------------------------------
    // heapsort(arr,n);
    
    // radixsort(arr,n);

    
    for(int i=0;i<arr.size();i++){
        cout<<arr[i];
    }
}



```
