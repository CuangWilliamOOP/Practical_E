#include <iostream>
#include "Dymocks.h"
#include "BookStore.h"
#include "Dymocks.h"

int main(){

	Dymocks a(1);

	std::cout << a.get_storeID();
	return 0;
}