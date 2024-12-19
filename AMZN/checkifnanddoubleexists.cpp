class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        // so the solution can be in the O(N^2)
        int n = arr.size();
        bool res = false;

		for(int i=0; i<n-1; ++i){
			for(int j=i+1; j<n; ++j){
				if(arr[i] == 2 * arr[j]){
					res = true;
				}

                if(arr[j] == 2 * arr[i]){
                    res = true;
                }
			}
		}
        return res;
    }
};
