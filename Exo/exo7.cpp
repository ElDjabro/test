#include <iostream>
#include <string>

using namespace std;

void f1(string* str)
{
	cout << "name with f1 : " << *str << endl;
	cout << "je suis localisé a l'adresse suivante : " << (long)& str << endl;
	*str = "Joujouba";
	cout << "Name : " << *str << endl;
}

void f2(string& ptr_str) 
{
	cout << "name with f2 : " << ptr_str << endl;
	cout << "adresse str avec f2 : " << (long)&ptr_str << endl;

}

int main(int argc, char* argv[])
{
	string name = "Moha";
	f1(&name);
	f2(name);

}