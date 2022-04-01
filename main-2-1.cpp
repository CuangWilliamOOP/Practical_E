#include <iostream>
extern std::string lookup_month(int day);


int main(){

	std::cout << lookup_month(3) << std::endl;
	std::cout << lookup_month(4) << std::endl;
}