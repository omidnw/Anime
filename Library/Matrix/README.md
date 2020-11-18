# Matrix Calculator

This is a 2D matrix calculator wirtten in C for AnimeLIB.
Have fun using this

Usage
--------
```c
float **multiply(float **first, float **second);

float **resualt = multiply(m1,m2);
```

Uses float array as input and returns float array as matrix multiplication resualt.

```c
float **add(float **first, float **second);

float **resualt = add(m1,m2);
```

Uses float array as input and returns float array as matrix addition resualt.

```c
float **CreateArray(int row, int col);

float **m1 = CreateArray(2,2);
```

Uses int as input for array row and column length and returns float array as a 2D array.

Example
---------
here is the full code

**TEST DATA**
```
    M1
	╔      ╗
	║ 1  2 ║ 
	║ 3  5 ║
	╚      ╝

	M2
	╔      ╗
	║ 1  4 ║ 
	║ 1  3 ║
	╚      ╝

	Result Multiplication
	╔       ╗
	║ 3  10 ║ » (1x1 + 2x1) | (1x4 + 2x3)
	║ 8  27 ║ » (3x1 + 5x1) | (3x4 + 5x3)
	╚       ╝

	Result Addition
	╔      ╗
	║ 2  6 ║ » (1+1) | (2+4)
	║ 4  8 ║ » (3+1) | (5+3)
	╚      ╝

	Output

	MULT         | ADD        MULT      | ADD
	3.000000     | 2.000000   10.000000 | 6.000000
	8.000000     | 4.000000   27.000000 | 8.000000
	-------------------------------------------
	(1x1 + 2x1) | (1+1)		(1x4 + 2x3) | (2+4)
	(3x1 + 5x1) | (3+1)		(3x4 + 5x3) | (5+3)	

```

```c
#include <stdio.h>
#include "Matrix.h"

int main(){
	float **m1 = createArray(2,2);	
	float **m2 = createArray(2,2);

	m1[0][0] = 1;
	m1[0][1] = 2;
	m1[1][0] = 3;
	m1[1][1] = 5;

	m2[0][0] = 1;
	m2[0][1] = 4;
	m2[1][0] = 1;
	m2[1][1] = 3;

	float **res = multiply(m1,m2);
	float **pez = add(m1,m2);

	printf("\nMULT\t |\t ADD\t\tMULT\t  |\t ADD\n");
	for(int i=0;i<2;++i){
		for(int j=0;j<2;++j)
			printf("%f |\t %f\t",res[i][j],pez[i][j]);
		printf("\n");
	}

	return 0;
}
```

Contributor: [Aria Kh.](https://github.com/ariakh55)
