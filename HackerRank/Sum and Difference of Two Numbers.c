/*
Task

Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:

1. Declare 4 variables: two of type int and two of type float.
2. Read 2 lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your 4 variables.
3. Use the + and - operator to perform the following operations:
    - Print the sum and difference of two int variable on a new line.
    - Print the sum and difference of two float variable rounded to one decimal place on a new line.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int int1, int2;
    float float1, float2;
	  scanf("%i %i\n%f %f", &int1, &int2, &float1, &float2);
    
    printf("%i %i\n%.1f %.1f", int1+int2, int1-int2, float1+float2, float1-float2);
    
    return 0;
}
