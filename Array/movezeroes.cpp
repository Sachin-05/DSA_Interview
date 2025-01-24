#include<bits/stdc++.h>
using namespace std;

int main(){
	int tt;
	cin >> tt;
	while(tt--){
		int n;
		cin >> n;
		vector <int> v(n);
		for(int i=0; i<n; ++i){
			cin >> v[i];
	    }
	    // we have our first vector inputted now and we have to take care of the following things hrer
	    vector <int> test;
	    for(int i=0; i<n; ++i){
	    	if(v[i]!=0){
	    		test.push_back(v[i]);
	    	}
	    }
	    // so ab humare pass saare sequence mai hai vector ke
	    int tempsz = test.size();
	    int remi = n - tempsz;

	    for(int i=0; i<remi; ++i){
	    	test.push_back(0);
	    }

	    // so uptil now we have everything that we wanted and we are good to go here

	    for(int i=0; i<n; ++i){
	    	cout << test[i] << " ";
	    }
	    cout << endl;
	}
}
