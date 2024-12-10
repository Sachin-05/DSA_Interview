class Solution {
public:
    bool isValid(string s) {
        // nice implementation of this through the stack and unordered map
        stack <char> st;
        unordered_map <char, char> ummp = {
        	{')', '('},
        	{'}', '{'},
        	{']', '['}};

        // uptil now we have stored all the map in an unorder fashion

        	for ( char c : s){
        		// stack is empty then there is invalid pattern
        		if(ummp.count(c)){
        		   char top = st.empty() ? '#' : st.top();
        		   if(ummp[c] == top){
        		   	 st.pop();
        		   }else{
        		   	 return false;
        		   }
        		}else{
        			st.push(c);
        		}
        	}
        	return st.empty();
    }
};
