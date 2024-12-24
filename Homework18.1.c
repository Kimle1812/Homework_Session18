#include<stdio.h>
int main(){
	struct Student{
		char name[50];
		int age;
		char phoneNumber[10];
	};
	struct Student student01 = {
		"Nguyen Thi Kim Le",
		21,
		"0376112332",
	};
	
	printf("Ten sinh vien thu nhat la: %s\n",  student01.name);
	printf("Tuoi sinh vien thu nhat la: %d\n",  student01.age);
	printf("So dien thoai cua hoc sinh thu nhat la: %s\n",  student01.phoneNumber);
    return 0;
}

