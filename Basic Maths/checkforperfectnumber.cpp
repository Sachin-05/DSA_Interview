class Solution {
public:
    bool isPerfect(int n) {
        if(n<=1) return false;

        int sum=1;

        for(int i=2; i*i<=n; i++){
            if(n%i==0){
                sum+= i;
                sum += n/i;
            }
        }
        if(sum==n){
            return true;
        }
        return false;
    }
};
