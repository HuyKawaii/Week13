#include <stdio.h>

void cutName(char name[]){
  int i = 0;
  while (name[i] != ' ')
    i++;
  name[i] = '\0';
}

int main(){
  char s[99];
  printf("Enter your First name and Last name: ");
  gets(s);
  cutName(s);
  puts(s);
  return 0;
}
