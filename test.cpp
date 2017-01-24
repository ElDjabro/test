#include <iostream>
#include <string.h>
#include "printBinary.h"
#define PR(STR, EXPR) std::cout << STR; printBinary(EXPR); std::cout << std::endl;
#define PRINT(STR, VAL) std::cout << STR "= " << VAL << std::endl;

void displayNbrValue() 
        {
        unsigned int getval;
        unsigned char a, b;
        std::cout << "Saisissez un nombre entre 0 et 255 : \n";
        std::cin >> getval; a = getval;
        PR("a en binaire : ", a);
        std::cout << "Saisissez un nombre entre 0 et 255 : \n";
        std::cin >> getval; b = getval;
        PR("b en binaire : ", b);
        PR("a | b : ", a | b);
        PR("a & b : ", a & b);
        }

// Exemple de structure simple
struct Structure
{
        char c; 
        int i;
        std::string s;
};

// Autorisation d'une structure à faire référence à elle même
typedef struct SelfRef
{       
        int i;
        SelfRef* ref;

} SelfRef;

int main() {

        SelfRef r1, r2; // r1 et r2 sont des instances de la structure SelfRef
        
        r1.ref = &r2;
        r2.ref = &r1;
        r1.i = 3;
        r2.i = 47;

        PRINT("pointeur sur r2 : r1.ref", r1.ref);
        PRINT("adresse de r2 : &r2", &r2);
        
        // Structure s1, s2;
        // s1.c = 'a';
        // s1.s = "Je vais bien";
        // s1.i = 1;

        // s2.i = 3;
        // s2.s = "Hahah je suis s2\n";
        // s2.c = 'b';

	// PRINT("structure s1 char ", s1.c); 
	// PRINT("structure s2 ", s2.s);
	return 0;
}
