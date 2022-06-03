#include "StoreChain.h"


StoreChain::StoreChain(){


	list_of_books = new BookStore*[5];

	list_of_books[0] = new BarnesNoble("Springfield");
	list_of_books[0] = new Dymocks(true);
	list_of_books[0] = new Dymocks(false);
	list_of_books[0] = new Dymocks(true);
	list_of_books[0] = new BarnesNoble("Centerville");
	
}


BookStore** StoreChain::get_bookStores(){

	return list_of_books;
}

