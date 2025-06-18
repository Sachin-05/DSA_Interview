class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector <vector<int>> result;
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for(int i=0; i<n; i+=3){
            if(i+2 <n){
                int a = nums[i], b=nums[i+1], c=nums[i+2];
                int mini = min({a,b,c});
                int maxi = max({a,b,c});

                if(maxi-mini <= k){
                    result.push_back({a,b,c});
                }else{
                    return {};
                }
            }
        }
        return result;
    }
};
