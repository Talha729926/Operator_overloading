#include <iostream>
using namespace std;

class SimpleInt {
private:
    int value;
public:
    SimpleInt(int v = 0) : value(v) {}

    SimpleInt operator + (const SimpleInt& si) const {
        return SimpleInt(value + si.value);
    }

    void display() const {
        cout << value << endl;
    }
};

int main() {
    SimpleInt a(5), b(10);
    SimpleInt c = a + b; 
    c.display(); 
    return 0;
}
