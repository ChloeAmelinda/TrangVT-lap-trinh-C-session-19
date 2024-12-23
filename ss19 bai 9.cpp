#include<stdio.h>
#include<string.h>
struct sinhvien{
	int id; 
	char fullname[50];
	int age;
	int phone;
};
struct sinhvien menu[100]={
	{1,"Vu Thu Trang",18,12345678},
	{2,"Chloe Amelinda",20,24681012},
	{3,"Pham Thanh Dat",21,13579},
	{4,"Tran Viet Anh ",32,112233},
	{5,"Vu van Doan",42,87654321},
};
// menu, them, sua, xoa, found, sort
void displaymenu();
void add(struct sinhvien menu[] );
void sua(struct sinhvien menu[] );
void xoa(struct sinhvien menu[] );
void found(struct sinhvien menu[] );
void sort(struct sinhvien menu[] );
int main(){
	int count=5;
	int choice;
	do {
		displaymenu();
		printf("Lua chon cua ban la:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				for(int i=0; i<count;i++){
					printf("\n Thu tu id sinh vien thu %d\n",menu[i].id);
					printf(" Ho va ten sinh vien :%s\n",menu[i].fullname);
					printf(" Tuoi sinh vien : %d\n",menu[i].age);
					printf(" So dien thoai sinh vien : %d\n",menu[i].phone);
				}
				break;
			case 2://them
				add(menu);
				break;
			case 3://sua
				sua(menu); 
				break;
			case 4://xoa
				xoa(menu);
				break;
			case 5://sap xep
				sort(menu);
				break;
			case 6://tim kiem
				found(menu);
				break;
			case 7:
				printf("Thoat\n");
				break;
			default:
				printf("Loi du lieu.Nhap lai\n");
		}
	}while(choice !=7);
	return 0;
}
void displaymenu(){
	printf("-----Menu-----\n");
	printf("1.Hien thi danh sach sinh vien \n");
	printf("2.Them sinh vien \n");
	printf("3.Sua thong tin sinh vien \n");
	printf("4.Xoa thong tin sinh vien \n");
	printf("5.Sap xep thong tin sinh vien \n");
	printf("6.Tim kiem danh sach sinh vien \n");
	printf("7.Thoat \n");
}
void add(struct sinhvien menu[]){
	int count =5;
	if(count <=5){
		menu[count].id=count +1;
		printf("Them ten sinh vien:");
		fflush(stdin);
		fgets(menu[count].fullname, sizeof(menu[count].fullname) , stdin);
		printf("Them tuoi sinh vien:");
		scanf("%d", &menu[count].age);
		printf("Them so dien thoai sinh vien:");
		fflush(stdin);
		scanf("%d",&menu[count].phone);
		count++;
	}
		// in menu sau khi add
		for(int i=0; i<count;i++){
			printf("\n Thu tu id sinh vien thu %d\n",menu[i].id);
			printf(" Ho va ten sinh vien :%s\n",menu[i].fullname);
			printf(" Tuoi sinh vien : %d\n",menu[i].age);
			printf(" So dien thoai sinh vien : %d\n",menu[i].phone);
		}
}
void sua(struct sinhvien menu[]){
	int position, tuoi, sdt;
	int count =5; 
	char ten[50];
	printf("Nhap id muon sua:");
	scanf("%d",&position);
	if(position !=0 && position <= count){
        printf("Sua ten: ");
        fflush(stdin);
        fgets(menu[position - 1].fullname, sizeof(menu[position - 1].fullname), stdin);
        
        printf("Sua tuoi: ");
        scanf("%d", &menu[position - 1].age);
        
        printf("Sua so dien thoai: ");
        scanf("%d", &menu[position - 1].phone);
        // sau khi sua 
        for(int i=0; i<count;i++){
			printf("\n Thu tu id sinh vien thu %d\n",menu[i].id);
			printf(" Ho va ten sinh vien :%s\n",menu[i].fullname);
			printf(" Tuoi sinh vien : %d\n",menu[i].age);
			printf(" So dien thoai sinh vien : %d\n",menu[i].phone);
		}
        
	}
	else{
		printf("Khong ton tai du lieu tren \n"); 
	} 
}
void xoa(struct sinhvien menu[]){
	int count =5;
	int position;
	printf("Nhap vi tri ban muon xoa:");
	scanf("%d",&position);
	if(position !=-1 && position <count ){
		for(int i=position-1  ; i< count-1; i++){
			menu [i].id = menu[i+1].id;
		}
		count--;
		printf("mang sau khi xoa la:");
		for (int i=0; i<count; i++){
		printf("\n Thu tu id sinh vien thu %d\n",menu[i].id);
		printf(" Ho va ten sinh vien :%s\n",menu[i].fullname);
		printf(" Tuoi sinh vien : %d\n",menu[i].age);
		printf(" So dien thoai sinh vien : %d\n",menu[i].phone);
		}
	}
	else {
		printf("id sinh vien khong ton tai\n");
	}
}
void sort(struct sinhvien menu[]){
	int count=5;
	for (int i=0; i<count; i++){
		for(int j =i+1; j<count ;j++){
			if(strcmp(menu[i].fullname,menu[j].fullname)>0){
				sinhvien temp=menu[i];
				menu[i]=menu[j];
				menu[j]=temp;
			}
		}
	}
	printf("Mang sau khi sap xep la \n");
	for(int i=0; i<count;i++){
		printf("\n Thu tu id sinh vien thu %d\n",menu[i].id);
		printf(" Ho va ten sinh vien :%s\n",menu[i].fullname);
		printf(" Tuoi sinh vien : %d\n",menu[i].age);
		printf(" So dien thoai sinh vien : %d\n",menu[i].phone);
	}
}
void found(struct sinhvien menu[]){
	int tim;
	int count =5;
	printf("nhap id sinh vien can tim: ");
		getchar();
		scanf("%d", &tim);
		
	    for(int i = 0; i < count; i++){
	        if(menu[i].id == tim){
	       		printf(" Ho va ten sinh vien :%s\n",menu[i].fullname);
				printf(" Tuoi sinh vien : %d\n",menu[i].age);
				printf(" So dien thoai sinh vien : %d\n",menu[i].phone);
	            
	            break;
	        }
	    }
	    if(found == 0){
	        printf("Khong tim thay mon an  %s\n", tim);
	    }
}
