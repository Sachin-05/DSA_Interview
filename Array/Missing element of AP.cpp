
class Solution{   
public:
    int findMissing(int arr[], int n) {
        // first we will find out the d as first term and last term are not changed
        
        int d = (arr[n-1]-arr[0])/(n);
        
        for(int i=1; i<n; ++i){
            int temp = arr[0]+i*d;
          //  cout << temp << " ";
            if(arr[i]!=temp){
                return temp;
            }
        }
        return -1;
    }
};
