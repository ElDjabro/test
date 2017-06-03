#include <iostream>
#include <string>


int main(int argc, char* argv[])
{
	int critere = 0;
	bool quit;
	std::string fruit;


	while(quit == false) 
	{
		std::cout << "Veuillez entrer le nom d'un fruit..."
					 "Peche, Fraise " 
					 "Ou tapez 'q' pour quitter" << std::endl;

		std::cin >> fruit;

		if(fruit == "Peche")
			critere = 1;

		else if(fruit == "Fraise")
			critere = 2;


		else if(char c = std::cin.get() == 'q')
			critere = 3;
			


		switch(critere) 
		{
			case 1 : std::cout << "Vous aimez les peches...en etes vous sur ?" << std::endl;
				break;
			
			case 2 : std::cout << "Aaahhh vous etes un amateur de fraise, un peu de chantilly ?" << std::endl;
				break;

			case 3 : std::cout << "Vous quittez le jeu Bye bye macadam!!!" << std::endl;
				quit = true;
				break;
		}

	}

}