
class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        /* the first approach that I will take 
          we can use the hashmap and then implement it.
          
        */
        // this is the brute force approach
        // vector <int> v;
        // v.push_back(a[0]);
        // int ans=1;
        // for(int i=0; i<n-1; ++i){
        //     if(a[i]!=a[i+1]){
        //         ans++;
        //         v.push_back(a[i+1]);
        //     }
        // }
        // for(int i=0; i<ans; ++i){
        //     a[i] = v[i];
        // }
        // return ans;
        
        // second approach -> let's use it using the hashmap
        // the TC -> O(n) and SC -> O(n)
        
        map<int,bool> mp;
        vector <int> v;
        for(int i=0; i<n; ++i){
            // if the element is not present in the map then insert it in our vector
            if(mp.find(a[i])==mp.end()){
                v.push_back(a[i]);
            }
            mp[a[i]]= true;
        }
        for(int i=0; i<v.size(); ++i){
            a[i] = v[i];
        }
        return v.size();
    }
};
