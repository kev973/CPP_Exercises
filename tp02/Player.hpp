#include <string>
#include <vector>
#include "Card.hpp"

class Player
    {
        public :
            Player(const std::string& name);

            static void deal_all_cards(Player& p1, Player& p2);

            Card operator[](int index) const;

            static inline int turn_number;

            bool play(Player& p1, Player& p2);
            
        private :
            std::string _name;
            std::vector<Card> _cards;
            unsigned int _score = 0u;
    };