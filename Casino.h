
#ifndef CASINO_H
#define CASINO_H
#include <vector>

class Casino
{
private:
	std::vector <int> lucky_wheel;

protected:
	std::vector<int> player_cards;
	int *playerChip = new int;
	int rouletteTable[20];

public:
	int get_lucky_number();
	Casino();
	void greetDealer();
	void game_list();

};
#endif
