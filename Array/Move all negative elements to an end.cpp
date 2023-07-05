void segregateElements(int arr[],int n)
    {
        // Your code goes here
        // brute force approach that I have written on this.
        vector <int> v;
        
        for(int i=0; i<n; ++i){
            if(arr[i] > 0){
                v.push_back(arr[i]);
            }
        }
        
        // I had missed the test case zero here but
        
        for(int i=0; i<n; ++i){
            if(arr[i] < 0){
                v.push_back(arr[i]);
            }
        }
        
        
        for(int i=0; i<n; ++i){
            arr[i] = v[i];
        }
        
        // Time complexity is O(N) and Space Complexity is also O(N)
    }
