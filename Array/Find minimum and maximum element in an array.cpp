
pair<long long, long long> getMinMax(long long a[], int n) {
    sort(a, a+n);
    long long mini = a[0];
    long long maxi = a[n-1];
    
    pair<long long, long long> p;
    p.first = mini;
    p.second = maxi;
    
    return p;
    
    // dekho bhai agar sorting ka program likhna pada toh kaise likhoge
    
    // mine approach of swapping vali
    /*
    int low=0;
    int high = n-1;
    
    while(low<high){
        int temp = a[low];
        a[low] = a[high]
        a[high] = temp
        low++;
        high--;
    }
}
