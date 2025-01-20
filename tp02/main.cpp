#include "Card.hpp"
#include <iostream>

int main(){
    //Card c1 { 8, "Pique" };
    //c1.print();

    const Card c1 { 8, "Pique" };
    c1.print();

    std::cout<<std::endl;

    const Card c2 { 8, "Pique" };
    std::cout << (c2 == c1) << std::endl; // -> 1
    const Card c3 { 10, "Carreau" };
    std::cout << (c2 == c3) << std::endl; // -> 0 

    std::cout << (c1 < c2) << std::endl; // -> 0
    std::cout << (c1 < c3) << std::endl; // -> 1
    std::cout << (c3 < c1) << std::endl; // -> 0

    const Card bonus { 14, "Carreau" };
    bonus.print();

    return 0;
}