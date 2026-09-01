#include <iostream>
using namespace std;

class Father {
public:
    void showFather() {
        cout << "Father's property" << endl;
    }
};

class Mother {
public:
    void showMother() {
        cout << "Mother's property" << endl;
    }
};

class Child : public Father, public Mother {
};

int main() {
    Child c;
    c.showFather();
    c.showMother();
    return 0;
}