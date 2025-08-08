#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>arr, int target){
    int n = arr.size();
    int low = 0;
    int high = n-1;
    int mid;
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid]==target){ 
            return arr[mid];           
        }
        else if(arr[mid]>target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return 0;
}
int main(){
    vector<int> arr = {3,5,7,9,12,13,14,45,67,77};
    int target = 3;
    if(target == binarySearch(arr,target)){
        cout<<"the target is present in the vector";
    }
    else{
        cout<<"the target is not present in the vector";
    }
}