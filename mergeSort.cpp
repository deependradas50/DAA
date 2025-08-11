#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int l = low;
    int r = mid + 1;

    while (l <= mid && r <= high) {
        if (arr[l] <= arr[r]) {
            temp.push_back(arr[l]);
            l++;
        } else {
            temp.push_back(arr[r]);
            r++;
        }
    }

    while (l <= mid) {
        temp.push_back(arr[l]);
        l++;
    }

    while (r <= high) {
        temp.push_back(arr[r]);
        r++;
    }

    for (int i = 0; i < temp.size(); i++) {
        arr[low + i] = temp[i];
    }
}

void mergeSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

int main() {
    int n;
    cout<<"enter the size of the array"<<endl;
    cin >> n;
    vector<int> arr(n);
    cout<<"enter the element of the array"<<endl;
    for (int i = 0; i < n; i++) cin >> arr[i];
    mergeSort(arr, 0, n - 1);
    cout<<"The sorted array is "<<endl;
    for (int x : arr) cout << x << " ";
    return 0;
}
