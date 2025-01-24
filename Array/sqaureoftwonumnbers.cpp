#include<bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin >> test;
	while(test--){
		int n;
		cin >> n;
		vector <int> vec(n);
		for(int i=0; i<n; ++i){
			cin >> vec[i];
		}
		// there is the vector that needs to be addressed

		for(int i=0; i<n; ++i){
			vec[i] = vec[i] * vec[i];
		}

		// now what we have did we have taken the square of the vector number that is enabled on it

		// have to sort this too
		sort(vec.begin(), vec.end());
		// let's output it out this
		for(auto it : vec){
			cout << it << " ";
		}
		cout << endl;
	}
}
