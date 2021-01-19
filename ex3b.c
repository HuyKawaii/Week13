#include <stdio.h>

void cpystr(char a[], char b[]){
  int i = 0;
  while (b[i] != '\0'){
    a[i] = b[i];
    i++;
  }
  a[i] = '\0';
}

int main(){

  char s1[10], s2[] = "Kurare... Neko Punchy !!!";
  cpystr(s1, s2);
  puts(s1);
  return 0;
}
