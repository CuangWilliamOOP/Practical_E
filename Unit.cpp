#include <iostream>
#include "Unit.h"

Unit::Unit(){

}  

Unit::Unit(int bed_room, double _area, int _value){
	bedroom = bed_room;
	area = _area;
	value = _value;
}

int Unit:: get_bedrooms(){
	return bedroom;

}  
int Unit::get_value(){
	return value;
}  
double Unit::get_area(){
	return area;
}
