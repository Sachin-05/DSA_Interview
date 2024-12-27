class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        // sabse pehle to brute force karte hai
         int sz = values.size();
        // int maxres = INT_MIN;

        // for(int i=0; i<sz-1; ++i){
        //     for(int j=i+1; j<sz; ++j){
        //         maxres = max(maxres, values[i] + values[j] + i-j);
        //     }
        // }
        // return maxres;

        // so we have get it done by the help of brute force now let's do it by optimisation

        // this can be solved by the greedy approach

        int maxscore = 0;
        int max_i = values[0];

        for(int j=1; j<sz; ++j){
            int score = max_i + values[j] - j;
            maxscore = max(maxscore, score);
            max_i = max(max_i, values[j] + j);
        }

        return maxscore;
    }
};
