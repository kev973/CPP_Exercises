#include "Card.hpp"  
#include <iostream>

Card::Card(unsigned int value, const std::string& color)
    : _value {value}
    , _color {color}
{ }

void Card::print() const{
    std::string val;
    switch(_value){
        case 11 : std::cout << "Valet de " << _color;
            break;
        case 12 : std::cout << "Dame de " << _color;
            break;
        case 13 : std::cout << "Roi de " << _color;
            break;
        case 14 : std::cout << "As de " << _color;
            break;  
        default :std::cout << _value << " de " << _color;
            break;
    }
    
}

bool Card::operator==(const Card& other) const{   
    return _value == other._value;
}

bool Card::operator<(const Card& other) const{
    return _value < other._value;
}
