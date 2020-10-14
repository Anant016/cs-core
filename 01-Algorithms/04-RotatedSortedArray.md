```c++
#include <bits/stdc++.h>
using namespace std;

// Sorted Roated Array 

// 1. Binary Search
int binarySearch(vector<int> arr,int f, int l, int val){
    if(f>l) return -1;
    int mid=f+(l-f)/2;
    if(arr[mid]==val) return mid;
    
    if(arr[f]<=arr[mid]){
        if(val>=arr[f] && val<=arr[mid]){
            return binarySearch(arr,f,mid-1,val);
        }else{
            return binarySearch(arr,mid+1,l,val);
        }
    }
    else{
        if(val<=arr[l] && val>=arr[mid]){
            return binarySearch(arr,mid+1,l,val);
        }else{
            return binarySearch(arr,f,mid-1,val);
        }
    }
}

// for duplicates
bool search(vector<int>& nums, int target) {
   int n = nums.size(), start = 0, end = n-1;
   while(start <= end){
	int mid = start + (end-start)/2;
	if(nums[mid] == target)
		return true;

	if(nums[mid] < nums[end]){
		if(nums[mid] < target && target <= nums[end]){
			start = mid+1;
		}else{
			end = mid-1;
		}
	}else if(nums[mid] > nums[end]){
		if(nums[start] <= target && target < nums[mid]){
			end = mid-1;
		}else{
			start = mid+1;
		}
	}else{
		end--;
	}
   }
   return false;
}




// 2. Find Min Element
int findMin(vector<int> arr, int low, int high){
    if (low>high) return arr[0];
    if(low==high) return arr[low];
    
    int mid=low+(high-low)/2;
    // mid+1?
    if(mid<high && arr[mid+1]<arr[mid]) return arr[mid+1];
    
    // mid
    if(mid>low && arr[mid]<arr[mid-1]) return arr[mid];
    
    if(arr[high]>arr[mid]) return findMin(arr,low,mid-1);
    
    return findMin(arr,mid+1,high);
}

// If Duplicates in Array
int findmin(vector<int> arr, int low, int high) { 
    while(low < high) { 
	int mid = low + (high - low)/2; 
	if (arr[mid] == arr[high]) 
		high--; 
	else if(arr[mid] > arr[high]) 
		low = mid + 1; 
	else
		high = mid; 
   } 
   return arr[high]; 
} 

// 3. Find Max Element
int findMax(vector<int> arr, int low, int high){
    if (low>high) return arr[high];
    if(low==high) return arr[low];
    
    int mid=low+(high-low)/2;
    // mid+1?
    if(mid<high && arr[mid+1]>arr[mid]) return arr[mid+1];
    
    // mid
    if(mid>low && arr[mid]>arr[mid-1]) return arr[mid];
    
    if(arr[low]>arr[mid]) return findMax(arr,low,mid-1);
    
    return findMax(arr,mid+1,high);
}

// 4. First and Last pos of an Element
int firstIndex(vector<int> arr,int s,int e,int val){
    if(e<s) return -1;
    int mid=s+(e-s)/2;
    
    if(arr[mid]==val && (mid==0 || val!=arr[mid-1])) return mid;
    if(arr[mid]<val) return firstIndex(arr,mid+1,e,val);
    return firstIndex(arr,s,mid-1,val);
}
    
 int lastIndex(vector<int> arr,int s,int e,int val){
    if(e<s) return -1;
    int mid=s+(e-s)/2;
    
    if(arr[mid]==val && (mid==arr.size()-1 || val!=arr[mid+1])) return mid;
    if(arr[mid]>val) return lastIndex(arr,s,mid-1,val);
    return lastIndex(arr,mid+1,e,val);
}
    

int main() {
    vector<int> arr={1,3,3};
    
    cout<<binarySearch(arr,0,arr.size()-1,1)<<endl;
    
    cout<<findmin(arr,0,arr.size()-1)<<endl;
    
    cout<<findMax(arr,0,arr.size()-1)<<endl;
    
    cout<<findFirstAndLast(arr,3);
}
```
