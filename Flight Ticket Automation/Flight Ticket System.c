#include <stdio.h>
#include <stdlib.h>

//Creating a file

FILE *fp;
	char isim[20];
	char soyisim[20];
	int tc;
	char mail[20];
	
	

	
	//We have created a function here
	
	void kul(){
		 
		 fp=fopen("userinfo.txt","a");
		 
		 printf("Name: ");
		 scanf("%s",&isim);
		 fprintf(fp,"Name: %s ",isim);
		
		  printf("Surname: ");
		 scanf("%s",&soyisim);
		  fprintf(fp,"Surname: %s\n",soyisim);

		 printf("PasaportNo: ");
		 scanf("%d",&tc);
		 fprintf(fp,"PasaportNo: %d\n",tc);
		
		 printf("E-Mail: ");		
		 scanf("%s",&mail);
		 fprintf(fp,"E-Mail: %s\n",mail);
		 fclose(fp);
		 
		 	printf(" To verify your payment press (5)");
		
		int od;
		scanf("%d",&od);
		if(od==5){
			printf("Please enter your 5 digit card number:");
			scanf("%d",&od);
			printf("Payment Success\n\n");
			//Random PNR number generator
		int random=1989439+rand()%30000000000;
	  		printf("***************************************\n\nYour PNR Number: %d \n\nHave a nice flight.\n\n***************************************\n\n\n",random);
			}
			
			
			
			
			
		
		else { printf("\n\n\n***************************************\n\n\n           Payment Declined\n\n\n***************************************\n\n\n");
		}
	
}
 	

//User Interface

