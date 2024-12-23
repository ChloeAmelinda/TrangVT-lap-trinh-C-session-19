#include<stdio.h>
// khai bao cau truc 
 struct sinhvien{
	int id; 
	char fullname[50];
	int age;
	int phone;
};
// khai bao mang co 5 phan tu 
struct sinhvien menu[100]={
	{1,"Vu Thu Trang",18,12345678},
	{2,"Doan Trung Nguyen",20,24681012},
	{3,"Pham Thanh Dat",21,13579},
	{4,"Tran Viet Anh ",32,112233},
	{5,"Vu van Doan",42,87654321},
};
// ham xoa 
void xoa ( struct sinhvien []);

int main(){
	int position;
	int count =5;
	printf("Mang sau truoc khi xoa la \n");
	for(int i=0; i<count;i++){
		printf("\n Thu tu id sinh vien thu %d\n",menu[i].id);
		printf(" Ho va ten sinh vien :%s\n",menu[i].fullname);
		printf(" Tuoi sinh vien : %d\n",menu[i].age);
		printf(" So dien thoai sinh vien : %d\n",menu[i].phone);
	}
	
	xoa(menu); 
	return 0;
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
