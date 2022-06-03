#include "Dymocks.h"

int Dymocks::nextNumStores = 0;

Dymocks::Dymocks(){}
Dymocks::Dymocks(bool o):BooksStore("Dymocks", "", 1000){
	storeID = nextNumStores;
	nextNumStores++;
	isOnline = o;

}

int Dymocks::get_StoreID(){

	return storeID;
}

int Dymocks::get_nextNumScores(){

	return nextNumStores;
}

bool Dymocks::get_isOnline(){
	return isOnline;
}

void Dymocks::set_storeID(int x){
	storeID = x;
}

void Dymocks::set_nextNumScores(int x){

	nextNumStores = x;

}

bool Dymocks::set_isOnline(bool x){
	isOnline = x;
}


int Dymocks::get_onlineTax(){
	if(isOnline == true){
		return 500;
	}else{
		return 0;
	}
}