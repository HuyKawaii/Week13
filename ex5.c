#include <stdio.h>
#include <string.h>

int strend(char s[], char t[]){
  int sl = strlen(s), tl = strlen(t);
  if (sl < tl)
    return 0;
  int i = 1;
  while (s[sl-i] == t[tl-i])
    i++;
  if (i > tl)
    return 1;
  else return 0;
}

int main(){

  char s[90], t[99];
  printf("Enter a string: ");
  gets(s);

  printf("Enter the string need to be found: ");
  gets(t);
  if (strend(s,t) == 0)
    printf("The string (%s) does not have (%s) at the end\n", s, t);
  else  printf("The string (%s) have (%s) at the end\n", s, t);

 return 0;

}
