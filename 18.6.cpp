#include<stdio.h>
#include<string.h>
int main(){	struct sinhvien{
	int id;
	char name[100];
	int age;
	char phone[20];
	};
	int choice;
	struct sinhvien sinhvien[50]={
		{1,"Do Ngoc Dan",18,"0354744360"},
		{2,"le thi trang",25,"0354703820"},
		{3,"le van hung",19,"0354660437"},
		{4,"tran viet anh",18,"0354744578"},
		{5,"tran van thang",21,"035478760"}
	};
	printf("moi ban nhap so sinh vien can them vao : ");
	scanf("%d",&choice);
	for(int i=5;i<5+choice;i++){
		sinhvien[i].id=i+1;
	    printf("moi ban nhap thong tin cho sinh vien thu %d : \n",i+1);
    	fflush(stdin);
    	printf("moi nhap ho va ten cho sinh vien : ");
    	fgets(sinhvien[i].name,sizeof(sinhvien[i].name),stdin);
    	printf("moi nhap tuoi cho sinh vien : ");
    	scanf("%d",&sinhvien[i].age);
    	printf("moi nhap sdt cho sinh vien : ");
	    scanf("%s",&sinhvien[i].phone);	
	    printf("\n");
	    for(int j=0;j<i+1;j++){
		printf("in thong tin sinh vien thu %d:\n",j+1);
		printf("%d\n",sinhvien[j].id);
    	printf("%s\n",sinhvien[j].name);
	    printf("%d\n",sinhvien[j].age);
     	printf("%s\n",sinhvien[j].phone);
        }
	}
	return 0;
}
