#ifndef BARNESNOBLE_h
#define BARNESNOBLE_h
#include "Dymocks.h"
class BarnesNoble:public Dymocks{

public:
	BarnesNoble();          // inherit from base class default constructor    
	BarnesNoble(std::string); // set name n  
	                       // should call the corresponding constructor from the parent class
	                       // with the online parameter being false
	int numSoldBooks;   // attribute for numSoldBooks, initialised to 0

	void soldBook();   // increments numSoldBooks
	int get_numSoldBooks(); // returns the books sold







};

#endif