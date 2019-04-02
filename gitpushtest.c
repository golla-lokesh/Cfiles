
#include<stdio.h>

void main(){
/*git clone and push test*/
//char txt[]="Ola git hub";
char txt[9];
gets(&txt[0]);
printf("\t%c%c%c\n\t\t",txt[0],txt[1]-32,txt[2]-32);
puts(&txt[4]);
}
