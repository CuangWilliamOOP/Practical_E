#include <iostream>
#include <string>

extern std::string* create_strings(int num_vals);
extern void display_array(std::string *vals, int num_vals);

int main(){

int num_vals = 3;
std::string *vals = create_strings(num_vals);
display_array(vals, num_vals);

}