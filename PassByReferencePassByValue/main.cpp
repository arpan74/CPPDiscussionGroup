

#include <iostream>
void addByReference(int &a, int &b);
void addByValue(int a, int b);
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    int a = 3, b= 5;
    cout << "The memory location for a is " << &a << "\nThe memory location for b is " << &b << endl;
    addByReference(a, b);
    addByValue(a,b);
    return 0;
}

void addByReference(int &a, int &b){
    cout << "This is addition where parameters are passed by reference" << endl;
    cout << "The memory location for a is " << &a << "\nThe memory location for b is " << &b << endl;
    cout << "The sum of " << a << " and b is " << a + b << endl;
};

void addByValue(int a, int b){
    cout << "This is addition where parameters are passed by Value" << endl;
    cout << "The memory location for a is " << &a << "\nThe memory location for b is " << &b << endl;
    cout << "The sum of " << a << " and b is " << a + b << endl;
};