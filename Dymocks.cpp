#include "Dymocks.h"

int Dymocks::nextNumStores = 0;

Dymocks::Dymocks(){}
Dymocks::Dymocks(bool o):BookStore("Dymocks", "", 1000){
	storeID = nextNumStores;
	nextNumStores++;
	isOnline = o;

}

int Dymocks::get_storeID(){

	return storeID;
}

int Dymocks::get_nextNumStores(){

	return nextNumStores;
}

bool Dymocks::get_isOnline(){
	return isOnline;
}

void Dymocks::set_storeID(int x){
	storeID = x;
}

void Dymocks::set_nextNumStores(int x){

	nextNumStores = x;

}

void Dymocks::set_isOnline(bool x){
	isOnline = x;
}


float Dymocks::get_onlineTax(){
	if(isOnline == true){
		return 500;
	}else{
		return 0;
	}
}