class Solution {
public:
    bool canJump(vector<int>& nums) {
       // jump is the hopping
       // this can be done very easy with the recursion
       // the gas is not going to fuel up
       int gas=0;
       for(int i=0; i<nums.size(); ++i){
            if(gas<0){
                return false;
            }else if(nums[i] > gas){
                gas = nums[i];
            }
            gas--;
       }
       return true;
    }
};
