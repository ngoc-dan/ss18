#include<stdio.h>
#include<string.h>
int main(){	
	struct Dish{
		int id;
		char name[100];
		int price;
	};
	int n=5;
	int stt;
	struct Dish menu[100]={
		{1,"banh mi",20000},
		{2,"bun dau",35000},
		{3,"xuc xich",15000},
		{4,"vit quay",100000},
		{5,"com giang",60000}
	};
	struct Dish temp;
	while(1){
		printf("\n MENU \n ");
        
		printf("1. in ten va gia cua mon an \n ");
        
		printf("2. them mon an vao cuoi menu \n ");
        
		printf("3. sua mon an o vi tri chi dinh \n ");
        
		printf("4. xoa phan tu o cuoi menu \n ");
        
		printf("5. sap xep tang dan gia trong menu \n ");
        
		printf("6. tim kiem mon an theo ten \n ");
        
		printf("7. Thoat \n ");
        
		printf("Lua chon cua ban: ");
        int choice;
        scanf("%d", &choice);

        if (choice == 7) {
            printf("Thoat chuong trinh.\n");
            break;
        }
        switch (choice) {
        	case 1:
        		for(int i=0;i<n;i++){
        			printf("in thong tin mon an %d:\n",i+1);
			    	printf("%s : ",menu[i].name);
				    printf("%d\n",menu[i].price);
				}
				break;
			case 2:
				menu[n].id=n+1;
				printf("nhap ten mon an : ");
				fflush(stdin);
				fgets(menu[n].name,sizeof(menu[n].name),stdin);
				printf("nhap gia cua mon an : ");
				scanf("%d",&menu[n].price);
				n++;
				break;
			case 3:
				printf("chon mon an : ");
				scanf("%d",stt);
				if(stt>n || stt<1){
					printf("lua chon khong hop le");
				}else{
				for(int i=0;i<n;i++){
					if(menu[i].id==stt-1){
						fflush(stdin);
			        	printf("sua ten cho mon an thu %d: ",i+1);
			        	fgets(menu[i].name,sizeof(menu[i].name),stdin);	
			        	printf("sua gia cho mon an thu %d: ",i+1);
			    	    scanf("%d",&menu[i].price);
					}
					}
				}
			case 4:
				n--;
				break;
			case 5:
				for(int i=0;i<n-1;i++){
					for(int j;j<n-i-1;j++){
						if(menu[j].price>menu[j+1].price){
							temp=menu[j];
							menu[j]=menu[j+1];
							menu[j+1]=temp;
						}
					}
				}
				break;
			case 6:
				char search[50];
				printf("moi nhap ten mon an can tim : ");
				getchar(); 
				fgets(search, sizeof(search), stdin);
				search[strcspn(search, "\n")] = '\0'; 
				for(int i=0;i<n;i++){
					if(strcmp(menu[i].name,search) == 0){
						printf("in thong tin mon an %d:\n",i+1);
						printf("%d.",menu[i].id);
				    	printf("%s : ",menu[i].name);
					    printf("%d\n",menu[i].price);
					    break;
					}
				}
	    }
	}
	return 0;
}
