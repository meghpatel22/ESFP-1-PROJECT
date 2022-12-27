#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
int homepage()
{
	system("cls");
//	system("pause");
	printf("\n#	           NAME	       AGE	       BRANCH	        SEX	        EMAIL");
	printf("\n01        	SHAH VANSH  	35	TRANSFER DEPARTMENT	MALE	vansh69@gmail.com");
	printf("\n02        	SHAH VANSH  	25	TRANSFER DEPARTMENT	MALE	vansh69@gmail.com");
	printf("\n03        	SHAH VANSH  	33	TRANSFER DEPARTMENT	MALE	vansh69@gmail.com");
	printf("\n04        	SHAH VANSH  	30	TRANSFER DEPARTMENT	MALE	vansh69@gmail.com");
	printf("\n05        	SHAH VANSH  	22	TRANSFER DEPARTMENT	MALE	vansh69@gmail.com");
	printf("\n06        	SHAH VANSH  	27	TRANSFER DEPARTMENT	MALE	vansh69@gmail.com");
	printf("\n07        	SHAH VANSH  	31	TRANSFER DEPARTMENT	MALE	vansh69@gmail.com");
	printf("\n08        	SHAH VANSH  	26	TRANSFER DEPARTMENT	MALE	vansh69@gmail.com");
	printf("\n09        	SHAH VANSH  	24	TRANSFER DEPARTMENT	MALE	vansh69@gmail.com");
	printf("\n10        	SHAH VANSH  	35	TRANSFER DEPARTMENT	MALE	vansh69@gmail.com");
	printf("\n11        	SHAH VANSH  	31	TRANSFER DEPARTMENT	MALE	vansh69@gmail.com");
	printf("\n12        	SHAH VANSH  	25	TRANSFER DEPARTMENT	MALE	vansh69@gmail.com");
	printf("\n13        	SHAH VANSH  	29	TRANSFER DEPARTMENT	MALE	vansh69@gmail.com");
	printf("\n14        	SHAH VANSH  	30	TRANSFER DEPARTMENT	MALE	vansh69@gmail.com");
	printf("\n15        	SHAH VANSH  	35	TRANSFER DEPARTMENT	MALE	vansh69@gmail.com");
	printf("\n16        	SHAH VANSH  	24	TRANSFER DEPARTMENT	MALE	vansh69@gmail.com");
	printf("\n17        	SHAH VANSH  	25	TRANSFER DEPARTMENT	MALE	vansh69@gmail.com");
	printf("\n18        	SHAH VANSH  	39	TRANSFER DEPARTMENT	MALE	vansh69@gmail.com");
	printf("\n19        	SHAH VANSH  	28	TRANSFER DEPARTMENT	MALE	vansh69@gmail.com");
	printf("\n20        	SHAH VANSH  	30	TRANSFER DEPARTMENT	MALE	vansh69@gmail.com");
	printf("\n21        	SHAH VANSH  	26	TRANSFER DEPARTMENT	MALE	vansh69@gmail.com");
}

int certificate()
{
	system("cls");
	char x[10],y[10],z[10],f[20];
	int n,t,g;
	
	printf("\nENTER YOUR FIRST NAME :\n");
    fflush(stdin);
	gets(x);
	printf("\nENTER YOUR MIDDLE NAME:\n");
	gets(y);
	printf("\nENTER YOUR LAST NAME:\n");
	
	gets(z);
    printf("\nENTER YOUR SERVICE(BRANCH YOU WERE WORKING):\n");
    fflush(stdin);
    scanf("%s",&f);
    printf("\nENTER YOUR DATE :");
   	fflush(stdin);
   	scanf("%d %d %d",&n,&t,&g);
   	
   	printf("\n                                                   CERTIFICATE :");
	printf("\n                                                   -------------");
	
	printf("\n========================================================================================================================");
	printf("\n                                                                                                      DATE :%d/%d/%d",n,t,g);
	printf("\n                                          SERVICE CERTIFICATE FOR GOVRNMENT EMPLOYEE");
	printf("\n                                                   SERVICE CERTIFICATE");
	printf("\n                                                 PALANPUR PANCHAYAT STAFF");
	
	printf("\n\n\n                                     THIS IS TO CERTIFY Mr/Mrs. '%s %s %s'",x,y,z);
	printf("\n\n                                    HAS BEEN WORKING AS EMPLOYEE WITH US AS '%s'",f);
	printf("\n\n                            WITH PERFACTION IT WAS A GREAT PLEASURE WORKING WITH HIM FOR HIS EMPLOYMENT");
	printf("\n\n                               DURATION AND HE PROVED HIMSELF AS ONE OF THE MOST IMPORTANT");
	printf("\n\n                               ASSETS OF THE ORGANIZATION. WE WISH HIM A GOOD LIFE AND BETTER");
	printf("\n\n                                             OPPORTUNITIES OF EMPLOYMENT.");
	printf("\n\n========================================================================================================================");
	printf("\n");
   	
}
	
