#include <bits/stdc++.h>
using namespace std;

int main() {
    // BUBBLE SORT ALGORITHM
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i=0; i<n; ++i){
        cin >> arr[i];
    }
    // we have inserted all the required values in the loop
    //bubble sort 
    // what we have do here that first we're starting from the back and then
    // we're swapping the elements from the front
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<=i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    
    for(int i=0; i<n; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}
