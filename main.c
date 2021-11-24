/*
  This is a program Developed by Jacqueline McBeth so 
  please don't steal, although I've only made this to have 
  an example to use in college work.
*/
#include <stdio.h>

//This is a function that asks the user to enter two numbers, it then divides them both and prints the resault on screen.
void defDivide(){
  int num1, num2, num3;
  printf("Please enter a number\n");
  scanf("%d", &num1);
  printf("Please enter a second number\n");
  scanf("%d", &num2);
  num3 = (num1 / num2);
  printf("You entered the numbers %d and %d\n", num1, num2);
  printf("Your answer is %d", num3);
}

//This is a function that  asks the user to enter two nummbers, it then multiplies both numbers together and prints out the answer on screen.
void defTimes(){
  int num1, num2, num3;
  printf("Please enter a number\n");
  scanf("%d", &num1);
  printf("Please enter a second number\n");
  scanf("%d", &num2);
  num3 = (num1 * num2);
  printf("You entered the numbers %d and %d\n", num1, num2);
  printf("Your answer is %d", num3);
}


//This is a function where it asks the user to enter two numbers, it then takes both numbers and takes one away from the other and then prints it out.
void defTake(){
  int num1, num2, num3;
  printf("Please enter a number\n");
  scanf("%d", &num1);
  printf("Please enter a second number\n");
  scanf("%d", &num2);
  num3 = (num1 - num2);
  printf("You entered the numbers %d and %d\n", num1, num2);
  printf("Your answer is %d", num3);
}

//This is a function that asks the user to enter two numbers, after it then adds both numbers together and prints it out for the user.
void defAdd(){
  int num1, num2, num3;
  printf("Please enter a number\n");
  scanf("%d", &num1);
  printf("Please enter a second number\n");
  scanf("%d", &num2);
  num3 = (num1 + num2);
  printf("You entered the numbers %d and %d\n", num1, num2);
  printf("Your answer is %d", num3);
}
//This is the main which is where all the code is executed from.
int main(void) {
  //This is a while true loop, which is a loop that doesn't end.
  while(1){
  //This creates a variable to store the option the user chooses after the menu is printed.
  int switchChoice;
  printf("Please select an option\n 1. addition\n 2. subtraction\n 3. multiplication\n 4. divide\n");
  scanf("%d", &switchChoice);

  //This is a switch statment that runs the function that is associated with the choice the user entered.
  switch (switchChoice){
    case 1:
    printf("You have selected addition\n");
    defAdd();
    break;

    case 2:
    printf("You have selected subtraction\n");
    defTake();
    break;

    case 3:
    printf("You have selected multiplication\n");
    defTimes();
    break;

    case 4:
    printf("You have selected division\n");
    defDivide();
    break;

    default:
    printf("Please select a valid answer\n");
  }
  }
}