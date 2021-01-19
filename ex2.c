#include <stdio.h>

void replace(char s[], char a, char b){
  int i;
  for (i = 0; s[i] != '\0'; i++)
    if (s[i] == a)
      s[i] = b;
}

int main(){
  char s[99], a, b;

  printf("Enter a string: ");
  scanf("%s", s);

  printf("Enter the character to be replaced: ");
  getchar();
  scanf("%c", &a);

  printf("That character is replaced by: ");
  getchar();
  scanf("%c", &b);

  replace(s, a, b);
  puts(s);

  return 0;
}

