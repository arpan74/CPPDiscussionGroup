#include<iostream>
#include "object1.h"
#include "object2.h"
using namespace std;

int main(){

	cout << "This program will check the memory allocations of various objects" << endl;
	object1 k;
	object2 j;
	cout << "The size of object 1 is " <<  sizeof(k) << "\n" << "The size of object 2 is " << sizeof(j) << "/n";
	return 0;	

}

