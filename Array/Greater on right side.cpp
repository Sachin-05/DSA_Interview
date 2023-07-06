class Solution{
public:	
	/* Function to replace every element with the
	next greatest element */
	void nextGreatest(int arr[], int n) {
	    // code here
	    // 
	    /* 
	     pehle toh array chala deta hu mai 
	     16 17 4 3 5 2
	     maxi=0
	     for(i 0 to n-1){
	         for(j i+1 to n){
	             int maxi = max(arr[j], maxi)
	         }
	         arr[i] = maxi;
	     }
	     arr[n-1] = -1
	     */ // this is the brute force approach
	     // Time complexity -> O(n*2) and space complexity is O(n)
	   //  for(int i=0; i<n-1; ++i){
	   //  int maxi=0;
	   //      for(int j=i+1; j<n; ++j){
	   //          maxi = max(maxi, arr[j]);
	   //      }
	   //      arr[i] = maxi;
	   //  }
	   //  arr[n-1] = -1;
	   
	   // second approach
	   
	   int maxi = arr[n-1];
	   arr[n-1] = -1;
	   
	   for(int i=n-2; i>=0; i--){
	       int curr = arr[i];
	       arr[i] = maxi;
	       maxi = max(maxi, curr);
	   }
	   
	}
};
