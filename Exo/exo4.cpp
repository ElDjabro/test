#include <iostream>
using namespace std;

int main(int argc, char*  argv[])
{
	char c;
	bool quit;
	while(quit == false)
	{
		cout << "MENU PRINCIPAL :" << endl;
		cout << "g : gauche, d : droite, q : quitter -> ";
		cin >> c;

		switch(c)
		{
			case 'g' : cout << "MENU DE GAUCHE :" << endl;
			cout << "sélectionnez a ou b : ";
			cin >> c;

			switch(c)
			{
				case 'a' : cout << "vous avez choisi 'a'" << endl;
					break;

				case 'b' : cout << "vous avez choisi 'b'" << endl;
					break;

				default : cout << "vous n'avez choisi ni a ni b !"
					<< endl;
					break;

			}
			break;



			case 'd' : cout << "MENU DE DROITE :" << endl;
			cout << "sélectionnez c ou d : ";
			cin >> c;

			switch(c)
			{
				case 'c' : cout << "vous avez choisi 'c'" << endl;
					break;

				case 'd' : cout << "vous avez choisi 'd'" << endl;
					break;

				default : cout << "vous n'avez choisi ni c ni d !"
				<< endl;
					break;

			}
			break;

				case 'q' : cout << "Vous quittez le menu" << endl;
					quit = true;
					break;
			
		}

	}
}