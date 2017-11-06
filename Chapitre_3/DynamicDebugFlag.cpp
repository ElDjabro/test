//: C03:DynamicDebugFlags.cpp
#include <iostream>
#include <string>
using namespace std;
// Les drapeaux de deboguage ne sont pas nécéssairement globaux :
bool debug = false;
int main(int argc, char* argv[]) 
{
	for(int i = 0; i < argc; i++)
		if(string(argv[i]) == "--debug=on")
			debug = true;
	bool go = true;
	while(go)
	{
		if(debug) 
		{
			// Code de déboguage ici
			cout << "Le débogueur est activé!" << endl;
		} 
		else 
		{
			cout << " Le débogueur est désactivé." << endl;
		}

		cout << "Activer le débogueur [oui/non/fin]: ";
		string reply;
		cin >> reply;
		if(reply == "oui") debug = true; // Activé
		if(reply == "non") debug = false; // Désactivé
		if(reply == "fin") break; // Sortie du 'while'
	}
} ///:~