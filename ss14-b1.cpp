#include<stdio.h>
#include<string.h>
int main(){
	char arr[100];
	printf("moi ban nhap vao mot chuoi bat ki:  ");
	fgets(arr,100,stdin);
	printf("chuoi ban vua nhap la: %s ",arr);
	printf("mang co %d ky tu \n",strlen(arr));
	return 0;
}
