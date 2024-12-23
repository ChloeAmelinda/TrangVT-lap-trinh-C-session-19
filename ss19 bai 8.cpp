#include<stdio.h>
#include<string.h>
// khai bao cau truc
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
// khai bao ham sort
void sort( struct sinhvien menu[]);
int main(){
	int count=5;
	printf("Mang truoc khi sap xep la \n");
	for(int i=0; i<count;i++){
		printf("\n Thu tu id sinh vien thu %d\n",menu[i].id);
		printf(" Ho va ten sinh vien :%s\n",menu[i].fullname);
		printf(" Tuoi sinh vien : %d\n",menu[i].age);
		printf(" So dien thoai sinh vien : %d\n",menu[i].phone);
	}
	// sap xep
	sort(menu);
	return 0;
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

