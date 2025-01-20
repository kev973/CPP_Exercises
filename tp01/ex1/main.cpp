#include <iomanip>
#include <iostream>

/*
question 1 : (voir ci dessous)

question 2 : (voir CMakeLists.txt)

question 3 : (voir ci dessous)

question 4 : 

kevin@kev-desktop:~/Desktop/uni/s8/c++/tp1/build$ /home/kevin/Desktop/uni/s8/c++/tp1/build/bonjour
Entre ton nom: keeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeevin
Bonjour keeeeeeeeeeeeeeeeee

on remarque que l'input est tronqué a 20 caractères.
Pour que tout le nom soit bien pris en compte il faut utiliser le type string de c++
et pas celui du c.

question 5 : (voir ci dessous)
*/

int main()
{
    std::cout << "Entre ton nom: "; // affiche dans la console
    /*
    ancien code :   

    char name[20] = ""; // alloue de la mémoire pour un tableau de 20 char
    std::cin >> std::setw(20) >> name; // récupère l'input de la console et tronque au 20 premiers caractères si dépassement

    */

    auto name = std::string{""};
    std::cin  >> name;                     
    std::cout << "Bonjour " << name << std::endl; // affiche dans la console

    return 0;
}