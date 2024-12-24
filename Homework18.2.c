#include<stdio.h>
#include<string.h>
int main(){
	struct Student{
		char name[50];
		int age;
		char phoneNumber[10];
	};
	struct Student student01;
	printf("Moi ban nhap ten sinh vien thu nhat :");
	fgets(student01.name, sizeof(student01.name), stdin);
	printf("Moi ban nhap tuoi sinh vien thu nhat :");
	scanf("%d", &student01.age);
	getchar(); 
	printf("Moi ban nhap so dien thoai sinh vien thu nhat :");
	fgets(student01.phoneNumber, sizeof(student01.phoneNumber), stdin);
	printf("Ten sinh vien thu nhat la: %s",  student01.name);
	printf("Tuoi sinh vien thu nhat la: %d\n",  student01.age);
	printf("So dien thoai cua hoc sinh thu nhat la: %s\n",  student01.phoneNumber);
    return 0;
}


