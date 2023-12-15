class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        // its look like a simple question only
        // flag rakho aur badhate jaao
        bool flag = true;
        int i=0,j=0;
        string res;

        while(i<word1.length() && j<word2.length()){
            if(flag){
                res.push_back(word1[i]);
                i++;
            }else{
                res.push_back(word2[j]);
                j++;
            }
            flag = !flag;
        }

        while(i<word1.length()){
            res.push_back(word1[i]);
            i++;
        }

        
        while(j<word2.length()){
            res.push_back(word2[j]);
            j++;
        }

        return res;
    }
};
