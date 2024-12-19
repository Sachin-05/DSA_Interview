class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        // this is the simple nice approach on the occurences of the logic
        int n = arr.size();
        int maxsofar=0;
 		int count=0;
 		for(int i=0; i<n; ++i){
 			maxsofar = max(maxsofar, arr[i]);
 			if(maxsofar == i){
 				count++;
 			}
 		}
        return count;
    }
};
