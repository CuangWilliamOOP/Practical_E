#include "Casino.h"
#include <iostream>
#include <vector>
#include <ctime>

Casino::Casino(){
	std::cout << "Welcome to OOP casino" << std::endl;
}

int Casino::get_lucky_number(){
	
	lucky_wheel = {300, 350, 500, 550, 700, 750, 800, 850, 950, 1000};
	*playerChip = lucky_wheel[(rand() % 10)];
	return *playerChip;

}

void Casino::game_list(){

	std::cout << "we currently have BlackJack and Russian Roulette available"<< std::endl;
}
void greetDealer(){
	std::cout << "What's good homie";
}
