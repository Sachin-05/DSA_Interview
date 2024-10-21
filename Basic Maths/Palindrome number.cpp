class Solution {
public:
    bool isPalindrome(int n) {
        // we can compare the real no and reverse no
        // but this can be done with some space complexity
        int temp = n;
        int reverseno = 0;
        while(temp>0){
            int modu = temp % 10;
            reverseno = reverseno * 10 + modu;
            temp = temp / 10;
        }
        if(reverseno == n){
            return true;
        }
        return false;
    }
};
