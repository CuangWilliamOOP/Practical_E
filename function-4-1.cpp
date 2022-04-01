#include <iostream>

int sum_sides(int **vals,int n_rows, int n_cols){
	int sum1 = 0;
	int sum2 = 0;

	for (int i = 0; i < n_rows; i++ ){
		sum1 += vals[i][1];
	}

	for (int i = 0; i < n_rows; i++ ){
		sum2 += vals[i][n_cols];
		
	}

	int total_sum = sum1+ sum2;
	return total_sum;

}