#ifndef STORECHAIN_H
#define STORECHAIN_H
#include "BookStore.h"
#include "Dymocks.h"
#include "BarnesNoble.h"

class StoreChain{

public:
	BookStore** list_of_books;
	StoreChain();
	BookStore **get_bookStores();

	~StoreChain();



};
#endif