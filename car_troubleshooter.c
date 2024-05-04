#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int batt_terminals();
int batt_status();
int crank_status();
int injector_status();

int main() {
  int response;

  // Welcome and instructions
  printf("Car Issue Troubleshooter\n");
  printf("Please enter only y or n to answer questions.\n\n");

  // First Question
  printf("Is the car silent when you turn the key?\n");
  response = getchar();
  response = tolower(response);
  while ((getchar()) != '\n')
    ;

  if (response == 'y') {
    batt_terminals();
  } else if (response == 'n') {
    batt_status();
  } else {
    printf("Incorrect input. Try again.\n");
    return 1;
  }

  // Final Output
  printf("Thank you for using this expert system.\n");
  return 0;
}

/* This function checks the battery terminals' 'condition  */
int batt_terminals() {
  int response;

  printf("Are the battery terminals corroded?\n");
  response = getchar();
  response = tolower(response);
  while ((getchar()) != '\n')
    ;

  if (response == 'y') {
    printf("Clean terminals and try starting again.\n");
    return 0;
  } else if (response == 'n') {
    printf("Replace cables and try again.\n");
    return 0;
  } else {
    printf("Incorrect input. Try again.\n");
    return 1;
  }
}

/* This function checks the status of the battery */
int batt_status() {
  int response;
  printf("Does the car make a clicking sound?\n");
  response = getchar();
  response = tolower(response);
  while ((getchar()) != '\n')
    ;
  if (response == 'y') {
    printf("Replace the battery.\n");
    return 0;
  } else if (response == 'n') {
    crank_status();
  }
  return 0;
}

/* This function checks whether the car is cranking */
int crank_status() {
  int response;
  printf("Does the car crank but fail to start?\n");
  response = getchar();
  response = tolower(response);
  while ((getchar()) != '\n')
    ;
  if (response == 'y') {
    printf("Check the spark plug connections.\n");
    return 0;
  } else if (response == 'n') {
    printf("Does the engine start and then die?\n");
    response = getchar();
    response = tolower(response);
    while ((getchar()) != '\n')
      ;
    if (response == 'y') {
      injector_status();
    } else if (response == 'n') {
      printf("Get it in for service.\n");
    } else {
      printf("Incorrect input. Try again.\n");
    }
  }
  return 0;
}

/* This function checks whether or not the car is fuel injected */
int injector_status() {
  int response;
  printf("Does your car have fuel injection?\n");
  response = getchar();
  response = tolower(response);
  while ((getchar()) != '\n')
    ;
  if (response == 'y') {
    printf("Get it in for service.\n");
    return 0;
  } else if (response == 'n') {
    printf("Check to ensure the choke is opening and closing.\n");
    return 0;
  } else {
    printf("Incorrect input. Try again.\n");
  }
  return 0;
}
