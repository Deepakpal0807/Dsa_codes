#include<bits/stdc++.h>
using namespace std;
int main(){
    
	// 4. reading data into a vector of pair

	// a. using push_back

	int n; // denotes the size of vector
	cin >> n;

	vector<pair<int, int>> v7;

	for (int i = 0; i < n; i++) {

		// read a pair of values from the user

		int x, y;
		cin >> x >> y;

		// insert the pair (x, y) into vector

		v7.push_back({x, y}); // or v7.push_back(make_pair(x, y));
	}

	for (pair<int, int> p : v7) {
		cout << "(" << p.first << ", " << p.second << ") ";
	}

	cout << endl;

	// // b. using fixed sized vector

	int m; // denotes the size of vector
	cin >> m;

	vector<pair<int, int>> v8(m);

	for (int i = 0; i < m; i++) {
		// directly read a pair of values from the user into the vector of pair
		cin >> v8[i].first >> v8[i].second;
	}

	for (pair<int, int> p : v8) {
		cout << "(" << p.first << ", " << p.second << ") ";
	}

	cout << endl;

	return 0;
}
