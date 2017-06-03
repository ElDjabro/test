// Utilisation d'un tableau de pointeurs de fonctions
#include <iostream>

//  Une macro qui définit des fonctions factices:
#define DF(N) void N() { std::cout << "fonction #N est appelé..." << std::endl; }

DF(a) DF(b) DF(c) DF(d)

int main(int argc, char* argv[])
{


}