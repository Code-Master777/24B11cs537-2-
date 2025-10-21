#include <iostream>
using namespace std;
class demo {
    int n;
public:
    demo(int x) {
        n = x;
    }
    demo operator-() {
        return demo(-n);  
    }
    void display() {
        cout << "value = " << n << endl;
    }
};

int main() {
    demo obj1(5);
    demo obj2 = -obj1;  
    cout << "Original value:" << endl;
    obj1.display();
    cout << "After operator overloading:" << endl;
    obj2.display();
    return 0;
}
