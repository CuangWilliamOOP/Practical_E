#include "BookStore.h"



BookStore::BookStore(std::string name, std::string address, int numbBook){
	this -> name = name;
	this -> address = address;
	this -> numBook = numBook;
}


void BookStore::set_numBook(int book){

	numBook = book;
}


int BookStore::get_numBook(){
	return numBook;
}