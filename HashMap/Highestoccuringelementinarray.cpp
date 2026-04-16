class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(auto num: nums){
            mp[num]++;
        }

        int maxfreq = 0;
        int ans=INT_MAX;

        for(auto &it: mp){
            int num = it.first;
            int freq = it.second;

            if(freq > maxfreq){
                maxfreq = freq;
                ans = num;
            }else if(freq==maxfreq){
                ans = min(ans,num);
            }
        }
        return ans;
    }
};
