class Solution{
public:
    int search(vector<int> &nums, int target){
        int idx = -1;
        int lo=0;
        int hi=nums.size()-1;

        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(nums[mid]<target){
                lo = mid+1;
            }else if(nums[mid]>target){
                hi = mid-1;
            }else{
                idx = mid;
                break;
            }
        }
        return idx;
    }
};
