#include "BarnesNoble.h"


BarnesNoble::BarnesNoble(){}


BarnesNoble::BarnesNoble(std::string x): Dymocks(0){

	name = x;
	numSoldBooks = 0;

}

int BarnesNoble::get_numSoldBooks(){
	return numSoldBooks;
}

void BarnesNoble::soldBook(){
	numSoldBooks++;
}