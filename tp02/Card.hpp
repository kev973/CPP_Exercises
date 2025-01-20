#include <string>

class Card
{ 
    public:
        Card(unsigned int value, const std::string& color);

        bool operator==(const Card& other) const;
        bool operator<(const Card& other) const;

        void print() const;

    private:
        unsigned int _value;
        std::string _color;
};