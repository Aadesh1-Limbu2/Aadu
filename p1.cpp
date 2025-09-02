#include <iostream>
#include <string>
using namespace std;

// Base class
class Elements {
protected:
    string name;

public:
    Elements(string elementName) : name(elementName) {}

    virtual void describe() {
        cout << name << " is a fundamental element." << endl;
    }

    virtual void power() = 0; // Pure virtual function
};

// Derived classes
class Fire : public Elements {
public:
    Fire() : Elements("Fire") {}

    void power() override {
        cout << "Fire burns with intensity." << endl;
    }
};

class Water : public Elements {
public:
    Water() : Elements("Water") {}

    void power() override {
        cout << "Water flows and adapts." << endl;
    }
};

class Earth : public Elements {
public:
    Earth() : Elements("Earth") {}

    void power() override {
        cout << "Earth provides stability." << endl;
    }
};

class Air : public Elements {
public:
    Air() : Elements("Air") {}

    void power() override {
        cout << "Air moves freely and invisibly." << endl;
    }
};
int main() {
    Fire fire;
    Water water;
    Earth earth;
    Air air;

    fire.describe();
    fire.power();

    water.describe();
    water.power();

    earth.describe();
    earth.power();

    air.describe();
    air.power();

    return 0;
}