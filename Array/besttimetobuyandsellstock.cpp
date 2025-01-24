#include <bits/stdc++.h>
using namespace std;

int main(){
	int tt;
	cin >> tt;
	while(tt--){
		int n;
		cin >> n;
		vector <int> vec(n);
		for(int i=0; i<n; ++i){
			cin >> vec[i];
		}

		// now we have taken the input of the vector and are submitting the value

		int res = INT_MIN;
		for(int i=0; i<n-1; ++i){
			int maxi = 0;
			for(int j=i+1; j>=0; j--){
				maxi = max(vec[j]-vec[i], maxi);
			}
			res = max(res, maxi);
		}

		cout << res << endl;

	}
}
