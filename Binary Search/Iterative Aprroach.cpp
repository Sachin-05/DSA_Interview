#include <bits/stdc++.h>
using namespace std;

int binarysearch(vector <int> arr, int n, int target){
    int lo= 0;
    int hi= n-1;
    
    while(lo<hi){
       int mid = (lo+hi)/2;
       if(arr[mid] < target){
           lo = mid+1;
       }else if(arr[mid] > target){
           hi = mid-1;
       }else{
           if(arr[mid]==target){
               return 1;
           }
       }
    }
    return -1;
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
    cout << binarysearch(v,n,target) << endl;
}
