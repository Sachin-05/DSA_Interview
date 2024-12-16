class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
         // optimise approach of finding the heaps in the memory
         int n = nums.size();
         priority_queue <pair<int,int>, vector<pair<int,int>>, greater <>> minheap;

         for(int i=0; i<n; ++i){
            minheap.push({nums[i], i});
         }

         // now we have pushed the two things value and index here

         while(k--){
            auto [minvalue, minidx] = minheap.top();
            minheap.pop();

            nums[minidx] = minvalue*multiplier;
            minheap.push({nums[minidx], minidx});
         }
         return nums;
    }
};
