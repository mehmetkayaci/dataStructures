/* Derleyici Dev-C++ 5.11 ,ortam windows 10 64 bit Mehmet Ali KAYACI 130611040 */
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
	
	while(1){
		
		printf("---menu--- \n");
		printf("1.ekleme\n");
		printf("2.listeleme\n");
		printf("3.cikarma\n");
		printf("4.arama\n");
		printf("seciminizi giriniz=\n");
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
 	ilk=(kayit*)malloc(sizeof(kayit));
	ilk->sonraki=NULL;
	temp=ilk;
 	temp->deger=deger2;
 	printf("yeni liste olusturuldu ve girilen deger %d listeye eklendi\n\n",deger2);	
 }
	
}
void listele(){
	if(ilk){
	
	temp=ilk;
	int i=0;
	printf("index      listedeki elemanlar \n");
	while(temp){
		i++;
		printf("  %d     =     %d \n",i,temp->deger);
		temp=temp->sonraki;
}
}
else{
	printf("liste bos \n");
}
}
void cikar(int deger2){
	temp=ilk;
	temp2=ilk;
	if(temp){
	
	while(temp){
		if(temp->deger==deger2){
			if(temp==temp2&&!temp->sonraki){
				free(temp);
				printf("liste silindi \n");
			}
			else if(temp==temp2&&temp->sonraki){
				printf("%d elemani listeden cikarilmistir\n",deger2);
				temp=temp->sonraki;	
				free(temp2);
				ilk=temp;			
			}
			else{
			temp2->sonraki=temp->sonraki;
			free(temp);
			printf("%d elemani listeden cikarilmistir\n",deger2);
		}
			break;
		}
		temp2=temp;
		temp=temp->sonraki;
	}
	if(!temp){
		printf("aranilan eleman listede bulunamadi\n");
				}
	}
	else printf("liste bos \n");
	
	
	
}
void arama(int deger2){
	temp=ilk;
	int i=0;
	
	if(temp){
		while(temp){
			i++;
			if(temp->deger==deger2){
			printf("%d degeri %d indexinde bulunmaktadir\n",deger2,i);
			break;	
			}
			else{	
			temp=temp->sonraki;
				}
					}
				
			
	}
	else{
		printf("liste bos\n");
	}
	
	if(!temp){
		printf("aranilan sayi listede bulunamadi \n");
	}
}
