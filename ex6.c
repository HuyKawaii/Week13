#include <stdio.h>

int search(char a[][30], char b[]){
  int i, j;
  for (i = 0; i < 5; i++){
    j = 0;
    while(a[i][j] == b[j])
      j++;
    if (j > 4)
      break;
  }

  if (i > 4)
    return -1;
  else return i;
}
int main(){

  char list[5][30] ={"TV127  31 Inch Television",
		     "CD057  CD player",
		     "TA877  Answering Machine",
		     "CS409  Car Stereo",
		     "PC655  Personal Computer"};
  char num[6];
  printf("Enter product number: ");
  scanf("%s", num);

  int j = search(list, num);
  if (j == -1)
    printf("Invalid product number\n");
  else
    for (int i = 7; list[j][i] != '\0'; i++)
      printf("%c", list[j][i]);
  printf("\n");
  return 0;
}
