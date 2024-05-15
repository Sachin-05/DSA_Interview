#include <bits/stdc++.h>
using namespace std;

int binarysearch(vector <int> arr, int n, int lo, int hi, int target){
    if(lo > hi){
        return -1;
    }
    int mid = (lo+hi)/2;
    if(arr[mid] == target){
        return 1;
    }else if(arr[mid] < target){
        return binarysearch(arr, n, mid+1, hi, target);   
    }else{
        return binarysearch(arr, n, lo, mid-1, target);
    }
}

int main(){
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i=0; i<n; ++i){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int target;
    cin >> target;
    int lo=0;
    int hi=n-1;
    cout << binarysearch(v,n,lo,hi,target) << endl;
}
