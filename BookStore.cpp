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

void BookStore:: set_address(std::string name){

	address = name;
}

void BookStore::set_name(std::string name){
	this -> name = name;
}

std::string BookStore::get_address(){
	return address;
}

std::string BookStore::get_name(){
	return name;
}