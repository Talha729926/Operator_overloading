#include <iostream>
using namespace std;

class Vector2D {
private:
    int x, y;

public:
    // Constructor
    Vector2D(int x = 0, int y = 0) : x(x), y(y) {}

    // Overloading the subtraction operator (-)
    Vector2D operator - (const Vector2D& v) const {
        return Vector2D(x + v.x, y + v.y);
    }

    // Display the vector
    void display() const {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Vector2D v1(5, 7);
    Vector2D v2(3, 2);
    
    // Subtract vectors
    Vector2D result = v1 - v2;
    
    // Display the result
    result.display(); // Output: (2, 5)
    
    return 0;
}
