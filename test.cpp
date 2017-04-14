#include <iostream>
#include <string.h>
#include "printBinary.h"

#define PR(STR, EXPR) \
        std::cout << STR; printBinary(EXPR); std::cout << std::endl;

#define PRINT(STR, VAL) \
        std::cout << STR " = " << VAL << std::endl;

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


// Utilisation de pointeur sur une structure
typedef struct Structure1
{
        int i;
        char c;

} Structure1;


// Type de donnée enum
enum shape { circle = 10, triangle, carre }; // triangle = 11, carre = 12.

// Economiser de la memoire avec union
union Packed {int i; char c; double d; long l;}; // memoire utilise d'union = taille du type le plus grand -> double


typedef struct Point
{
        int i;
        int j;

} Point;

int main() {

        // Point p[10];
        // for(int i = 0; i < 10; i++)
        // {
        //         p[i].i = i;
        //         std::cout << "&p[" << i << "] = " << (long)&p[i] << std::endl;
        // }

        // int a[3];

        // PRINT("a", (long)a);
        // PRINT("&a[Ø]", (long)&a[0])

        // std::cout << "taille de union " << sizeof(Packed) << std::endl;

        // std::cout << shape(triangle) << "; " << shape(carre) << std::endl; 

        // Structure1 s1;
        // Structure1* sp = &s1;
        // sp->i = 3;
        // sp->c = 'a';
        // PRINT("valeur de s1.i : s1.i ", s1.i);
        // PRINT("valeur de s1.i, sp->i ", sp->i);
        // PRINT("adresse de s1", (long)&s1);
        // PRINT("adresse de s1", sp);

        int i[10];

        int* ip = i;

        std::cout << "l'adresse de i est : " << (long)ip << std::endl;
        ip++;
        std::cout << "l'adresse de i est : " << (long)ip << std::endl;



	return 0;
}
