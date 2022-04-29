
#include "Unit.h"

Unit::Unit(){
	bedroom = 0;
	area = 0;
	value = 0;
}  

Unit::Unit(int bed_room, double _area, int _value){
	if(bed_room <= 0){
		bedroom = 0;
	}else{
		bedroom = bed_room;
	}

	if(_area <= 0.0){
		area = 0;
	}else{
		area = _area;
	}

	if(_value <= 0){
		value = 0;
	}else{
		value = _value;
	}
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
