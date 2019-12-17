#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <unistd.h>
#include <windows.h>
#include <math.h>
#include "std.h"
#include <time.h>
#define SSIZE 10000

typedef struct student
{
	int id;
	char name[30];
	char fakultas[30];
	char universitas [30];
	int semester;
	struct student *link;
}node;

node *header=NULL;
node *get_node()
{
	return((node *)malloc(sizeof(node)));
}

void fullscreen()
{
keybd_event(VK_MENU,0x38,0,0);
keybd_event(VK_RETURN,0x1c,0,0);
keybd_event(VK_RETURN,0x1c,KEYEVENTF_KEYUP,0);
keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
}

void logo(){
system("COLOR 17");
int a=6;

	FILE *out=fopen("Data.csv","a");
    fprintf(out,"ID, Nama, Semester, Fakultas, Universitas\n");
    fclose(out);
    boxBorder(106,1,3,1,a,1,1);
    boxBorder(104,2,7,1,a,1,1);
    boxBorder(103,3,9,1,a,1,1);
    boxBorder(101,4,13,1,a,1,1);
    boxBorder(100,5,15,1,a,1,1);
    boxBorder(99,6,17,1,a,1,1);
    boxBorder(96,6,2,1,a,1,1);
    boxBorder(117,6,2,1,a,1,1);
    boxBorder(95,7,25,1,a,1,1);
    boxBorder(94,8,10,1,a,1,1);
    boxBorder(105,8,5,1,a,1,1);
    boxBorder(111,8,10,1,a,1,1);
    boxBorder(93,9,5,1,a,1,1);
    boxBorder(99,9,4,1,a,1,1);
    boxBorder(104,9,7,1,a,1,1);
    boxBorder(112,9,4,1,a,1,1);
    boxBorder(117,9,5,1,a,1,1);
    boxBorder(90,10,2,1,a,1,1);
    boxBorder(93,10,5,1,a,1,1);
    boxBorder(99,10,4,1,a,1,1);
    boxBorder(104,10,7,1,a,1,1);
    boxBorder(112,10,4,1,a,1,1);
    boxBorder(117,10,5,1,a,1,1);
    boxBorder(123,10,2,1,a,1,1);
    boxBorder(89,11,3,1,a,1,1);
    boxBorder(93,11,5,1,a,1,1);
    boxBorder(99,11,4,1,a,1,1);
    boxBorder(104,11,7,1,a,1,1);
    boxBorder(112,11,4,1,a,1,1);
    boxBorder(117,11,5,1,a,1,1);
    boxBorder(123,11,3,1,a,1,1);
    boxBorder(88,12,4,1,a,1,1);
    boxBorder(93,12,6,1,a,1,1);
    boxBorder(100,12,4,1,a,1,1);
    boxBorder(105,12,5,1,a,1,1);
    boxBorder(111,12,4,1,a,1,1);
    boxBorder(116,12,6,1,a,1,1);
    boxBorder(123,12,4,1,a,1,1);
    boxBorder(87,13,5,1,a,1,1);
    boxBorder(93,13,6,1,a,1,1);
    boxBorder(101,13,3,1,a,1,1);
    boxBorder(105,13,5,1,a,1,1);
    boxBorder(111,13,3,1,a,1,1);
    boxBorder(116,13,6,1,a,1,1);
    boxBorder(123,13,6,1,a,1,1);
    boxBorder(85,14,8,1,a,1,1);
    boxBorder(94,14,7,1,a,1,1);
    boxBorder(102,14,11,1,a,1,1);
    boxBorder(114,14,7,1,a,1,1);
    boxBorder(122,14,9,1,a,1,1);
	boxBorder(84,15,9,1,a,1,1);
	boxBorder(95,15,6,1,a,1,1);
	boxBorder(103,15,9,1,a,1,1);
	boxBorder(114,15,6,1,a,1,1);
	boxBorder(122,15,10,1,a,1,1);
	boxBorder(83,16,6,1,a,1,1);
	boxBorder(83,16,6,1,a,1,1);
	boxBorder(90,16,5,1,a,1,1);
	boxBorder(97,16,6,1,a,1,1);
	boxBorder(105,16,5,1,a,1,1);
	boxBorder(112,16,6,1,a,1,1);
	boxBorder(120,16,5,1,a,1,1);
	boxBorder(126,16,7,1,a,1,1);    
	boxBorder(83,17,7,1,a,1,1);
	boxBorder(92,17,5,1,a,1,1);
	boxBorder(101,17,3,1,a,1,1);
	boxBorder(106,17,3,1,a,1,1);
	boxBorder(111,17,3,1,a,1,1);
	boxBorder(118,17,5,1,a,1,1);
	boxBorder(125,17,8,1,a,1,1);
	boxBorder(83,18,8,1,a,1,1);
	boxBorder(103,18,3,1,a,1,1);
	boxBorder(107,18,1,1,a,1,1);
	boxBorder(109,18,3,1,a,1,1);
	boxBorder(124,18,9,1,a,1,1);
	boxBorder(82,19,20,1,a,1,1);
	boxBorder(103,19,9,1,a,1,1);
	boxBorder(113,19,21,1,a,1,1);
	boxBorder(82,20,3,1,a,1,1);	
	boxBorder(86,20,16,1,a,1,1);
	boxBorder(106,20,3,1,a,1,1);
	boxBorder(113,20,16,1,a,1,1);
	boxBorder(130,20,4,1,a,1,1);
	boxBorder(82,21,3,1,a,1,1);	
	boxBorder(87,21,17,1,a,1,1);
	boxBorder(106,21,3,1,a,1,1);
	boxBorder(111,21,17,1,a,1,1);
	boxBorder(130,21,4,1,a,1,1);	
	boxBorder(83,22,14,1,a,1,1);	
	boxBorder(99,22,5,1,a,1,1);
	boxBorder(106,22,3,1,a,1,1);
	boxBorder(111,22,5,1,a,1,1);
	boxBorder(118,22,15,1,a,1,1);	
	boxBorder(83,23,8,1,a,1,1);	
	boxBorder(102,23,2,1,a,1,1);
	boxBorder(106,23,3,1,a,1,1);
	boxBorder(111,23,2,1,a,1,1);
	boxBorder(124,23,9,1,a,1,1);	
	boxBorder(84,24,8,1,a,1,1);			
	boxBorder(96,24,3,1,a,1,1);		
	boxBorder(103,24,2,1,a,1,1);		
	boxBorder(106,24,3,1,a,1,1);		
	boxBorder(110,24,2,1,a,1,1);		
	boxBorder(116,24,3,1,a,1,1);		    
    boxBorder(123,24,8,1,a,1,1);	
    boxBorder(85,25,6,1,a,1,1);	
    boxBorder(95,25,5,1,a,1,1);
	boxBorder(104,25,7,1,a,1,1);	
	boxBorder(115,25,5,1,a,1,1);		
	boxBorder(124,25,6,1,a,1,1);
	boxBorder(82,25,1,1,a,1,1);	
	boxBorder(132,25,1,1,a,1,1);
	boxBorder(82,26,3,1,a,1,1);
	boxBorder(86,26,4,1,a,1,1);
	boxBorder(92,26,10,1,a,1,1);	
    boxBorder(104,26,7,1,a,1,1);
    boxBorder(113,26,10,1,a,1,1);
	boxBorder(125,26,4,1,a,1,1);    
    boxBorder(130,26,3,1,a,1,1);
    boxBorder(82,27,3,1,a,1,1);
    boxBorder(87,27,2,1,a,1,1);
    boxBorder(92,27,4,1,a,1,1);
    boxBorder(98,27,4,1,a,1,1);
    boxBorder(104,27,7,1,a,1,1);
    boxBorder(113,27,4,1,a,1,1);
    boxBorder(119,27,4,1,a,1,1);
    boxBorder(126,27,2,1,a,1,1);
    boxBorder(130,27,3,1,a,1,1);
    boxBorder(83,28,4,1,a,1,1);
    boxBorder(89,28,6,1,a,1,1);
    boxBorder(99,28,17,1,a,1,1);
    boxBorder(120,28,6,1,a,1,1);
    boxBorder(128,28,4,1,a,1,1);
    boxBorder(85,29,9,1,a,1,1);
    boxBorder(96,29,3,1,a,1,1);
    boxBorder(100,29,15,1,a,1,1);
    boxBorder(116,29,3,1,a,1,1);
    boxBorder(121,29,10,1,a,1,1);
    boxBorder(86,30,6,1,a,1,1);
    boxBorder(96,30,4,1,a,1,1);
    boxBorder(101,30,13,1,a,1,1);
    boxBorder(115,30,4,1,a,1,1);
    boxBorder(123,30,7,1,a,1,1);
    boxBorder(83,31,3,1,a,1,1);
    boxBorder(98,31,2,1,a,1,1);
    boxBorder(101,31,13,1,a,1,1);
    boxBorder(115,31,2,1,a,1,1);
    boxBorder(130,31,3,1,a,1,1);
    boxBorder(83,32,8,1,a,1,1);
    boxBorder(98,32,2,1,a,1,1);
    boxBorder(102,32,11,1,a,1,1);
    boxBorder(115,32,2,1,a,1,1);
    boxBorder(124,32,9,1,a,1,1);
    boxBorder(85,33,6,1,a,1,1);
    boxBorder(98,33,2,1,a,1,1);
    boxBorder(103,33,3,1,a,1,1);
    boxBorder(107,33,1,1,a,1,1);
    boxBorder(109,33,3,1,a,1,1);
    boxBorder(115,33,2,1,a,1,1);
    boxBorder(124,33,6,1,a,1,1);
    boxBorder(86,34,5,1,a,1,1);
    boxBorder(98,34,2,1,a,1,1);
    boxBorder(101,34,1,1,a,1,1);
    boxBorder(103,34,3,1,a,1,1);
    boxBorder(109,34,3,1,a,1,1);
    boxBorder(113,34,1,1,a,1,1);
    boxBorder(115,34,2,1,a,1,1);
    boxBorder(124,34,5,1,a,1,1);
    boxBorder(97,35,5,1,a,1,1);   
    boxBorder(103,35,2,1,a,1,1);   
    boxBorder(107,35,1,1,a,1,1);   
    boxBorder(110,35,2,1,a,1,1);   
    boxBorder(113,35,5,1,a,1,1);   
    boxBorder(97,36,4,1,a,1,1);   
    boxBorder(103,36,2,1,a,1,1);   
    boxBorder(106,36,3,1,a,1,1);   
    boxBorder(110,36,2,1,a,1,1);   
    boxBorder(114,36,4,1,a,1,1);   
    boxBorder(124,36,2,1,a,1,1);   
    boxBorder(128,36,1,1,a,1,1);   
    boxBorder(86,36,1,1,a,1,1);
    boxBorder(89,36,2,1,a,1,1);
	boxBorder(87,37,3,1,a,1,1);
	boxBorder(91,37,2,1,a,1,1);
    boxBorder(97,37,21,1,a,1,1);
    boxBorder(122,37,2,1,a,1,1);
    boxBorder(125,37,3,1,a,1,1);
    boxBorder(87,38,2,1,a,1,1);
    boxBorder(91,38,2,1,a,1,1);
    boxBorder(103,38,9,1,a,1,1);
    boxBorder(122,38,2,1,a,1,1);
    boxBorder(126,38,2,1,a,1,1);
    boxBorder(88,39,4,1,a,1,1);
    boxBorder(94,39,27,1,a,1,1);
    boxBorder(123,39,4,1,a,1,1);
    boxBorder(89,40,2,1,a,1,1);
    boxBorder(93,40,4,1,a,1,1);
    boxBorder(98,40,3,1,a,1,1);
    boxBorder(103,40,2,1,a,1,1);
    boxBorder(110,40,2,1,a,1,1);
    boxBorder(114,40,3,1,a,1,1);
    boxBorder(118,40,4,1,a,1,1);
    boxBorder(124,40,2,1,a,1,1);
    boxBorder(93,41,3,1,a,1,1);
    boxBorder(97,41,2,1,a,1,1);
    boxBorder(101,41,3,1,a,1,1);
    boxBorder(105,41,5,1,a,1,1);
    boxBorder(111,41,3,1,a,1,1);
    boxBorder(116,41,2,1,a,1,1);
    boxBorder(119,41,3,1,a,1,1);
    boxBorder(93,42,3,1,a,1,1);
    boxBorder(97,42,1,1,a,1,1);
    boxBorder(101,42,2,1,a,1,1);
    boxBorder(104,42,7,1,a,1,1);
    boxBorder(112,42,2,1,a,1,1);
    boxBorder(117,42,1,1,a,1,1);
    boxBorder(119,42,3,1,a,1,1);
    boxBorder(93,43,6,1,a,1,1);
    boxBorder(101,43,1,1,a,1,1);
    boxBorder(103,43,9,1,a,1,1);
    boxBorder(113,43,1,1,a,1,1);
    boxBorder(116,43,6,1,a,1,1);
    boxBorder(89,44,6,1,a,1,1);
    boxBorder(97,44,21,1,a,1,1);
    boxBorder(120,44,6,1,a,1,1);
    boxBorder(89,45,3,1,a,1,1);
    boxBorder(93,45,3,1,a,1,1);
    boxBorder(99,45,2,1,a,1,1);
    boxBorder(114,45,2,1,a,1,1);
	boxBorder(119,45,3,1,a,1,1);
	boxBorder(123,45,3,1,a,1,1);
	boxBorder(91,46,33,1,a,1,1);
	boxBorder(95,47,4,1,a,1,1);
	boxBorder(103,47,9,1,a,1,1);
	boxBorder(116,47,4,1,a,1,1);
	boxBorder(89,48,1,1,a,1,1);	
	boxBorder(94,48,6,1,a,1,1);
	boxBorder(103,48,3,1,a,1,1);
	boxBorder(109,48,3,1,a,1,1);
	boxBorder(115,48,6,1,a,1,1);
	boxBorder(125,48,1,1,a,1,1);
	boxBorder(90,49,7,1,a,1,1);
	boxBorder(99,49,1,1,a,1,1);
	boxBorder(103,49,3,1,a,1,1);
	boxBorder(109,49,3,1,a,1,1);
	boxBorder(115,49,1,1,a,1,1);
	boxBorder(118,49,7,1,a,1,1);
	boxBorder(90,50,7,1,a,1,1);
	boxBorder(100,50,15,1,a,1,1);
	boxBorder(118,50,7,1,a,1,1);
    
    

    sleep(3);
    system("cls");

 }

