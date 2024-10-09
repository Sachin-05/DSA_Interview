bool ispythornot(vector<int> v){
   int n = v.size();
   set <int> s;
   for(int i=0; i<n; ++i){
      s.insert(v[i]*v[i]);
   }
   // now we have the set which have the squared elements of the array, so to bring that
   // let's compare
   
   for(int i=0; i<n; i++){
      for(int j=i; j<n; j++){
         for(int k=j; k<n; ++k){
             s[i] = s[j] + s[k];
             return true;
     }
}
}
 return false;
}
