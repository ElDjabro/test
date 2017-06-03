#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
	char c; // Pour capturer la réponse
	while(true) 
	{
		cout << "MENU PRINCIPAL :" << endl;
		cout << "g : gauche, d : droite, q : quitter -> ";
		cin >> c;

		if(c == 'q')
			break; // Out of "while(1)"

		if(c == 'g') 
		{
			cout << "MENU DE GAUCHE :" << endl;
			cout << "sélectionnez a ou b : ";
			cin >> c;
			if(c == 'a') 
			{
				cout << "vous avez choisi 'a'" << endl;
				continue; // Retour au menu principal
			}
			if(c == 'b') 
			{
				cout << "vous avez choisi 'b'" << endl;
				continue; // Retour au menu principal
			}

			else 
			{
				cout << "vous n'avez choisi ni a ni b !"
				<< endl;
				continue; // Retour au menu principal
			}
		}

		if(c == 'd') 
		{
			cout << "MENU DE DROITE:" << endl;
			cout << "sélectionnez c ou d : ";
			cin >> c;
			if(c == 'c') 
			{
				cout << "vous avez choisi 'c'" << endl;
				continue; // Retour au menu principal
			}

			if(c == 'd') 
			{
				cout << "vous avez choisi 'd'" << endl;
				continue; // Retour au menu principal
			}

			else 
			{
				cout << "vous n'avez choisi ni c ni d !"
				<< endl;
				continue; // Retour au menu principal
			}
		}

		cout << "vous devez saisir g, d ou q !" << endl;
	}
	cout << "quitte le menu..." << endl;

}
