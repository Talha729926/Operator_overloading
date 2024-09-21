#include <iostream>
using namespace std;

class Vector {
private:
    int x, y;
public:
    Vector(int x, int y) : x(x), y(y) {}
    
    Vector operator + (const Vector& v) const {
        return Vector(x + v.x, y + v.y);
    }

    void display() const {
        cout << "Vector(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Vector v1(1, 2), v2(3, 4);
    Vector v3 = v1 + v2;
    v3.display(); 
    return 0;
}
