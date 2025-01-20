#include <string>

class Card
{ 
    public:
        Card(unsigned int value, std::string color);

    private:
        unsigned int _value;
        std::string _color;
};