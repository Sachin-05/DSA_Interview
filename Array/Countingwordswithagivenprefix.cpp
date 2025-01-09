class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        // the output here is to compute all the possibilites of the sum
	
	int cnt = 0;
	for(const string &word : words){
		if(word.substr(0, pref.length()) == pref){
			cnt++;
		}
	}
	return cnt;
    }
};
