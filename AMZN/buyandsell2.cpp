#include<bits/stdc++.h>
using namespace std;

int solvebuyandsell2(int n, vector <int>& v){
	int amount = 0;
	for(int i=0; i<n-1; ++i){
		if(v[i+1] > v[i]){
			amount += v[i+1] - v[i];
		}
	}
	return amount;
}

int main(){
		// this will be the variation of the sell and buy stock part 2
		int n;
		cin >> n;
		vector <int> vec(n);
		for(int i=0; i<n; ++i){
			cin >> vec[i];
		}
		// now we have all the numbers in the input vector to be taken care of
		// we are going to solve it by the greedy algo
		int res;
		res = solvebuyandsell2(n, vec);
		cout << res << endl;
	}
