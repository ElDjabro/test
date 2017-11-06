//: C03:YourPets2.cpp
#include <iostream>
using namespace std;

int chien, chat, oiseau, poisson;
void f(int pet) 
{
	cout << "identifiant de l'animal : " << pet << endl;
}

int main() 
{
	int i, j, k;
	cout << "f() : " << (long)&f << endl;
	cout << "chien : " << (long)&chien << endl;
	cout << "chat : " << (long)&chat << endl;
	cout << "oiseau : " << (long)&oiseau << endl;
	cout << "poisson : " << (long)&poisson << endl;
	cout << "i : " << (long)&i << endl;
	cout << "j : " << (long)&j << endl;
	cout << "k : " << (long)&k << endl;
}