class Solution {
public:
    int fillCups(vector<int>& amount) {
       int seconds = 0;
 
		while(true){

			sort(amount.rbegin(), amount.rend());

			// so the array is sorted in the desecnding order
			if(amount[0]==0){
				break;
			}

			if(amount[1] > 0){
				amount[0]--;
				amount[1]--;
			}else{
				amount[0]--;
			}
			seconds++;
		}
        return seconds;
    }
};
