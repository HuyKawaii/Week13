#include <stdio.h>
#include <string.h>

int countSpace(char s[]);

int main(){
  char txt[99];
  printf("Enter a line of text(no more than 99 characters): ");
  gets(txt);
  puts(txt);
  printf("Number of space: %d\n", countSpace(txt)); 
  return 0;
}

int countSpace(char s[]){
  int i, count = 0;
  for (i = 0; s[i] != '\0'; i++)
    if (s[i] == ' ')
      count ++;
  return count;
}
