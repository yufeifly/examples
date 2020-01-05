#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, M, T = 0, k ,P;
	freopen("201909-1.txt","r",stdin);
	cin >> N >> M;
	vector<vector<int>> tree(N,vector<int>(2,0));
	for(int i=0;i<N;++i) {
		int init = 0,cut = 0,cut_total = 0;
		cin >> init;
		for(int j=0;j<M;++j) {
			cin >> cut;
			cut_total += cut;
		}
		tree[i][0] = init + cut_total;
		tree[i][1] = -cut_total;
	}
	//
	P = tree[0][1];
	k = 0;
	for(int i=0;i<N;++i) {
		T += tree[i][0];
		if(tree[i][1] > P) {
			P = tree[i][1];
			k = i;
		}
	}
	cout << T << " " << k+1 << " " << P << endl;
	return 0;
}
