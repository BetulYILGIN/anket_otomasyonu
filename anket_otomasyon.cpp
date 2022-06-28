#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct anket{
	int bjk;
	int gs;
	int fb;
	int ts;
};

void menu(){
	printf("oy kullanmak istediginiz takimin numarasini girin\n\n");
	printf("BJK icin  1\nGS icin 2\nFB icin 3\nTS icin 4\nCIKMAK icin 5\n\n\n");	
}

void sonuc(int sayi,int bjk_oy,int gs_oy,int fb_oy,int ts_oy){
	printf("BJK = %d\n",bjk_oy);
	printf("GS = %d\n",gs_oy);
	printf("FB = %d\n",fb_oy);
	printf("TS = %d\n",ts_oy);
	}

int main(){
	int kisi,i,bjk_oy=0,gs_oy=0,fb_oy=0,ts_oy=0,toplam_oy=0;
	char secim[10];
	
	printf("oy kullanacak kisi sayisi = \n");
	scanf("%d",&kisi);
	struct anket oy [kisi];	
	for(i=0;i<kisi;i++){	
			oy[i].bjk=0;
			oy[i].gs=0;
			oy[i].fb=0;
			oy[i].ts=0;
	}
	
for(i=0;i<kisi;i++){
	menu();
	scanf("%s",secim);
	if(strcmp(secim,"1") == 0){
		oy[i].bjk +=1;
	}
	else if(strcmp(secim,"2") == 0){
		oy[i].gs += 1;
	}
	else if(strcmp(secim,"3") == 0){
		oy[i].fb += 1;
	}
	else if(strcmp(secim,"4") == 0){
		oy[i].ts += 1;
	}
	else if(strcmp(secim,"5")==0){
	printf("\ncikis yapiliyor!!\n");
	break;
	}
}
	


FILE*dosya;	
 dosya = fopen("sonuc.txt", "");
 
 for(i=0;i<kisi;i++){
		bjk_oy += oy[i].bjk;
		gs_oy += oy[i].gs;
		fb_oy += oy[i].fb;
		ts_oy += oy[i].ts;
	}
 fprintf(dosya,"\n\n %d adet besiktas icin oy kullanildi\n %d adet galatasaray icin oy kullanildi\n %d adet fenerbahce icin oy kullanidi \n %d adet trabzonspor icin oy kullanildi", bjk_oy ,  gs_oy, fb_oy , ts_oy);
 sonuc(kisi,bjk_oy,gs_oy,fb_oy,ts_oy); 
 }
