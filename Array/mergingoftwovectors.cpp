#include <bits/stdc++.h>
using namespace std;

int main(){
	int tt;
	cin >> tt;
	while(tt--){
		int m,n;
		cin >> m >> n;
		vector <int> v1(m+n);
		vector <int> v2(n);

		// now we have to pass the first vector here

		for(int i=0; i<m; ++i){
			cin >> v1[i];
		}

		for(int i=m; i<m+n; ++i){
			v1[i] = 0;
		}

		// we have our first vector ready now so we just have to take care of the second vector here
		for(int i=0; i<n; ++i){
			cin >> v2[i];
		}

		// now we both the vectors ready on our end
		for(int i=0; i<n; ++i){
			// here we will be writing the logic of method overriding
			v1[i+m] = v2[i];
		}

		// now we have the first vector manipulated with our logic
		sort(v1.begin(), v1.end());

		for(int i=0; i<m+n; ++i){
			cout << v1[i] << " ";
		}
		cout << endl;
	}
}


the time complexity here will be around somewhere O(M+N);
and the space complexity is O(1) as we are modifying the existing first vector only here.
