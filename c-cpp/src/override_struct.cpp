#include <iostream>

using namespace std;

struct node{
	int elem;
	bool operator<(const node b) const {
		return this->elem < b.elem;
	}
	node(int x):elem(x) {}
};

int main() {
	node a(100),b(200);
	cout << (a < b) << endl;
	return 0;
}
