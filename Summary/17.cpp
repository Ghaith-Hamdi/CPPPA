//Which code, inserted into the Class, generates the output abcd ?

#include <iostream>
using namespace std;
class Class {
public:
    static char value;
    Class() { value++; };
    ~Class() { value++; };
    //insert code here
    void print() { cout << value; }
};

char Class::value = 'a';

int main() {
    Class a, * b;
    b = new Class();
    b->set('a');
    b->print();
    delete b;
    a.print();
    a.set('c');
    a.print();
    a.set();
    a.print();
    return 0;
}

//void set(char c = ‘d’) { value = c; }
//void set(char c) { value = c; }
//void set() { value = ‘d’; }
//void set(char c) { cout << c; }
