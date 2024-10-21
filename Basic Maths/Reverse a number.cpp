class Solution {
public:
    int reverseNumber(int n) {
        // we have to reverse a number 
        int temp = n;
        int reverseno = 0;
        while(temp>0){
            int modu = temp%10;
            reverseno = reverseno*10 + modu;
            temp = temp / 10;
        }
        return reverseno;
    }
};
