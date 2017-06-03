#include <iostream>
#include <string>

void func1(const std::string nom, const std::string prenom) {
	std::cout << "Hello je suis func1 et mon type est un void " << std::endl;
	std::cout << "Liste des parametres : nom, prenom " << nom << ", " << prenom; 
}

char func2(bool reponse) {
	std::cout << "Hello je suis func2,...le C++ est un POO, vrai ou faux ?" << std::endl;
	if(reponse == true)
		return 'Y';
	else
		return 'F';

}