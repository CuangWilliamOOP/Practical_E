#include <iostream>
#include "BarnesNoble.h"
#include "Dymocks.h"
#include "BookStore.h"
#include "StoreChain.h"


int main(){

	StoreChain* a = new StoreChain;



	BookStore** b = a ->get_bookStores(); 

	for(int i = 0; i < 5; i++){
		std::cout << b[i] -> get_numBook() << std::endl;
	}
	return 0;
}