#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void run(){
  system("rar2john.exe target.rar > hash.txt");
  system("john.exe hash.txt target.rar > password.txt");
}
int main()
{
   char a[10];
   printf("Are you sure the rar file named target.rar?(y/n)\n");
   scanf("%c", &a[0]);
   if(a[0]=='y'){
     run();
   }
   else if(a[0]=='n'){
     abort();
   }
   else{
     printf("error");
     abort();
   }
}