void insert()
{
	int c[SSIZE];
	char k[SSIZE];	
	int id, semester;
	char name[30];
	char fakultas[30];
	char universitas [30];
	FILE *fptr;
	node *p;
	
	printf("Enter  Name, ID, Semester, Fakultas, dan Universitas : \n");
	scanf("%s",name);
	printf("Name is : %s \n",name);
	printf("Name recorded, continue\n");
	
	while ((fgets(k, SSIZE, stdin)) != NULL){
	if ((sscanf(k, "%d", &id) != 1)) {
            printf("That is not a number. Try again.\n");
            continue;
        }
        printf("ID is %d\n",id);
        printf("ID recorded, continue\n\n");
        break;
    }
		while ((fgets(k, SSIZE, stdin)) != NULL){
	if ((sscanf(k, "%d", &semester) != 1)) {
            printf("That is not a number. Try again.\n\n");
            continue;
        }
        printf("semester is %d\n\n",semester);
        break;
    }
	scanf("%s",fakultas);
	printf("Fakultas is %s\n\n",fakultas );
	scanf("%s",universitas);
	printf("universitas is %s\n\n",universitas);
	
		FILE *out=fopen("Data.csv","a");
		
    		fprintf(out,"%d,", id);
                	fprintf(out,"%s,", name);
                		fprintf(out,"%d,", semester);
                			fprintf(out,"%s,", fakultas);
                				fprintf(out,"%s\n", universitas);
                fclose(out);

	p=get_node();
	p->id=id;
	p->semester=semester;
	strcpy(p->name,name);
	strcpy(p->fakultas,fakultas);
	strcpy(p->universitas,universitas);
	p->link=NULL;
	if(header==NULL)
		header=p;
	else
	{
		p->link=header;
		header=p;
	}
		
		printf("\nData Saved, Press Any Key to Continue");
		getch();
	     system("cls");
}

