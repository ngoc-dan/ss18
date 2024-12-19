#include<stdio.h>
#include<string.h>
int main(){	struct sinhvien{
	int id=0;
	char name[100];
	int age;
	char phone[20];
	};
	
	struct sinhvien sinhvien[5];
	for(int i=0;i<5;i++){
		sinhvien[i].id=i;
	    printf("moi ban nhap thong tin cho sinh vien thu %d : \n",i+1);
    	fflush(stdin);
    	printf("moi nhap ho va ten cho sinh vien : ");
    	fgets(sinhvien[i].name,sizeof(sinhvien[i].name),stdin);
    	printf("moi nhap tuoi cho sinh vien : ");
    	scanf("%d",&sinhvien[i].age);
    	printf("moi nhap sdt cho sinh vien : ");
	    scanf("%s",&sinhvien[i].phone);	
	    
}
	for(int i=0;i<5;i++){
		printf("in thong tin sinh vien thu %d:\n",i);
		printf("%d",sinhvien[i].id);
    	printf("%s\n",sinhvien[i].name);
	    printf("%d\n",sinhvien[i].age);
     	printf("%s\n",sinhvien[i].phone);
}
return 0;
}
