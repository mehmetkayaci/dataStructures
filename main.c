#include <stdio.h>
#include <stdlib.h>

typedef struct kayit{
int deger;
struct kayit *sonraki;
}kayit;

kayit *ilk,*temp,*temp2; 

void ekle(int);
void listele();
void cikar(int);
void arama(int);

int main(int argc, char *argv[]) {
	int eleman,secim;
	ilk=(kayit*)malloc(sizeof(kayit));
	ilk->sonraki=NULL;
	
	while(1){
		
		printf("---menu--- \n");
		printf("1.ekleme\n");
		printf("2.listeleme\n");
		printf("3.çıkarma\n");
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

void ekle(int deger2){
	temp=ilk;
	if(temp){
	
	while(temp->sonraki){
		temp=temp->sonraki;
	}
	temp->sonraki=(kayit*)malloc(sizeof(kayit));
	temp=temp->sonraki;
	temp->deger=deger2;
	temp->sonraki=NULL;
	printf("girilen deger %d listeye eklendi\n\n",deger2);	
}
 else{
 	temp->deger=deger2;
 	printf("girilen deger %d listeye eklendi\n\n",deger2);	
 }
	
}
void listele(){
	temp=ilk;
	int i=0;
	printf("index      listedeki elemanlar \n");
	while(temp){
		i++;
		printf("  %d     =     %d \n",i,temp->deger);
		temp=temp->sonraki;
}	
}
void cikar(int deger2){
	temp=ilk;
	temp2=NULL;
	if(temp){
	
	while(temp){
		if(temp->deger==deger2){
			temp2->sonraki=temp->sonraki;
			printf("%d elemanı listeden çıkarılmıştır\n",deger2);
			break;
		}
		temp2=temp;
		temp=temp->sonraki;
	}
	}
	else{
		printf("aranılan eleman listede bulunamadı\n");
	}
	
	
}
void arama(int deger2){
	temp=ilk;
	int index=0;
	
	if(temp){
		while(temp){
			index++;
			if(temp->deger==deger2){
			printf("%d degeri %d indexinde bulunmaktadır\n",deger2,index);	
			}
			else{	
			temp=temp->sonraki;
				}
					}
	}
	else{
		printf("liste boş\n");
	}
	
}