void del()
{
	int id;
	int delete;
	node *temp;
	printf("1.Delete the last input\n");
	printf("2.Delete input to certain number\n");
	scanf("%d",&delete);
	if(delete==1){
	
	if(header==NULL)
	{
		printf("Empty List\n");
		return;
	}
	else
	{
		temp=header;
		header=header->link;
		printf("The following record is deleted : %d %s %d %s %s\n",temp->id,temp->name,temp->semester, temp->fakultas, temp->universitas);
		free(temp);
	}
		printf("\nPress Any Key to Continue");
		getch();
	    system("cls");
}
	else if(delete==2)
	{
		printf("Enter the ID of the student to be deleted\n");
		scanf("%d",&id);
	for(temp=header;temp!=NULL;temp=temp->link)
	{
		
	
	if(header==NULL)
	{
		printf("Empty List\n");
		return;
	}
	else if (id==temp->id)
	{
		temp=header;
		header=header->link;
		printf("The following record is deleted : %d %s %d %s %s\n",temp->id,temp->name,temp->semester, temp->fakultas, temp->universitas);
		free(temp);
	}
	}
		printf("\nPress Any Key to Continue");
		getch();
	    system("cls");
	
}
else
{
	return 0;
}
}

void display()
{
	node *temp;
	printf("ID   Name      Semester		Fakultas 	Universitas \n");
		
	if(header==NULL)
	{
		printf("Empty List\n");
		getch();
		system("cls");
		return;
	}
	else
	{
	for(temp=header;temp!=NULL;temp=temp->link)
	printf("%-4d %-10s %d \t\t%-4s \t\t%-4s\n",temp->id,temp->name,temp->semester, temp->fakultas, temp->universitas);
	printf("\nPress Any Key to Continue");
	getch();
	system("cls");
	}
}
	
