class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int temp=0;
		vector < char> res;
		// now what we have do here is that the thing offset value
		for(int i=0; i!=s.length(); ++i){// any value here is not getting the expected value
			// here learn a new thing of doing the bound check for the temp array
            if((temp < spaces.size()) && (i==spaces[temp])){
				res.push_back(' ');
				temp++;
			}
			res.push_back(s[i]);
		}
		string resstring(res.begin(), res.end());
        return resstring;
    }
};
