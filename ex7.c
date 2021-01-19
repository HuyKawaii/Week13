#include <stdio.h>

int cmp(char a, char s[]){
  int i = 0;
  while (s[i] != '\0' && s[i] != a)
    i++;
  if (s[i] == '\0')
    return 0;
  else return 1;
}

int main(){
  int i = 0;
  char s[30], puc[] = ",.;:!?";
  gets(s);
  while (s[i] != '\0'){
    if (cmp (s[i], puc) == 1)
      s[i] = ' ';
    i++;
  }
  puts(s);
  return 0;
}
