#include "Unit.h"
#include "Apartment.h"

Apartment::Apartment(){
	_capacity = 10;
	unit_array = new Unit[_capacity];
	num_units = 0;
}
Apartment::Apartment(int capacity){
	_capacity = capacity; 
	unit_array = new Unit[_capacity];
	num_units = 0;

}
int Apartment:: get_capacity(){
	return _capacity;

}  


int Apartment:: get_current_number_of_units(){
	return num_units;

}

Unit * Apartment::get_contents(){
	return unit_array;
}



bool Apartment::add_unit(Unit unit){
	if (num_units < _capacity){
		unit_array[num_units] = unit;
		num_units += 1;
		return true;
	}else
	return false;
}


Apartment::~Apartment(){
	delete[] unit_array;
}