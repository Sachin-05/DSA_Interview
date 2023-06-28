void rotate(int arr[], int n)
{
    // here the program we have to write is to rotate it one by one
    int res[n];
    
    int temp = arr[n-1];
    
    for(int i=1; i<n; ++i){
        res[i] = arr[i-1];
    }
    
    res[0] = temp;
    
    for(int i=0; i<n; ++i){
        arr[i] = res[i];
    }
}
