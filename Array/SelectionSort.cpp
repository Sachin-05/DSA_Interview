#include <bits/stdc++.h>
using namespace std;

int main() {
    // INSERTION SORT ALGORITHM
  // so what we have to do here we have to run through loops and insert the curr element in it's perfect place.
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i=0; i<n; ++i){
        cin >> arr[i];
    }
    // we have inserted all the required values in the loop
    // insertion SORT
    for(int i=0; i<n; ++i){
        for(int j=i; j>=0; j--){
            if(arr[j] < arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
        }
    }
    
    for(int i=0; i<n; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}
