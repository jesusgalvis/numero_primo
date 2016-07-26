#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	int a;
	
	printf ("Introduce Un numero: ");
	scanf  ("%d",&a);
	
	if ((a % 2)== 1){
		printf ("El Numero es primo. \n");
	}
	else{
		printf ("El Numero no es primo, es par. \n");
	}

	return 0;
	
}
