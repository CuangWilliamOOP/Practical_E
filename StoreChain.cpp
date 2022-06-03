#include "StoreChain.h"


StoreChain::StoreChain(){


	list_of_books = new BookStore*[5];

	list_of_books[0] = new BarnesNoble("Springfield");
	list_of_books[1] = new Dymocks(true);
	list_of_books[2] = new Dymocks(false);
	list_of_books[3] = new Dymocks(true);
	list_of_books[4] = new BarnesNoble("Centerville");
	
}


BookStore** StoreChain::get_bookStores(){

	return list_of_books;
}

StoreChain::~StoreChain(){

	for(int i = 0; i < 5; i++){
		delete list_of_books[i];
	}

	delete [] list_of_books;
}

