#include<stdio.h>
int main(){
	int n;
	printf("enter the number\n");
	scanf("%d",&n);
	switch(n%2){
		case 0:
			printf("%d is even\n",n);
			break;
		default:
			printf("%d is odd\n",n);
			break;
	}
	return 0;
}
