#include<stdio.h>
int giaiThua(int nhap,int tinh){

	for(int i=1;i<=nhap;i++){
		tinh*=i;
	}
	printf("%d",tinh);
	return tinh;
}
int main(){
	int nhap,tinh=1;
	printf("moi ban nhap so ");
	scanf("%d",&nhap);
	giaiThua(nhap,tinh);
	
}

