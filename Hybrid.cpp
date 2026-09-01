#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal eats" << endl;
    }
};

class Dog : virtual public Animal {
};

class Cat : virtual public Animal {
};

class Pet : public Dog, public Cat {
};

int main() {
    Pet p;
    p.eat(); // No ambiguity due to virtual inheritance
    return 0;
}