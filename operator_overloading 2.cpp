#include <iostream>
using namespace std;

class Point {
private:
    int x, y;
public:
    Point(int x, int y) : x(x), y(y) {}

    Point operator - (const Point& p) const {
        return Point(x - p.x, y - p.y);
    }

    void display() const {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(5, 6), p2(2, 3);
    Point p3 = p1 - p2;
    p3.display(); 
    return 0;
}
