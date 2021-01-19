#include <stdio.h>
#include <ctype.h>
int checkNum(char num[]);

int main(){
  char n[8];

  printf("Enter number: ");
  scanf("%s", n);

  if (checkNum(n) == 0)
    printf("Invalid number!\n");
  else
    printf("Valid number\n");
  return 0;
}

int checkNum(char num[]){
  int i;
  for (i = 0; i < 3; i++)
    if (!isalpha(num[i]))
      return 0;

  for (i = 3; i < 7; i++)
    if(!isdigit(num[i]))
      return 0;

  return 1; 
}

