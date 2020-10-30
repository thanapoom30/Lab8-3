#include <stdio.h>
#include <string.h>
int main(void) {
  int l=0;
  int error=0;
  char pass[10];
  char expass[10];
  while(1){
  printf("Enter new password (max 10) : ");
  gets(pass);
  while(pass[l] != '\0'){l++;}
  if(l>11){
  printf("Password not correct\n");
  l=0;continue;
  }
  while(1){
    printf(" Enter password : ");
    gets(expass);
    if(strcmp(pass,expass)==0){
      printf("Password correct\n");
      break;
    }
    else {
      printf("Password not correct\n");
      error +=1;
      if(error==3){
        break;
      }
    }
    }if(error==3){
      printf("Close Program");
      error=0;
        break;
    }
  }
  return 0;
}