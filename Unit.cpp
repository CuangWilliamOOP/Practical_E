#include "Unit.h"

using namespace std;

Unit::Unit() {
	bedrooms=0;
	value=0;
	area=0;
}


Unit::Unit(int br, double ar, int val) {
	bedrooms= br;
	area= ar;
	value= val;
}

int Unit::get_bedrooms() {
	return bedrooms;
}

double Unit::get_area() {	
	return area;
}

int Unit::get_value() {
	return value;
}

