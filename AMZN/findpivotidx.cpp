#include <bits/stdc++.h>
using namespace std;

int solvepivot(int n, vector <int> &v){
	// as we are not modifying the vector and just traversing so we can 
	// pass it by reference here the value
	int tsum =0, lsum = 0;

	for(auto num : v){
		tsum += num;
	}

	int rsum;

	// we have the sum of the total array here
	for(int i=0; i<n; ++i){
		rsum = tsum - v[i] - lsum;
		if(lsum==rsum){
			return i;
		}
		lsum += v[i];
	}
	return -1;
}

int main(){
 	int n;
 	cin >> n;
 	vector <int> vec(n);
 	// we have inputted the vector here and now are working on it
 	for(int i=0; i<n; ++i){
 		cin >> vec[i];
 	}

 	// so we have the input vector here
 	// rsum = tsum - lsum - nums[i];
 	// okay got it

 	cout << solvepivot(n, vec) << endl;
 }
