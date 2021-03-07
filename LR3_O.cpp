#include <iostream>
using namespace std;

class Auto {
protected:
    string name;
    double speed;
public:
    Auto() {
        name = "-";
        speed = 0;
    }
    Auto(string n, double s) {
        name = n;
        speed = s;
    }
    virtual void print() {
        cout << "\nModel: " << name << ", speed: " << speed;
    }
    virtual ~Auto() {}
};

class Bus :public Auto {
protected:
    int num;
public:
    Bus() :Auto() {
        num = 0;
    }
    Bus(string name, double s, int n) :Auto(name, s) {
        num = n;
    }
    void print() {
        Auto::print();
        cout << ", " << "number of passengers: " << num << endl;
    }
};

int main()
{
    Auto A("A", 90);
    A.print();

    Bus B("B", 60.8, 40);
    B.print();

    Auto* C;
    C = &B;
    B.print();
}