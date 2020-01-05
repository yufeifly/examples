#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(vector<int> &a,vector<int> &b) {
	return a[0] < b[0];
}

int main() {
	vector<vector<int>> vec = {
		{8,10},
		{1,3},
		{2,6}
	};
	sort(vec.begin(),vec.end(),cmp);
	for(auto i : vec) {
		for(auto j : i) {
			cout << j << " ";
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}
