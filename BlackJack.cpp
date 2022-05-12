#include "Blackjack.h"
#include <vector>
#include <iostream>

BlackJack::BlackJack(){
	for(int i = 0; i < 2; i++){
		player_cards[i] = (rand() % 10)+1;
		dealer_cards[i] = (rand() % 10)+1;
	}
}
int BlackJack::place_bet(int bet){
	*playerChip = *playerChip - bet;
}

std::vector <int> BlackJack::stand(){
	return player_cards;
}

int BlackJack::hit(){
	player_cards.push_back((rand() % 10)+1);
}


void BlackJack::showPlayer(){
	for(int i = 0; i < player_cards.size(); i++){
		std::cout << "[" << player_cards[i] << " "<< "]" << std::endl;
	}
}

void BlackJack::showDealer(){
	
	std::cout << "[" << player_cards[0] << " "<< "*"<< "]" << std::endl;
	
}
