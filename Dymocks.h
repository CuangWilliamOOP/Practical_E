#ifndef DYMOCKS_H
#define DYMOCKS_H
#include "BookStore.h"

class Dymocks:public BookStore{
private:
	static int nextNumStores;

public:
	Dymocks();            // Uses the default constructor of parent
	Dymocks(bool);      // sets isOnline attribute with o
                     // calls the parent class constructor with name=="Dymocks" and numBook==1000 and
                     // and address equal to the empty string
	int storeID;          // unique store ID 
	bool isOnline;       // class attribute    
	int get_StoreID();
	int get_nextNumScores();
	bool get_isOnline();
	void set_storeID(int);
	void set_nextNumScores(int);
	void set_isOnline(bool);


	float get_onlineTax() override;


};
#endif