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
     int n ;
    vector<int> arr;
    cout<<"enter the no of element in the array"<<endl;
    cin>>n;
    for(int i = 0;i<n ;i++){
        int value;
        cout<<"enter the value"<<endl;
        cin>>value;
        arr.push_back(value);
    }
    int target ;
    cout<<"enter the target element"<<endl;
    cin>>target;
    if(target == binarySearch(arr,target)){
        cout<<"the target is present in the array";
    }
    else{
        cout<<"the target is not present in the array";
    }
    return 0;
}