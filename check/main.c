/*
 * main.c
 *
 *  Created on: Apr 29, 2024
 *      Author: Prasana
 */
#include <stdio.h>


struct myStructure {
  int myNum;
  char myLetter;
}s1;

int main() {
  // Create a structure variable of myStructure called s1
  //struct myStructure s1;

  int Num = 10;
  char Letter = 'K';
  // Assign values to members of s1
//  s1.myNum;
//  s1.myLetter;

  s1.myNum = Num;
  s1.myLetter = Letter;

  // Print values
  printf("My number: %d\n", s1.myNum);
  printf("My letter: %c\n", s1.myLetter);

  return 0;
}