int main()
{
	char *uid="ADMIN",*psd="12345";
	char uname[5],pass[5],a[10],d[10],e[10],x[10],y[10],z[10],f[20];
	int len1,len2,c,b,n,t,g;
	char cont = 'y';
	
	int choice;
	printf("========================================================================================================================");
	printf("\n                                                  GANPAT UNIVERSITY                                                   ");
	printf("\n                                                MADE BY : PATEL MEGH B                                                ");
	printf("\n                                              ER NO. : BDA 11  BATCH : 14                                             ");
	printf("\n                                       PROJECT - GRAM PANCHAYAT WEBSITE, PALANPUR                                     ");
	printf("\n                                                ACADEMIC year 2022-23                                                 \n");
	printf("\n========================================================================================================================");
	printf("\n");
	printf("                                       ~~~~~~~~ WHAT DO YOU WANT TO KNOW ~~~~~~~~\n");
	while(cont == 'y')
    {
	printf("\n                                     ~ PRESS <1> IF YOU WANT INFO OF STAFF MEMBER. ~");
	printf("\n                                   ~ PRESS <2> IF YOU WANT TO 'ADD' YOUR INFORMATION. ~");
    printf("\n                                    ~ PRESS <3> IF YOU WANT TO KNOW ABOUT SERVICES. ~");
    printf("\n                               ~ PRESS <4> IF YOU WANT TO GIVE CERTIFICATION TO EMPLOYEE. ~");
	printf("\n                                               ~ ENTER YOUR CHOICE :");
    scanf("%d",&choice);
    
    switch(choice)
    {
    case 1:
    printf("\n         ---------------------------------------------------------------------------------------------------       ");
	printf("\n");
	printf("\n                                                 ENTER LOGIN DETAILS :                                                 ");
	printf("\n                                                 --------------------- ");
	printf("\nENTER YOUR ID:");
	scanf("%s",uname);
	printf("\nENTER YOUR PASSWORD:");
	scanf("%s",pass);
	
	len1=strcmp(uid,uname);
	len2=strcmp(psd,pass);
	
	if(len1==len2)
	{
		homepage();
	}
	else
	{
		printf("YOU HAVE ENTERED WRONG USERNAME OR PASSWORD");
	}
	printf("\n------------------------------------------------------------------------------------------------------------------------");
	break;
	
	case 2:
		printf("\n         ---------------------------------------------------------------------------------------------------       ");
		printf("\n");
	    printf("\n                                                 ENTER  YOUR  DETAILS :");
	    printf("\n                                                ----------------------- ");
		printf("\nENTER YOUR NAME :");
    	fflush(stdin);
    	scanf("%s %s %s",&a,&d,&e);
    	printf("\nENTER YOUR DOB :");
    	fflush(stdin);
    	scanf("%d",&b);
    	printf("\nENTER YOUR MOBOLE NUMBER :");
    	fflush(stdin);
    	scanf("%d",&c);
    	printf("\n------------------------------------------------------------------------------------------------------------------------");
		break;
		
	case 3:
		system("cls");
		
		printf("\n         ---------------------------------------------------------------------------------------------------       ");
		printf("\n");
	    printf("\n                                           SERVICES OF GRAM/TALUKA PANCHAYAT : ");
		printf("\n                                           ----------------------------------- ");
		printf("\n");
    	printf("\n - Provide health and hygiene services in talukas.");
		printf("\n");
    	printf("\n - Control on epidemics.");
		printf("\n");
    	printf("\n - Constructions and maintenance of village roads.");
		printf("\n");
    	printf("\n - Establishment and management of primary schools.");
		printf("\n");
    	printf("\n - Agricultural improvements and planning at taluka level.");
		printf("\n");
    	printf("\n - Women welfare, development on youth activities and assistance.");
		printf("\n");
    	printf("\n - Maintenance and construction of water resources,  roads,  drainage,  School buildings and  CPR(common property resources).");
    	printf("\n");
    	printf("\n - Levy and collect local taxes.");
		printf("\n");
    	printf("\n - Execute government schemes related to employment.");
		printf("\n");
    	printf("\n------------------------------------------------------------------------------------------------------------------------");
		break;
		
		case 4:
			
		printf("\n         ---------------------------------------------------------------------------------------------------       ");
	    printf("\n\nENTER YOUR ID:");
	    scanf("%s",uname);
	    printf("\nENTER YOUR PASSWORD:");
	    scanf("%s",pass);
	
	len1=strcmp(uid,uname);
	len2=strcmp(psd,pass);
	
	if(len1==len2)
	{
   	certificate();
	}
	else
	{
		printf("YOU HAVE ENTERED WRONG USERNAME OR PASSWORD");
	} 
	    }
		printf("\n\nIF YOU WANT TO CONYINUE PRESS 'y' ELSE PRESS 'n' : [y/n]:\t");
		fflush(stdin);
		scanf("%s",&cont);
	}
	printf("\n\n                                     ~~~~~~~~~~  THANKS FOR VISITING  ~~~~~~~~~~\n\n");
	
	return 0;
}
