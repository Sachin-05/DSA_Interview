class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        if(n==1 || n==0){
            return n;
        }
        
        // 1 2 3 1 2
        int right_sum = 0;
        int left_sum = 0;
        
        for(int i=0; i<n; ++i){
            right_sum += a[i];
        }
        
        for(int i=0; i<n; ++i){
            right_sum -= a[i];
            if(right_sum==left_sum) return i+1;
            left_sum += a[i];
        }
        
        return -1;
    }

};
