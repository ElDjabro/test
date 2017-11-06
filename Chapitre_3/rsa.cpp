#include <iostream>
#include <gmpxx.h>

#define MAX 10




int main(int argc, char* argv[]) {

	mpz_class a(0); //On créé un objet mpz_class nommé a. On l'initialise à zéro.

	//On va calculer puis afficher MAX nombres premiers
	for(int i = 0 ; i < MAX ; i++)
	{
		//Cette fonction attribue à "a" le premier nombre premier après "a"
		mpz_nextprime(a.get_mpz_t(), a.get_mpz_t());

		std::cout << a << " "; //On affiche le nombre a.
	}

	std::cout << std::endl; //On saute une ligne avant de quitter

	return 0;
}