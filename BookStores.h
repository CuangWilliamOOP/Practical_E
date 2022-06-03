#ifndef BOOKSTORES_H
#define BOOKSTORES_H
#include "Dymocks.h"
#include "BookStore.h"
#include "BarnesNoble.h"
#include "StoreChain.h"

class BookStores{


	static void sort(Dymocks **store, int n);    // sorts the array of n Dymocks in ascending 
                                              // order base on their storeID
};
#endif