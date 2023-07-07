int transitionPoint(int arr[], int n) {
    // code here
    if(n==1 && arr[0]){
        return 0;
    }
    
    for(int i=0; i<n; ++i){
        if(arr[i]==1){
            return i;
        }
    }
    return -1;
}
