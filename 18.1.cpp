#include<stdio.h>
int main(){	struct student{
		char name[100];
		int age;
		char phone[20];
	};
	
    
	struct student user01{"Do Ngoc Dan",18,"0354744360"};
	
	printf("int thong tin sinh vien :\n");
	printf("%s\n",user01.name);
	printf("%d\n",user01.age);
	printf("%s\n",user01.phone);
	return 0;
}