int main(int argc, char *argv[]) {
	
	
	int i=0;
while(i<100){
	i++;
		
	printf("      PERFECT TICKET  \n\n Please select an option \n\n (1) Book Flight:\n\n (2) Ticket Information (Admin Only): \n\n (3) For Exit press 9 \n\n ");
	
	
	int secim;
	scanf("%d",&secim);
//Exit button
if (secim==9){
	break;
}
	

	
//City List	and the buying process

	if(secim==1){
		
printf("          Flight List \n\n\n  (1)ANKARA  (2)ISTANBUL\n  (3)DUBAI   (4)PARIS\n  (5)LONDON  (6)BERLIN\n\n  Please select the Departure city \n\n");
	
	int shr,shr2;
	scanf("%d",&shr);
	printf("Please select the Arrival Destination:\n\n");
	scanf("%d",&shr2);
	
		if(shr==shr2){
		printf("***************************************\n\n  Can not choose the same city\n\n\n  Please choose a valid option\n\n\n***************************************\n\n\n ");
}
	//FLight List
	if((shr==1 && shr2==2 ) || (shr==2 && shr2==1)){
	printf("          AIRWAYS               TICKET_PRICE     DEPARTURE_TIME  \n\n 1- AIR FRANCE  AIRLINES           2500tl            00:50     \n\n 2- ETIHAD  AIRWAYS                2400tl            00:45  \n\n 3- TURKISH AIRLINES               2120tl            17:30 \n\n       ");	int sc;
		scanf("%d",&sc);
		
		if(sc==1){
		
		kul();
		}	
		else if (sc==2){ 	
			
		kul();
			}	
			else if (sc==3){ 	
			
		kul();
			}			
}
	
				
	if((shr==1 && shr2==3 ) || (shr==3 && shr2==1)){
		printf("          AIRWAYS               TICKET_PRICE     DEPARTURE_TIME  \n\n 1- AIR FRANCE  AIRLINES           2500tl            00:50     \n\n 2- ETIHAD  AIRWAYS                2400tl            00:45  \n\n 3- TURKISH AIRLINES               2120tl            17:30 \n\n       ");int sc;
		scanf("%d",&sc);
			if(sc==1){
		
		kul();
		}	
		else if (sc==2){ 	
			
		kul();
			}	
			else if (sc==3){ 	
			
		kul();
			}			
}
	if((shr==1 && shr2==4 ) || (shr==4 && shr2==1)){
		printf("          AIRWAYS               TICKET_PRICE     DEPARTURE_TIME  \n\n 1- AIR FRANCE  AIRLINES           2500tl            00:50     \n\n 2- ETIHAD  AIRWAYS                2400tl            00:45  \n\n 3- TURKISH AIRLINES               2120tl            17:30 \n\n       ");int sc;
		scanf("%d",&sc);
			if(sc==1){
		
		kul();
		}	
		else if (sc==2){ 	
			
		kul();
			}	
			else if (sc==3){ 	
			
		kul();
			}			
}
	if((shr==1 && shr2==5 ) || (shr==5 && shr2==1)){
		printf("          AIRWAYS               TICKET_PRICE     DEPARTURE_TIME  \n\n 1- AIR FRANCE  AIRLINES           2500tl            00:50     \n\n 2- ETIHAD  AIRWAYS                2400tl            00:45  \n\n 3- TURKISH AIRLINES               2120tl            17:30 \n\n       ");int sc;
		scanf("%d",&sc);
			if(sc==1){
		
		kul();
		}	
		else if (sc==2){ 	
			
		kul();
			}	
			else if (sc==3){ 	
			
		kul();
			}			
}
		if((shr==1 && shr2==6 ) || (shr==6 && shr2==1)){
	printf("          AIRWAYS               TICKET_PRICE     DEPARTURE_TIME  \n\n 1- AIR FRANCE  AIRLINES           2500tl            00:50     \n\n 2- ETIHAD  AIRWAYS                2400tl            00:45  \n\n 3- TURKISH AIRLINES               2120tl            17:30 \n\n       ");int sc;
		scanf("%d",&sc);
			if(sc==1){
		
		kul();
		}	
		else if (sc==2){ 	
			
		kul();
			}	
			else if (sc==3){ 	
			
		kul();
			}			
}
    if((shr==2 && shr2==3 ) || (shr==3 && shr2==2)){
		printf("          AIRWAYS               TICKET_PRICE     DEPARTURE_TIME  \n\n 1- AIR FRANCE  AIRLINES           2500tl            00:50     \n\n 2- ETIHAD  AIRWAYS                2400tl            00:45  \n\n 3- TURKISH AIRLINES               2120tl            17:30 \n\n       ");
		int sc;
		scanf("%d",&sc);
			if(sc==1){
		
		kul();
		}	
		else if (sc==2){ 	
			
		kul();
			}	
			else if (sc==3){ 	
			
		kul();
			}			
}
	if((shr==2 && shr2==4 ) || (shr==4 && shr2==2)){
		printf("          AIRWAYS               TICKET_PRICE     DEPARTURE_TIME  \n\n 1- AIR FRANCE  AIRLINES           2500tl            00:50     \n\n 2- ETIHAD  AIRWAYS                2400tl            00:45  \n\n 3- TURKISH AIRLINES               2120tl            17:30 \n\n       ");int sc;
		scanf("%d",&sc);
		if(sc==1){

	kul();
		}
	else if (sc==2){
	
	kul();
	}
	else if (sc==3){

kul();
}
}
	
if((shr==2 && shr2==4 ) || (shr==4 && shr2==2)){
	printf("          AIRWAYS               TICKET_PRICE     DEPARTURE_TIME  \n\n 1- AIR FRANCE  AIRLINES           2500tl            00:50     \n\n 2- ETIHAD  AIRWAYS                2400tl            00:45  \n\n 3- TURKISH AIRLINES               2120tl            17:30 \n\n       ");	int sc;
		scanf("%d",&sc);
			if(sc==1){
		
		kul();
		}	
		else if (sc==2){ 	
			
		kul();
			}	
			else if (sc==3){ 	
			
		kul();
			}			
}	
	
	if((shr==2 && shr2==5 ) || (shr==5 && shr2==2)){
printf("          AIRWAYS               TICKET_PRICE     DEPARTURE_TIME  \n\n 1- AIR FRANCE  AIRLINES           2500tl            00:50     \n\n 2- ETIHAD  AIRWAYS                2400tl            00:45  \n\n 3- TURKISH AIRLINES               2120tl            17:30 \n\n       ");int sc;
	scanf("%d",&sc);
	if(sc==1){

kul();
}
else if (sc==2){

kul();
}
else if (sc==3){

kul();
}
}
	
	
if((shr==2 && shr2==6 ) || (shr==6 && shr2==2)){
printf("          AIRWAYS               TICKET_PRICE     DEPARTURE_TIME  \n\n 1- AIR FRANCE  AIRLINES           2500tl            00:50     \n\n 2- ETIHAD  AIRWAYS                2400tl            00:45  \n\n 3- TURKISH AIRLINES               2120tl            17:30 \n\n       ");
int sc;
scanf("%d",&sc);
if(sc==1){

kul();
}
else if (sc==2){

kul();
}
else if (sc==3){

kul();
}
}	
	
	
if((shr==3 && shr2==4 ) || (shr==4 && shr2==3)){
printf("          AIRWAYS               TICKET_PRICE     DEPARTURE_TIME  \n\n 1- AIR FRANCE  AIRLINES           2500tl            00:50     \n\n 2- ETIHAD  AIRWAYS                2400tl            00:45  \n\n 3- TURKISH AIRLINES               2120tl            17:30 \n\n       ");
int sc;
scanf("%d",&sc);
if(sc==1){

kul();
}
else if (sc==2){

kul();
}
else if (sc==3){

kul();
}
}	
	
	if((shr==3 && shr2==5 ) || (shr==5 && shr2==3)){
printf("          AIRWAYS               TICKET_PRICE     DEPARTURE_TIME  \n\n 1- AIR FRANCE  AIRLINES           2500tl            00:50     \n\n 2- ETIHAD  AIRWAYS                2400tl            00:45  \n\n 3- TURKISH AIRLINES               2120tl            17:30 \n\n       ");
int sc;
scanf("%d",&sc);
if(sc==1){

kul();
}
else if (sc==2){

kul();
}
else if (sc==3){

kul();
}
}
	
	
if((shr==3 && shr2==6 ) || (shr==6 && shr2==3)){
printf("          AIRWAYS               TICKET_PRICE     DEPARTURE_TIME  \n\n 1- AIR FRANCE  AIRLINES           2500tl            00:50     \n\n 2- ETIHAD  AIRWAYS                2400tl            00:45  \n\n 3- TURKISH AIRLINES               2120tl            17:30 \n\n       ");
int sc;
scanf("%d",&sc);
if(sc==1){

kul();
}
else if (sc==2){

kul();
}
else if (sc==3){

kul();
}
}	
	
	
if((shr==4 && shr2==5 ) || (shr==5 && shr2==4)){
printf("          AIRWAYS               TICKET_PRICE     DEPARTURE_TIME  \n\n 1- AIR FRANCE  AIRLINES           2500tl            00:50     \n\n 2- ETIHAD  AIRWAYS                2400tl            00:45  \n\n 3- TURKISH AIRLINES               2120tl            17:30 \n\n       ");
int sc;
scanf("%d",&sc);
if(sc==1){

kul();
}
else if (sc==2){

kul();
}
else if (sc==3){

kul();
}
}	

if((shr==4 && shr2==6 ) || (shr==6 && shr2==4)){
printf("          AIRWAYS               TICKET_PRICE     DEPARTURE_TIME  \n\n 1- AIR FRANCE  AIRLINES           2500tl            00:50     \n\n 2- ETIHAD  AIRWAYS                2400tl            00:45  \n\n 3- TURKISH AIRLINES               2120tl            17:30 \n\n       ");
int sc;
scanf("%d",&sc);
if(sc==1){

kul();
}
else if (sc==2){

kul();
}
else if (sc==3){

kul();
}
}	
	
if((shr==5 && shr2==6 ) || (shr==6 && shr2==5)){
printf("          AIRWAYS               TICKET_PRICE     DEPARTURE_TIME  \n\n 1- PEGASUS     AIRLINES           2500tl            00:50     \n\n 2- BRITISH AIRWAYS                2400tl            00:45  \n\n 3- TURKISH AIRLINES               2120tl            17:30 \n\n       ");
int sc;
scanf("%d",&sc);
if(sc==1){

kul();
}
else if (sc==2){

kul();
}
else if (sc==3){

kul();
}

	



	


}


}
//Admin entrance
  if(secim==2){
  	
  		
  	int id;
  	
  	//Admin authorization
  	 printf("Please Enter a valid ID:");
  	 scanf("%d ",&id);
  	
  
  	 
  	 if(id==15 ){
  	 	printf("\n\n\n***************************************Welcome to the Customers Info****************************************\n\n****************************************All Customer Information***************************************\n\n\n\n");
  
  		fp = fopen ("userinfo.txt","r");
    //Getting all the passenger information
  fscanf (fp,"%s %s %d %s",isim,soyisim,&tc,mail);    
  while (!feof (fp))
    {  
  	  printf("%s %s %d %s\n\n",isim,soyisim,tc,mail) ;   
    
	  fscanf (fp,"%s %s %d %s",isim,soyisim,&tc,mail);  
    }
  fclose (fp);        
  

  
}








}}


		return 0;
}
	


