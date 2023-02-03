#include <stdio.h>
int main(){
int myNum[5] = {5,8,7,3,6};
int i;
for (i=0; i<5; i++){
printf("%d\n",myNum[i]);
printf("%p\n",&myNum[i]);
}
return 0;
}
