#include <iostream>
using namespace std;

int dog;
float cat;
char bird;
long fish;

void f(int pet) {
	cout << "pet id number: " << pet << endl;
}

int main() {
	int i;
	double	j;
	short int k;
	cout << "f(): " << (long)&f << endl;
	cout << "dog: " << (long)&dog << endl;
	cout << "cat: " << (long)&cat << endl;
	cout << "bird: " << (long)&bird << endl;
	cout << "fish: " << (long)&fish << endl;
	cout << "i: " << (long)&i << endl;
	cout << "j: " << (long)&j << endl;
	cout << "k: " << (long)&k << endl;
} ///:~