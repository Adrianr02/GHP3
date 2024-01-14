/* This program will ask the user to enter two integers where one
is larger than the other and outputs pythagorean triples.

Dictinary of variables:

Local Variables to main:
m - first user input
n - second user input
ret - return value from calc_side1
ter - return value from calc_side2
etr - return value from Hypotenuse

Local Variables to calc_side1:
x - passing first user input from m to x
y - passing second user input from n to y
side1 - finds the difference bewteen the two squared integers


Local Variables to calc_side2:
a - passing first user input from m to a
b - passing first user input from n to b
side2 - multiplies 2 with the two integers



Local Variables to Hypotenuse:
c - passing first user input from m to c
d - passing first user input from n to d
hypotenuse - adds the two squared integers together


Input:
	Two integer inputs from user

Output:
	Side1,Side2,Hypotenuse


Process:
	The two intergers will be put through three
functions. Where function 1(calc_side1) finds the difference
between the two squared integers. Then function 2(calc_side2)
multiplies 2 with the two integers.Lastly function 3(hypotenuse)
adds the squared values of the two integers together.


Written by:Adrian Ramdhanee
Target:  gcc
*/



#include <stdio.h>
#include <math.h>

int calc_side1(int x, int y);
int calc_side2(int a, int b);
int hypotenuse(int c, int d);

int main(void){

//local variables in main
int m , n = 0;
int ret = 0;
int ter = 0;
int etr = 0;

//Asks user for two integer outputs where the first is greater than the second
printf("Enter two integers where the first is greater than the second integer.\n\n");
scanf("%d", &m);
scanf("%d", &n);



//return value from side1
ret = calc_side1(m, n);
//return value from side2
ter = calc_side2(m, n);
//return value from hypotenuse
etr = hypotenuse(m, n);

//displays users inputs m and n
printf("m = %d n = %d\n", m , n);
//displays pythagorean triple
printf("side1 = %d, side2 = %d, hypotenuse = %d", ret, ter, etr );

}

// finds the difference between the two squared integers.
int calc_side1(int x, int y){

double side1;


side1 = pow(x, 2) - pow(y, 2);



return side1;


}

//multiplies 2 with the two integers
int calc_side2(int a, int b){

double side2;

side2 = 2*a*b;



return side2;

}

//adds the squared values of the two integers together
int hypotenuse(int c, int d){

double hyp;

hyp = pow(c, 2) + pow(d, 2);

return hyp;

}
