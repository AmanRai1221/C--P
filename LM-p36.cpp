#include <iostream>
using namespace std;

class Singleton {
private:
    static Singleton* instance;

    Singleton() {}

public:
    static Singleton* getInstance() {
        if (!instance) {
            instance = new Singleton();
        }
        return instance;
    }

    void print() {
        cout << "Singleton instance..." << endl;
    }
};

int main() {
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();

    s1->print();
    s2->print();

    return 0;
}