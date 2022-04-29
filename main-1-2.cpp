#include <iostream>
#include "Unit.h"
#include "Apartment.h"

int main(){

	Apartment* Oxygen = new Apartment(5);
	Unit* stress_ball = new Unit(1,10.5,100);

	std::cout<< Oxygen->get_capacity() << std::endl;
	std::cout<< Oxygen->get_current_number_of_units()<<std::endl;

	Unit * another_array = Oxygen->get_contents();
	std::cout << Oxygen->add_unit(*stress_ball) << std::endl;

	delete Oxygen;
	delete stress_ball;
	delete[] another_array;
	




}