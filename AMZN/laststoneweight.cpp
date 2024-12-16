class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        // implement a max heap
        int n = stones.size();

        priority_queue <int> pq;

        for(int i=0; i<n; ++i){
            pq.push(stones[i]);
        }

        while(pq.size() > 1){
            int firstheavy = pq.top();
            pq.pop();
            int secondheavy = pq.top();
            pq.pop();

            int updateres = firstheavy - secondheavy;
            if(firstheavy!=secondheavy){
            pq.push(updateres);
            }
        }

        return pq.empty() ? 0 : pq.top();
    }
};
