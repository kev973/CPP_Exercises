#include <string>
#include <vector>
#include "Card.hpp"

class Player
    {
        public :
            Player(const std::string& name);

        private :
            std::string _name;
            std::vector<Card> _cards;
            unsigned int _score = 0u;
    };