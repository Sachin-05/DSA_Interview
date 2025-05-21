class Solution {
public:
    vector<int> corpFlightBookings(vector<vector<int>>& bookings, int n) {
        vector <int> ans(n+1);

        for(int i=0; i<bookings.size(); ++i){
            int start = bookings[i][0];
            int end = bookings[i][1];

            int currseat = bookings[i][2];

            for(int i=start; i<=end; i++){
                ans[i] += currseat;
            }
        }
        vector <int> finalans(n);

        for(int i=0; i<finalans.size(); ++i){
            finalans[i] = ans[i+1];
        }

        return finalans;
    }
};