void search()
{
	int id;
	node *temp;
	printf("Enter the ID of student to be searched : ");
	scanf("%d",&id);
	for(temp=header;temp!=NULL;temp=temp->link)
	{
		if(id==temp->id)
		{
			printf("ID   Name      Semester		Fakultas 	Universitas\n");
			printf("%-4d %-10s %d \t\t%s \t\t%s\n",temp->id,temp->name,temp->semester, temp->fakultas, temp->universitas );
			printf("\nPress Any Key to Continue");
			getch();
			system("cls");
			return;
		}

	}
	printf("Student Record Not Found !!!\n");
	printf("\nPress Any Key to Continue");
	getch();
	system("cls");
}

void display2()
{
	FILE *fptr;
   char c;

   fptr=fopen("Data.csv","r");
    if (fptr == NULL) 
    { 
        printf("Cannot open file \n"); 
        printf("\nPress Any Key to Continue");
		getch();
		system("cls");
        return; 
    } 
  
    c = fgetc(fptr); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fptr); 
    } 

   fclose(fptr);
   	printf("\nPress Any Key to Continue");
	getch();
	system("cls");
   return;
}

void delete2() 
{ 
   	if (remove("Data.csv") == 0) 
      	printf("Deleted successfully"); 
   	else
     	 printf("Unable to delete the file"); 
       
    printf("\nPress Any Key to Continue");
	getch();
	system("cls");
   	return; 
} 

