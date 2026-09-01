#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal eats" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

class GermanShepherd : public Dog {
public:
    void guard() {
        cout << "German Shepherd guards" << endl;
    }
};

int main() {
    GermanShepherd g;
    g.eat();
    g.bark();
    g.guard();
    return 0;
}