#ifndef UNIT_H
#define UNIT_H
class Unit{
	int bedroom;
	int value;
	double area;
public:
	Unit();          // a default constructor 
	Unit(int, double, int); // a constructor that takes: the number of bedrooms,
                        //number of square meters, and value in dollars as parameters

	int get_bedrooms();  // returns the number of bedrooms for the unit
	int get_value();    // returns the value in dollars of the Unit
	double get_area();    // returns the number of square meters in the unit


};

#endif