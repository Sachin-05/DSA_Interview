
void rotate(int arr[], int n)
{
    // here the program we have to write is to rotate it one by one
    // int res[n];
    
    // int temp = arr[n-1];
    
    // for(int i=1; i<n; ++i){
    //     res[i] = arr[i-1];
    // }
    
    // res[0] = temp;
    
    // for(int i=0; i<n; ++i){
    //     arr[i] = res[i];
    // }
    
    // now write the program for if you want to rotate it with value of k 
    
    //   
    /*
    1  2 3 4 5
     k=-2   -> 3 4 5 1 2          
     k=-1   -> 2 3 4 5 1
     k=0     -> 1  2 3 4 5
     k=1     -> 5 1 2 3 4
     k=2     -> 4 5 1 2 3
     
     if(k<0) k+=n;
     if(k>n) k = k%n;
     for(int i=n-k; i++){
         vec.push_back(arr[i])
     }
     for(int i=0; i<n-k; i++){
         vec.push(arr[i]);
     }
     */
     // okay so the pseudo code logic I had written now i will code
     vector <int> v;
     int k=1;
     if(k<0) k+=n;
     if(k>n) k%=n;
     
     for(int i=n-k; i<n; ++i){
         v.push_back(arr[i]);
     }
     
     
     for(int i=0; i<n-k; ++i){
         v.push_back(arr[i]);
     }
     
     
     for(int i=0; i<n; ++i){
         arr[i] = v[i];
     }
     
}
