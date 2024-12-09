#include<stdio.h>
int array(int arr[],int size){
	for(int i=0;i<size;i++){
	    printf("[%d]= ",i);
		scanf("%d",&arr[i]);	
	}
	for(int i=0;i<size;i++){
	    printf("%d ",arr[i]);
    }
	   
}
int main(){
	int size;
	
	printf("moi ban nhap so luong : ");
	scanf("%d",&size);
	int arr[size];
	array(arr,size);
	
	
	
}
