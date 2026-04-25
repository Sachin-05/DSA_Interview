class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        //your code goes here
        set<int> st;

        for(auto it : nums){
            st.insert(it);
        }
        int nsz = st.size();

        if(nsz==1){
            return -1;
        }
        auto it = st.end();
        it--;
        it--;

        return *it;
    }
};
