#include<stdio.h>
#include<string.h>
int main(){	struct student{
		char name[100];
		int age;
		char phone[20];
	};
	struct student user02;
	printf("moi ban nhap thong tin cho user02 : \n");
	fflush(stdin);
	printf("moi nhap ho va ten cho sinh vien : ");
	fgets(user02.name,sizeof(user02.name),stdin);
	printf("moi nhap tuoi cho sinh vien : ");
	scanf("%d",&user02.age);
	printf("moi nhap sdt cho sinh vien : ");
	scanf("%s",&user02.phone);
	
	printf("int thong tin sinh vien :\n");
	printf("%s\n",user02.name);
	printf("%d\n",user02.age);
	printf("%s\n",user02.phone);
	return 0;
}
