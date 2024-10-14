string1 :: abc
string2 :: abccba

We can implement this using the stack DS

bool ispalindromeornot(string s){
string temp = s;
stack <vector<char>> st;
for(int i=0; i<temp.size(); i++){
	if(st.top()!=temp[i]){
	st.push(temp[i]);
}else{
st.pop();
}	
}
// till now we have the stack ready on our set - so let's go
 if(st.empty()){
    return true;
}
return false;
}
