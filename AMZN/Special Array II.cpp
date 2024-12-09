class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) {
        // brute force ka solution
        int n = queries.size();
        vector <bool> res(n);
        for(int j=0; j<n; ++j){
            int temp1 = queries[j][0];
            int temp2 = queries[j][1];
            bool isspec = true;

            for(int i=temp1; i<temp2; ++i){
                if((nums[i] % 2 == nums[i + 1] % 2)){
                    // if both are even or both are odd
                    isspec = false;
                    break;
                }
            }
            res[j] = isspec;
        }
        return res;
    }
};
