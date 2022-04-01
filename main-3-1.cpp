#include <iostream>
extern int count_negatives(int *vals,int len);
extern int* collate_negatives(int *vals,int len, int num_negative);

int main(){
	int len = 5;
	int vals[len] = {-2,-7,5,6,-8}; 
	int num_negative = count_negatives(vals, len);

	int * collate = collate_negatives(vals,len,num_negative);

	for(int i = 0; i < num_negative; i++){
		std::cout << collate[i] << " ";
	}





}