#include "Player.hpp"
#include <random>
#include <algorithm>
#include <iostream>

Player::Player(const std::string&  name)
    : _name {name}
    {
        
    }

void Player::deal_all_cards(Player& p1, Player& p2){
    std::vector<Card> all_cards;
    for(auto i = 7u; i <= 14u; i++){
        all_cards.emplace_back(Card{i, "Pique"});
        all_cards.emplace_back(Card{i, "Trèfle"});
        all_cards.emplace_back(Card{i, "Cœur"});
        all_cards.emplace_back(Card{i, "Carreau"});
    }

    std::random_device rd; 
    std::shuffle(all_cards.begin(), all_cards.end(), std::default_random_engine(rd()));

    for(auto i = 0; i < 16; i++){
        p1._cards.emplace_back(all_cards.at(i));
    }

    for(auto i = 16; i < 32; i++){
        p2._cards.emplace_back(all_cards.at(i));
    }
}

Card Player::operator[](int index) const{
    return _cards.at(index);
}

bool Player::play(Player& p1, Player& p2){
    std::cout << "Tour n°" << turn_number << std::endl;
    auto carteP1 = &p1._cards.back();
    auto carteP2 = &p2._cards.back();
    std::cout << "Carte de joueur n°1 " << carteP1 << std::endl;
    std::cout << "Carte de joueur n°2 " << carteP2 << std::endl;

    int winner = 0;
    return true;
}