int missingNumber(int A[], int N)
{
    // can be solved by mathematics also
    /* total sum = n*(n+1) / 2;
       missing no. = total sum - total array sum now
       */
       int asum=0;
       int tsum = N*(N+1)/2;
       
       for(int i=0; i<N-1; ++i){
           asum += A[i];
       }
       
       int ans = tsum-asum;
       
       return ans;
}
