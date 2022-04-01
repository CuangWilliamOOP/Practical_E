#include <iostream>

int sum_sides(int **vals,int num_rows, int num_cols){
	int sum1 = 0;
	int sum2 = 0;
	for (int i = 0; i < num_rows; i++ ){
		sum1 += vals[i][1];
		sum2 += vals[i][num_cols];
		
	}

	return sum1+ sum2;

}