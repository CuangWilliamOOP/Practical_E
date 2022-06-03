#ifndef BOOKSTORE_h
#define BOOKSTORE_h
#include <iostream>

class BookStore{

protected:
	Bookstore();
 	BookStore(std::string,std::string,int);  // creates a BookStore name n, address a, and number of books in the store b
public:
	std::string name;                // the book store name
	std::string address;             // the book store address
	int numBook; 
	void set_numBook(int);
	void set_address(std::string);
	void set_name(std::string);
	std::string get_name();
	std::string get_address();
	int get_numBook();

	virtual float get_onlineTax() = 0;



};

#endif