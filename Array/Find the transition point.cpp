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

    // // second approach :- 0 0 0 1 1 
    // lets suppose maine mid find kar diya
    // 0 aaya mtlb ans mai update kar do 
    
    int low = 0;
    int high = n-1;
    int ans = -1;
    
    while(low <= high){
        int mid = (low + high) / 2;
        
        if(arr[mid] == 1){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    
    return ans;
}
