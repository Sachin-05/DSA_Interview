class Solution {
public:
    int countOddDigit(int n) {
        // The count of odd digits
        int temp = n;
        int res=0;
        while(temp>0){
            int modu = temp % 10;
            if(modu%2){
                res++;
            }
            temp = temp / 10;
        }
        return res;
    }
};
