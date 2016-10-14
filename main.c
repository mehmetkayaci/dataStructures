#include <stdio.h>
#include <stdlib.h>

typedef struct kayit{
int deger;
struct kayit *sonraki;
};

struct kayit *ilk,*son; 

void ekle(int);
void listele();
void cikar(int);
void arama(int);

int main(int argc, char *argv[]) {
	int eleman,secim;
	
	while(1){
		
		printf("---menu--- \n");
		printf("1.ekleme\n");
		printf("2.listeleme\n");
		printf("3.çýkarma\n");
		printf("4.arama\n");
		printf("seçiminizi giriniz=\n");
		scanf("%d",&secim);
		system("cls");
		
		switch(secim){
			case 1:
				printf("eklenecek sayiyi giriniz =\n");
				scanf("%d",&eleman);
				ekle(eleman);
				break;
			case 2:
				listele();
				break;
			case 3:
				printf("cikarilacak sayiyi giriniz\n");
				scanf("%d",&eleman);
				cikar(eleman);
				break;
			case 4:
				printf("Aranilacak sayiyi giriniz\n");
				scanf("%d",&eleman);
				arama(eleman);
				break;
		}
	}
	return 0;
}

void ekle(int value){
	printf("ok");
}
