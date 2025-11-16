//FADRIQUELA, JOSHUA P. DIT 1-2
#include <stdio.h>

int main() {

int one = 15, two = 5; //Declaring variables
float three = 10.8, four = 2.2;

printf("Declared Variables:\n");
printf("one = %d, two = %d, three = %.2f, four = %.2f",one,two,three,four);

//FADRIQUELA, JOSHUA P. DIT 1-2
int add = one + two;
int sub = one - two;
int mul = one * two;
float div = (float) three / four;
//FADRIQUELA, JOSHUA P. DIT 1-2
printf("\nUsing Operators:\n"); //arithmetic operators
printf("15+5 = %d\n", add);
printf("15-5 = %d\n", sub);
printf("15x5 = %d\n", mul);
printf("10.8 / 2.2 = %.2f\n\n", div);
//FADRIQUELA, JOSHUA P. DIT 1-2
printf("Assignment Operators:\n"); //assignment operators
one += 5;  // same as one = one + 5
two *= 2;  // same as two = two * 2
printf("After += and *= : one = %d, two = %d\n\n", one, two);
//FADRIQUELA, JOSHUA P. DIT 1-2
printf("Logical Operators:\n"); //logical operators
int and = (one > two) && (three < four);
int or = (one > two) || (three < four);
int not = !(one == two);
printf("(one > two) && (three < four) = %d\n", and);
printf("(one > two) || (three < four) = %d\n", or);
printf("!(one == two) = %d\n", not);

//FADRIQUELA, JOSHUA P. DIT 1-2
// Using Loops
int i;
printf("\nUsing Loops:\n");
printf("While loop: Print numbers from 1 to 10\n");
i = 1;
while (i <= 10) {
printf("%d ", i);
i++;
}
printf("\nFor loop: Print even numbers from 2 to 20\n");
for (i = 2; i <= 20; i += 2) {
printf("%d ", i);
}
printf("\nDo-While loop: Print numbers from 1 to 5\n");
i = 1;
do {
printf("%d ", i);
i++;
} while (i <= 5);
printf("\n\n");
//FADRIQUELA, JOSHUA P. DIT 1-2
// Using if-else Statements
int num;
printf("Enter a number to check if it's even or odd: ");
scanf("%d", &num);
if (num % 2 == 0) {
printf("The number %d is EVEN.\n", num);
} else {
printf("The number %d is ODD.\n", num);
}

printf("LAB B update test.\n");
    return 0;
}