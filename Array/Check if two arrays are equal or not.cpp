class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        //sort the first vector 
        sort(A.begin(),A.end());
        
        //sort the second vector
        sort(B.begin(),B.end());
        
        //now we will check the elements of Array one by one
        
        for(int i=0; i<N; ++i){
            if(A[i]!=B[i]){
                return 0;
            }
        }
        
        return 1;
    }
};
