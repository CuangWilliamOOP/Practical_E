#ifndef DYMOCKS_H
#define DYMOCKS_H


class Dymocks:public BookStore{
private:
	static int nextNumStores;

public:
	Dymocks()            // Uses the default constructor of parent
	Dymocks(bool)      // sets isOnline attribute with o
                     // calls the parent class constructor with name=="Dymocks" and numBook==1000 and
                     // and address equal to the empty string
	int storeID;          // unique store ID 
	bool isOnline;       // class attribute    
	int get_StoreID();
	int get_nextNumScores();
	bool get_isOnline();
	void set_storeID();
	void set_nextNumScores();
	void set_isOnline();


	int get_onlineTax() override;




};
#endif