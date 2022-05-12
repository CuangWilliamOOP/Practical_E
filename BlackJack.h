#ifndef BLACKJACK_H
#define BLACKJACK_H
#include "Casino.h"
#include <vector>

class BlackJack:protected Casino{

	std::vector<int> dealer_cards;
public:

	BlackJack();
	int place_bet(int);
	int hit();
	std::vector<int> stand();
	int doubleDown();
	void showDealer();
	void showPlayer();



};	
#endif
