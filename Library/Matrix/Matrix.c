#include "Matrix.h"
#include <stdio.h>

// gets lenght row and column : 
#define LEN(arr) (sizeof (arr) / sizeof (arr[0])) //gets column size

int Len(float **arr){ //gets row size
    int len=0;
    while (*arr)
    {
        len++;
        arr++;
    }
    return len; // return len-1 just working for strcmp.
}
// section end.

float **createArray(int row, int col){
	float* _ZERO = calloc(row*col, sizeof(float));
	float** _ARR = malloc(col*sizeof(float*));
	for(int i=0;i<col;++i)
		_ARR[i] = _ZERO + i*row;
	return _ARR;
}

float **add(float **_first, float **_second){
	assert(Len(_first) == Len(_second) && LEN(_first[0]) == LEN(_second[0]));

	int rows = Len(_first);
	int cols = LEN(_first[0]);
	float **res = createArray(rows,cols);
	for(int i=0; i<rows; ++i)
		for(int j=0; j<cols; ++j)
			res[i][j] = _first[i][j] + _second[i][j];
	return res;
}

float destory(float **arr){
	free(*arr);
	free(arr);
}

float **multiply(float **_first, float **_second){
	int rows = Len(_first); //gets rows for the resualt matrix
	int cols = LEN(_second[0]); //gets columns for the resualt matrix
	int srow = Len(_second); //gets first matrix columns length

	// printf("%d\t%d\t%d\n",rows,srow,cols);

	float **res = createArray(rows,cols);
	float sum = 0;

	for(int i=0; i<rows; ++i){
		for(int j=0; j<cols; ++j){
			for(int k=0; k<srow; ++k){
				sum += _first[i][k] * _second[k][j];
			}
			res[i][j] = sum;
			sum = 0;
		}
	}
	return res;
}