void change() 
{ 
	char a[100];
	FILE *fptr;
	remove("Password.txt");
	FILE *out=fopen("Password.txt", "a");
	
	printf("Insert New Password:\n");
	scanf("%s", a);
   	fprintf(out,"%s", a);
   	fclose(out);

    printf("\nRun the Program Again to Continue");
	getch();
   	return; 
} 

void exit2(){

    exit(0);
	return 0;
    
}

void menu()
{
	int choice;
		time_t start, stop;
		time_t now;
  		time(&now);
  		start = time(NULL);
  		printf("%s", ctime(&now));
		printf("\nChoose :\n1 - Insert Student Record\n2 - Delete Student Record\n3 - Search Student Record\n4 - Display Student Records\n");
		printf("5 - Display Saved File\n6 - Delete Saved File\n7 - Change Password\n8 - Exit\n\n");
		scanf("%d",&choice);
		stop = time(NULL);
		if(stop-start > 10) { 
		system("cls");
        printf("\Session Timed Out\nRun the Program Again to Continue");
		getchar();
		exit2();}
       	else{
		switch(choice)
		{
		case 1 : system("cls");insert();break;
		case 2 : system("cls");del();break;
		case 3 : system("cls");search();break;
		case 4 : system("cls");display();break;
		case 5 : system("cls");display2();break;
		case 6 : system("cls");delete2();break;
		case 7 : system("cls");change();exit(0);break;
		case 8 : system("cls");exit2();break;}
		}

		
}



int main()
{
	fullscreen();
	logo();
	char username[10],password[10]; 
	char str[100];
	FILE *fptr;
	char* filename = "Password.txt";
	fptr=fopen(filename,"r");
	fscanf(fptr,"%s ",str);


        
    fclose(fptr);
	time_t now;
  	time(&now);
  	printf("%", ctime(&now));
  	printf("\n\t\t\t\t   Made by :");
    printf("\n\t\t     Leonardus Kevin & Lunnardo Soekarno Lukias");
	printf("\n\t\t\t\t  Login Screen");
	printf("\n\t\t\t      Enter Your Identity");
	printf("\n\n\n\t\tUsername: ");
	scanf("%s",username);
	printf("\n\t\tPassword: ");
	int i;
	i=0;
	do
	{
		password[i] = getch();
		if(password[i] == 13 )
		{
			break;
		}
		else if(password[i]==8 && i>0)
		{
			printf("%c%c%c",8,32,8);
			i--;
		}
		else
		{
			printf("*");
			i++;
		}
	}while(password[i]!=13);
	password[i] = '\0';

if(((strcasecmp(username,"leonardus"))==0)&&((strcasecmp(password, str)==0)))
{
	system("cls");
    while(1)
{	
	for(;;) 
	{

		menu();
	     
	}

	return 0;
}
}
else {
    printf("\n\t\tLogin Failed");
}


return 1;

}



