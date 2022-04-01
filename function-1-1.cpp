#include <iostream>
#include <string>

std::string* create_strings(int num_vals){

	std::string* value;
	value = new std::string[num_vals];
	for(int i = 0; i < num_vals; i++){
		value[i] = std::to_string(i);

	}
return value;
}

void display_array(std::string *vals, int num_vals){

	for(int i = 0; i < num_vals; i++){
		std::cout << vals[i] << " ";
	}

		std::cout << std::endl;
}