#include<stdio.h>
//thuc don:so mon ,ten món,gia tien ,thuc uong.
typedef struct {
	int somon,soban;
	char tenmon[30],thucuong[10];
	long giatien;
	}thucdon;
typedef struct {
	int ngay,thang,nam;
	}date;
typedef struct {
	char ten[20];
	long sodt;
	date ngaysinh;
	}nhanvien;
void nhapTHUCDON(thucdon &a){
	printf("___MOI NHAP THUC DON___\n");
	printf("Nhap so mon :");scanf("%d",&a.somon);
	fflush(stdin);
	printf("Nhap ten mon :");scanf("%s",&a.tenmon);
	printf("Nhap thuc uong :");scanf("%s",&a.thucuong);
	printf("Nhap gia tien :");scanf("%d",&a.giatien);
	printf("Nhap so ban: ");scanf("%d",&a.soban);
	}
void nhapmangTHUCDON(thucdon a[],int &n){
	printf("\nNhap so luong thuc don :");scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Moi ban nhap thuc don !!!\n");
		nhapTHUCDON(a[i]);
	}
}
void xuatTHUCDON(thucdon &a){
	printf("\n___THUC DON___\n");
	printf("So mon: %d\t",a.somon);
	fflush(stdin);
	printf("Ten mon :%s\t",a.tenmon);
	printf("Thuc uong :%s\t",a.thucuong);
	printf("Gia tien :%d\t",a.giatien);
	fflush(stdin);
	printf("So ban :%d",a.soban);
	}
void xuatmangTHUCDON(thucdon a[],int n){
	for(int i=0;i<n;i++){
		printf("\nThuc don thu %d",i+1);
		xuatTHUCDON(a[i]);
		}
}
//nhan vien:so luong,sdt,ngaythangnam sinh
void nhapNgaysinh(date &ngaysinh){
    scanf("%d%d%d",&ngaysinh.ngay,&ngaysinh.thang,&ngaysinh.nam);
    }
void xuatNgaysinh(date date1){
	printf("\nNgay sinh:%d/%d/%d",date1.ngay,date1.thang,date1.nam);
	}
void nhapNhanvien(nhanvien &b){
	printf("___MOI NHAP THONG TIN NHAN VIEN___\n");
	printf("Nhap ten:");scanf("%s",b.ten);fflush(stdin);
	printf("Nhap so dien thoai:");scanf("%d",b.sodt);
	fflush(stdin);
	printf("Nhap ngay sinh: ");
	nhapNgaysinh(b.ngaysinh);
}
void nhapmangNhanvien(nhanvien b[],int m){
	for(int i=0;i<m;i++){
		printf("Thong tin nhan vien thu %d\n",i+1);
		nhapNhanvien(b[i]);
	}
}
void xuatNhanvien(nhanvien b){
    printf("___ THONG TIN NHAN VIEN___");
	printf("Ten: %s\t",b.ten);
	printf("So dien thoai:%d\t",b.sodt);
    xuatNgaysinh(b.ngaysinh);
}
void xuatmangNhanvien(nhanvien b[],int m){
	for(int i=0;i<m;i++){
		printf("Thong tin nhan vien thu %d",i+1);
		xuatNhanvien(b[i]);
	}	
}	
int main(){
	thucdon a[50];
	nhanvien b[20];
	int n,m;
	nhapmangTHUCDON(a,n);
	xuatmangTHUCDON(a,n);
	printf("\nNhap so luong nhan vien:");scanf("%d",&m);
	nhapmangNhanvien(b,m);
	xuatmangNhanvien(b,m);
	}	
     
	
