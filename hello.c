

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
#include <math.h>
char variablechosen[30];// holds user input
char *getUserInput(){
printf("Please Enter the variable type you would like to determine its range: Accepted types are( char, int, float, double, short, long)");//Get the variable type that the user wants to determine
fgets(variablechosen, sizeof(variablechosen), stdin); // saves user input to its variable
variablechosen[strcspn(variablechosen, "\n")] = 0;// removing the  line left by the user.
printf("You chose to find the size of %s \n", variablechosen);
return variablechosen;
}

int main() {
int testnumber= 0;
int previousvalue = 0;
int currentvalue= 0;
for(int i =0; i <=  sizeof(int) * 8 ; i++)// keeps track of the bit that we are currently in
{
if(previousvalue<= currentvalue)// checking if the bit that was added has exceeded the no of bits allocated for the variable
{
  previousvalue = currentvalue;
  printf("addding the %d bit \n", i);
  currentvalue += pow(2, i);// adds a value that will take one more bit to be stored 
  printf("the current value is %d", currentvalue);
}
else {
  printf("The maximum value is %d", currentvalue -1 );
}


}};


