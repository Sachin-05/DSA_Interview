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
