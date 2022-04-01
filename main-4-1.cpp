#include <iostream>

extern int sum_sides(int **vals,int n_rows, int n_cols);
int main(){
 	int row1[]={10,15,9};
    int row2[]={11,5,3};
    int row3[]={8,56,1};
    int *vals[]={row1,row2,row3};
    int n_cols=3;
    int n_rows=3;

std::cout <<  sum_sides(vals,n_rows,n_cols);

}