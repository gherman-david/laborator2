#include <stdlib.h>
#include <stdio.h>

int function(int x){
	if(x <= 0){
		return x;
	}
	x=x-2;
	  //UPDATE LA ANTERIOR nu mai scapam de recursivitate, punem stop comment: eliminam apelarea recursiva deoarece repetarea se face in main
	return function(x);
}

int main(){
	int a=30, i=0;
	
	while (a>0){
		a=function(a);
		i++;
	}
	printf("%d", i);
	return 0;	
}

