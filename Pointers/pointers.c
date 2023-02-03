#include <stdio.h>
int main(){
int mynum = 43;
int* ptr = &mynum;
printf("%d\n",mynum);
printf("%p\n",&mynum);
printf("%p\n",ptr);
return 0;
}
