#include <stdio.h>
int main(){
int day = 5;
	if(day < 5){
		printf("today can be monday, tuesday, wednesday or thursday");
	}else if(day > 5){
		printf("today can be saturday or sunday");
	}else{
		printf("today is friday");
	}
	return 0;
}
