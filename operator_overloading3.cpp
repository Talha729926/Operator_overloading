#include <iostream>
using namespace std;

class Matrix {
private:
    int a, b, c, d;
public:
    Matrix(int a, int b, int c, int d) : a(a), b(b), c(c), d(d) {}

    Matrix operator * (const Matrix& m) const {
        return Matrix(
            a * m.a + b * m.c, a * m.b + b * m.d,
            c * m.a + d * m.c, c * m.b + d * m.d
        );
    }

    void display() const {
        cout << "[" << a << " " << b << "]" << endl;
        cout << "[" << c << " " << d << "]" << endl;
    }
};

int main() {
    Matrix m1(1, 2, 3, 4), m2(5, 6, 7, 8);
    Matrix m3 = m1 * m2;
    m3.display();
    return 0;
}
