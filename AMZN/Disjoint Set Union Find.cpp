Union-Find DS

class DisJointSet{
  private:
  vector <int> parent, rank;
  public:
   DisJointSet(int size){
     parent.resize(size);
     rank.resize(size, 0);
     for(int i=0; i<size; ++i){
       parent[i] = i;
     }
// we have initialize the parent vector as a continuum sequence

int find(int x){
 if(parent[x] != x0{
   x = find(x);
}
return find;
}

//The above code is intialising the vector and making it till the declaration and the find the element on the parent vector


So basically Disjoint sets are mainly used for two purposes, one for it Path compression and Union Rank.

// Now we are going to joint two sets from the roots together

void UnionSets(int x, int y){
 int rootX = find(x);
 int rootY = find(y);
 
 if(rootX!=rootY){
   if(parent[rootX] < rootY){
       rank[rootY] = rootX;
  }
   else if(parent[rootY] < rootX){
       rank[rootX] = rootY;
    }
   else{
      rank[rootX] = rootY;
      rank[rootX]++;
}

// the above code are going to join/merge the set from the roots connected

// below code we are going to write the if the two sets root's node are connected or not?

int connected(int x, int y){
 return find(x)== find(y);
}
