class Solution {
public:
    int largestDigit(int n) {
        // this thing can be done on O(length of integer)
        int res = 0;
        while(n>0){
            int modu = n%10;
            res = max(res, modu);
            n = n/10;
        }
        return res;
    }
};
