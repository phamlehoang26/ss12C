#include<stdio.h>
int sum(int a,int b){
return a+b;
}
int main(){
	int a,b;
	printf("moi ban nhap so a ");
	scanf("%d",&a);
	printf("moi ban nhap so b ");
	scanf("%d",&b);
	int tong =sum(a,b);
	printf("tong 2 so cua ban la %d ",tong);
	
	
	return 0;
}
