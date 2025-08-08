#include<bits/stdc++.h>
using namespace std;
void mergeSort(vector<int>&arr,int low,int high){
    int mid = (low + high)/2;
    mergeSort(arr,low,mid-1);
    mergeSort(arr, mid+1,high);
    merge(arr,low,mid,high);
}
void merge(vector<int>&arr,int low ,int mid, int high){
    int n = arr.size();
    vector<int>temp[n];
    int l = mid - 1;
    int r = mid + 1;
    while(low<r){
    }
}
int main(){
    vector<int>arr = {2,3,5,1,55,34,12,14,34,87};
    int n = arr.size();
    int low = 0;
    int high = n-1;
    mergeSort(arr,low,high);
    cout<<"the sorted array is "<<endl;
    for(auto it : arr){
        cout<<it<<" ";
    }
}
