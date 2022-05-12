#include <iostream>
#include "BlackJack.h"
#include <cstdlib>
#include "Casino.h"

int main(){

	Casino a;
    a.game_list();
    std::cout << "Congrats, you just won "<< a.get_lucky_number()<<std::endl;
    std::string response;

    if (response == "BlackJack"){
    	BlackJack a;
    }

}
