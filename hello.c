#include<stdio.h>
int main(){
	int i,n,j,product;
	
	printf("Enter number of terms you want the multiplication table of: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=10;j++){
			printf("%d*%d=%d\t",i,j,j*i);
		}
		printf("\n");
	}
    getch();

}