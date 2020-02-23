#include <iostream>

using namespace std;

class Point{
	int x,y;
public:
	Point(int _x, int _y) :x(_x), y(_y) {}
	Point operator+(const Point &point) {
		return Point(x + point.x, y + point.y);
	}

	void display() {
		cout << "info: " << x << " " << y << endl;
	}
};

int main() {
	Point a(10,20);
	Point b(30,40);
	Point c = a + b;
	c.display();
	return 0;
}
