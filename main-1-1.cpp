#include <iostream>
#include "Unit.h"

int main(){

	Unit a(1,10.5,100);
	std::cout<< a.get_bedrooms() <<std::endl;
	std::cout<< a.get_value() <<std::endl;
	std::cout<< a.get_area() <<std::endl;

}