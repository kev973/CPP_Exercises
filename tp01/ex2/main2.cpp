#include <iostream>
#include <vector> // question 2

void ajoute_double(std::vector<int> &v) // question 5
{
    auto tmp = v;
    for (const auto n : tmp)
    {
        // pour tout les éléments de v, ajoute en fin leur double
        v.emplace_back(n * 2);
    }
}

// question 6
void affiche (const std::vector<int> &v){
    for (auto elem : v){
        std::cout << " " << elem; 
    }
    std::cout << std::endl; // fini le flush
}

int main()
{
    // question 7
    auto entiers = std::vector<int>{};
    std::cout << "veuillez ajouter les valeurs désirées : " << std::endl;
    int a = 1;
    do{ 
        std::cin >> a;
        // question 8
        if(std::cin.fail()){
            std::cerr << "ceci n'est pas un entier" << std::endl;
            return -1;
        }
        if(a < 0 && entiers.size() > 0){
            entiers.pop_back();
        } else if(a > 0){
            entiers.emplace_back(a);
        }
    }while(a != 0);

    
    if(entiers.size() > 0){
        // affiche les valeurs du tableau 
    std::cout << "Le tableau contient les valeurs :";
    /* ancien code 

    for (int i = 0; i < entiers.size(); i++)
    {
        std::cout << " " << entiers[i];
    }
    std::cout << std::endl; // fini le flush
    */

    // question 3
    affiche(entiers);
    }else{
        std::cerr << "le tableau ne contient aucun élément" << std::endl;
        return -1;
    }

    

    // question 4
    std::cout << "premier element " << entiers.front() << std::endl;
    std::cout << "dernier element " << entiers.back() << std::endl;

    // utilise la fonction pour ajouter en fin le double de chaque entier
    ajoute_double(entiers);

    affiche(entiers);

    // en c++ on itère pas sur un vecteur que l'on modifie directement (question 5)
    return 0;
}