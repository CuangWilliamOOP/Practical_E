#include "BookStore.h"


BookStore::BookStore(){}

BookStore::BookStore(std::string n, std::string a, int nu){
	name = n;
	address = address;
	numBook = nu;

}


void BookStore::set_numBook(int book){
	if(book < 0){
		std::cout << error;
	}else{
		numBook = book;
	}
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