/* write a menudriven program with function
date:21/3/2022*/
#include<stdio.h>
# include<conio.h>
void addition();
void subtraction();
int division();
int modulus(int,int);
int menu();
void main()
{
    int c,x,y,div;
    char yn;
    clrscr();
    do
    {
    c=menu();
    switch(c)
    {
	 case 1:
		addition();
		break;

	 case 2:
		printf("\n Enter two value:");
		scanf("%d %d",&x,&y);
		subtraction(x,y);
		break;

	 case 3:
		div=division();
		printf("\n division is %d",div);
		break;

	 case 4:
		printf("Enter two value:");
		scanf("%d %d",&x,&y);
		div=modulus(x,y);
		printf("modulus of %d %d is %d",x,y,div);
		break;

	 case 5:
		exit(0);

	 default:
		 printf("\n Invalid choice.please Enter no. between 1 to 5");

    }
    printf("\n\t Do you want to continue?(yes=Y/y ,no=N/n):");
    flushall();
    scanf("%c",&yn);
    }while(yn=='y'|| yn=='Y');
    getch();
}
    int menu()
    {
	  int choise;
	  printf("\n menu");
	  printf("\n------------------------------------------------");
	  printf("\n 1.addition \n 2.subtraction \n 3.division \n 4.modulus \n 5.exit");
	  printf("\n-------------------------------------------------");
	  printf("\n Enter your choise:");
	  scanf("%d",&choise);
	  return(choise);
     }
     void addition()
     {
	int x,y;
	printf("Enter two value:");
	scanf("%d %d",&x,&y);
	printf("\n addition of %d & %d is %d",x,y,x+y);
     }
     void subtraction(int x,int y)
     {
	printf("\n subtraction of %d & %d is %d",x,y,x-y);
     }
     int division()
     {
	int x,y;
	printf("Enter two value:");
	scanf("%d %d",&x,&y);
	return(x/y);
     }
     int modulus(int x,int y)
     {
	return(x%y);
     }
