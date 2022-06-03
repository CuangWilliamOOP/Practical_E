#include <iostream>
#include "BarnesNoble.h"
#include "Dymocks.h"
#include "BookStore.h"


int main(){

	BarnesNoble a("what");

	std::cout << a.get_numSoldBooks();

	return 0;
}