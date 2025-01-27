#include <bits/stdc++.h>
using namespace std;

vector <int> solverunningsumof1d(int n, vector <int>& v){
	// 1 1  1 1 1 
	// 1 2 
	 vector <int> res(n);
	 res[0] = v[0];
	 int temp = v[0];
	for(int i=1; i<n; ++i){
		temp += v[i];
		res[i] = temp;
	}

	return res;
}


int main(){
	int n;
	cin >> n;
	/// now we have to declare the vector over here
	vector <int> vec(n);
	for(int i=0; i<n; ++i){
		cin >> vec[i];
	}

	// so we have the vector in place for the inputting it

	vector <int> res(n);
	res = solverunningsumof1d(n, vec);

	for(int i=0; i<n; ++i){
		cout << res[i]  << " ";
	}
	cout << endl;
}
