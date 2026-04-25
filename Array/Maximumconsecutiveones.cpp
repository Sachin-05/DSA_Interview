class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        // brute force
        int res=0;
        int counter=0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                counter++;
                res = max(res, counter);
            }else{
                counter=0;
            }
        }
        return res;
    }
};
