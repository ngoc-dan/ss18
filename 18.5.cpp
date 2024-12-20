#include<stdio.h>
#include<string.h>
int main(){	struct sinhvien{
	int id;
	char name[100];
	int age;
	char phone[20];
	};
	int choice;
	struct sinhvien sinhvien[5]={
		{1,"Do Ngoc Dan",18,"0354744360"},
		{2,"le thi trang",25,"0354703820"},
		{3,"le van hung",19,"0354660437"},
		{4,"tran viet anh",18,"0354744578"},
		{5,"tran van thang",21,"035478760"}
	};
	printf("moi ban nhap lua chon : ");
	scanf("%d",&choice);
	for(int i=0;i<5;i++){
		if(choice==sinhvien[i].id){
			fflush(stdin);
        	printf("sua ten cho sinh vien thu %d: ",i+1);
        	fgets(sinhvien[i].name,sizeof(sinhvien[i].name),stdin);	
        	printf("moi su tuoi cho sinh vien thu %d: ",i+1);
    	    scanf("%d",&sinhvien[i].age);
		}
	}
		for(int i=0;i<5;i++){
		if(choice==sinhvien[i].id){
		printf("in thong tin sinh vien thu %d da sua :\n",i+1);
		printf("%d\n",sinhvien[i].id);
    	printf("%s",sinhvien[i].name);
	    printf("%d\n",sinhvien[i].age);
     	printf("%s\n",sinhvien[i].phone);
}
}
	return 0;
}
