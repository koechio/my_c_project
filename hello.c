

/*
Challenge
Write a program to determine the ranges of char, short, int, and long 
variables, both signed and unsigned, by printing appropriate values from standard headers 
and by direct computation. Harder if you compute them: determine the ranges of the various 
floating-point types.  

My Plan: Using the computation method.
To keep adding values until it overflows
Procedure
1. Get the variable type that the user wants to determine the maximum signed value and minimum unsigned value.
2. check if it is a valid data type.
3. Add a value to it, also subtract a value from it;
3. check if it has overflows.
4. Last value before overflow = becomes either minimum and maximum value to output to the user.
5.Output the value to the user.

*/
#include <stdio.h>
#include <string.h>
int main() {
printf("Please Enter the variable type you would like to determine its range: Accepted types are( char, int, float, double, short, long)");//Get the variable type that the user wants to determine
char variablechosen[30] = "hello"; // to holds user input
//scanf("%19s", variablechosen );
fgets(variablechosen, sizeof(variablechosen), stdin); // gets saves user input to its variable
variablechosen[strcspn(variablechosen, "\n")] = 0;// removing the  line left by the user.
printf("%s \n", variablechosen);
printf("You have reached the end of the function");

return 0;

}