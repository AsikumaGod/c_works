#include <stdio.h>
int main(){
int myNum[5] = {32,4,23,66,44};
printf("%p\n",myNum);
printf("%p\n",&myNum[0]);
return 0;
}
