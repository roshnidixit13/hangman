#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<graphics.h>
#include<stdlib.h>
#include<time.h>
int map(char [],char []);
//void man1();
//void man2();
//void man3();
//void man4();
//void man5();
 int gd=DETECT,gm;
int main()
{
	int q;
	char op,ch,optn;
	char name[10],gstr[10];
	 int i,j,k;
// int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
// maxX=getmaxx();
 game:
 for(i=0;i<100;i++)
 {
 cleardevice();
 setbkcolor(RED);
 setcolor(YELLOW);
  settextstyle(BOLD_FONT,HORIZ_DIR,3);
  outtextxy(0+i,0,"WELCOME TO THE GAME");
  delay(30);
//  cleardevice();
 }
// cleardevice();
 settextstyle(BOLD_FONT,HORIZ_DIR,4);

 outtextxy(50,50,"MYSTERY NAME GAME");
 //delay(30);

 settextstyle(3,HORIZ_DIR,3);

 outtextxy(0,130,"1.Press 1 to proceed to rules menu.");
 //textcolor(BLUE);
  outtextxy(0,160,"2.Press 2 to start the game.");
 settextstyle(3,HORIZ_DIR,3);
 outtextxy(0,190,"3.Press 3 to exit.");
// printf("\n\n2.Press 2 to exit.");
// scanf("%d",&ch);
 ch=getch();
// cleardevice();
 switch(ch)
 {
  case '1':
  cleardevice();
  setbkcolor(BLUE);
  setcolor(WHITE);
  settextstyle(3,HORIZ_DIR,3);
  outtextxy(180,0,"*****RULE BOOK*****");
  settextstyle(6,HORIZ_DIR, 1);
  outtextxy(30,70,"1.Number of chances will be given to participant.");
  outtextxy(30,100,"2.Hint relted to the word will be provided.");
  outtextxy(30,130,"3.Player has to guess name character by character.");
  outtextxy(30,160,"4.If the guesses wrong then pole will start building.");
  outtextxy(30,190,"5.Characters shouuld be entered in capital case.");
  outtextxy(30,220,"6.Enter the characters in capital case.");
  outtextxy(30,250,"7.Figure will start building from the base.");
  outtextxy(30,280,"8.Same characters should not be entered.");
  delay(50);
  outtextxy(50,310,"Press 9 to start the game");
  outtextxy(50,340,"Press 1 to start again");
  outtextxy(50,370,"Press 0 to exit");
  q=getch();
  if(q=='9')
  {
    goto roshni;
  }
  if(q=='1')
  {
   goto game;
  }
  if(q=='0')
  {
   exit(0);
  }
  /*settextstyle(8,HORIZ_DIR,3);
  outtextxy(50,200,"Press 1 to have the procedure of the game.");
  outtextxy(50,220,"Press 2 to exit.");
  optn=getch();
  switch(optn)
  {
	case '1':
	cleardevice();
	setbkcolor(GREEN);
	setcolor(WHITE);
	settextstyle(3,HORIZ_DIR,3);
	outtextxy(180,0,"PROCEDURE");
	settextstyle(4,HORIZ_DIR,2);
	outtextxy(20,200,"1.Enter the characters in capital case.");
	outtextxy(20,220,"2.Figure will start building from the base.");
	outtextxy(20,240,"3.Same characters should not be entered.");
	outtextxy(20,260,"4.All the general terms are given.");
	printf("press 5 to continue");
	scanf("%d",&q);

	if(q==5)
	{
	goto sagar;
	}

	break;
	case '2':
	exit
	();
	default:
	printf("Invalid option ");
	break;
  } */

  break;
  case 2:
  goto roshni;
  break;
  case 3:
  exit(0);
  break;
	  default:
  printf("Invalid!!!");
  break;
 }
// cleardevice();
// line (340,0,340,600);

// getch();
 //closegraph();
//}
   //	int gd=DETECT
 do
 {
	 roshni:
	 cleardevice();
	  line (340,0,340,600);
//	  gotoxy(5,5);
  //	  printf("\nEnter your choice : ");
  //	 scanf("%d",&k);

  //	srand(time(NULL));
   /*	for(i=0;i<5;i++)
	{
	  cal[i]=rand()%4;
	  for(j=0;j<5;j++)
	  {
	    if(i!=j)
	    {
		 while(cal[i]==cal[j])
		 {
		  cal[i]=rand()%4;
		 }
	    }
 }   */
   //	k=random();
//	while(k<=5)
  //	{
    //	k=rand();
   //	}
	k=rand()%15;
	textcolor(GREEN);
	switch(k)
	{
	    case 1:
//	    gotoxy(5,5);
	  //  printf("Mobile operating system.");
		    settextstyle(2,HORIZ_DIR,2);
		    outtextxy(10,10,"Mobile operating system.");
	    strcpy(name,"ANDROID");
	    strcpy(gstr,"*******");
	    map(name,gstr);

	    break;
	    case 2:
  //	    gotoxy(5,5);
	    printf("Self contained program that performs specific function.");
	    strcpy(name,"APPLICATION");
	    strcpy(gstr,"***********");
	    map(name,gstr);
	    break;
	    case 3:
    //	    gotoxy(5,5);
	    printf("Group of two or more computers linked together.");
	    strcpy(name,"NETWORK");
	    strcpy(gstr,"*******");
	    map(name,gstr);
	    break;
	    case 4:
	 //   gotoxy(5,5);
	    printf("Any device that holds computer data.");
	    strcpy(name,"MEMORY");
	    strcpy(gstr,"******");
	    map(name,gstr);
	    break;
	    case 5:
	  //  gotoxy(5,5);
	    printf("It is an organized collection of data..");
	    strcpy(name,"DATABASE");
	    strcpy(gstr,"********");
	    map(name,gstr);
	    break;
	    case 6:
	 //   gotoxy(5,5);
	    printf("Process of monitoring ans capturing\npackets of data during transmission.");
	    strcpy(name,"SNIFFING");
	    strcpy(gstr,"********");
	    map(name,gstr);
	    break;
	    case 7:
	 //   gotoxy(5,5);
	    printf("It is a network security system to monitor\nincoming and outgoing network trafffic.");
	    strcpy(name,"FIREWALL");
	    strcpy(gstr,"********");
	    map(name,gstr);
	    break;
	    case 8:
  //	    gotoxy(5,5);
	    printf("A series of microprocessors.");
	    strcpy(name,"PENTIUM");
	    strcpy(gstr,"*******");
	    map(name,gstr);
	    break;
	    case 9:
  //	    gotoxy(5,5);
	    printf("An interpreted scripting language");
	    strcpy(name,"PYTHON");
	    strcpy(gstr,"******");
	    map(name,gstr);
	    break;
	    case 10:
    //	    gotoxy(5,5);
	    printf("An operating  system");
	    strcpy(name,"UNIX");
	    strcpy(gstr,"****");
	    map(name,gstr);
	    break;
	    case 11:
	 //   gotoxy(5,5);
	    printf("A piece of program that spreads by making copies");
	    strcpy(name,"VIRUS");
	    strcpy(gstr,"*****");
	    map(name,gstr);
	    break;
	    case 12:
	 //   gotoxy(5,5);
	    printf("A packet of information that travels\n between browser and web server.");
	    strcpy(name,"COOKIE");
	    strcpy(gstr,"******");
	    map(name,gstr);
	    break;
	    case 13:
	  //  gotoxy(5,5);
	    printf("A wireless communication technology.");
	    strcpy(name,"BLUETOOTH");
	    strcpy(gstr,"*********");
	    map(name,gstr);
	    break;
	    case 14:
  //	    gotoxy(5,5);
	    printf("A device used to connect one computer to another.");
	    strcpy(name,"MODEM");
	    strcpy(gstr,"*****");
	    map(name,gstr);
	    break;
	    case 15:
    //	    gotoxy(5,5);
	    printf("A program that converts source code to\n an executable code.");
	    default:
	    printf("\nInvalid choice");
	    break;
	}
	setbkcolor(MAGENTA);
	settextstyle(10,HORIZ_DIR,3);
	outtextxy(100,200,"Do you want to continue???");
	outtextxy(120,220,"Press Y for yes and N for no...: ");
	op=getch();
	}
	while(op=='y'||op=='Y');
  closegraph();
  return(0);
}

 int  map(char name[],char gstr[])
 {
	 //initgraph(&gd,&gm,"C:\\TC\\BGI");
	 int num=-1,i,flag=0,c,count=0,j;
	 char guess[10];
	 initgraph(&gd,&gm,"C:\\TC\\BGI");
	 //	 setbkcolor(RED);
 //line (340,0,340,600);
	 do
	 {

		 setbkcolor(RED);
	 line (340,0,340,600);
	 settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
//	  clrscr();
	  num++;
	gotoxy(5,5);	  printf("Mystery name : %s",gstr);
	 gotoxy(5,7);	  printf("GUESS : %d",10-num);
	  gotoxy(5,9);	  printf("Guess : ");
	  fflush(stdin);


	  gets(guess);
	  for(i=0;i<10;i++)
	  {
		 // guess[i]=toupper(guess[i]);
		  if((strlen(guess))==1)     //checks for the single character
		  {
		   for(i=0;i<10;i++)
		   {
			if(name[i]==guess[0])
			{
				gstr[i]=guess[0];
				flag=1;
			}
		   }
			if(flag==1)

			{
			gotoxy(5,11);
			  printf("You got it!!!!!    ");
			    flag=0;

			   if( ( strcmp(name,gstr) ) == 0)
				  {
				gotoxy(5,20);   printf("You win !!!");
			    gotoxy(5,22);  printf("Mystery name is ");
			   gotoxy(7,22); printf("%s",name);
				 exit(0);
			}      }

			else
			{
			gotoxy(5,11);

		   printf("You missed it..");
			    count++;
			    //	 printf("\n");
				 //	    printf("\n");
				//    printf("\n");
				//	printf("\n");
				 //	    printf("\n");
			    //	    printf("\n");
			  //		printf("\n");


			    if(count==1)
			    {  /*  printf("\n");
				    printf("\n");
				    printf("\n");
					printf("\n");
				    printf("\n");
				    printf("\n");
					printf("\n");*/
					line(600,400,400,400);
					delay(100);
					//	 cleardevice();

	    //gotoxy(25,20);
	  //	    outtextxy(350,400,"__________________________");
				  //  man1();
			    }


			   if(count==2)

			    {
				    //	line(600,400,400,400);
				line(400,400,400,100);
				delay(100);

				 }

				   // man2();
			    if(count==3)
			    {   //cleardevice();
				//   outtextxy(350,400,"__________________________");
				  // line(350,400,350,300);
				    //	man3();
				    line(400,100,550,100);
				delay(100);
			    }
			   if(count==4)
			   {
				line(550,100,550,150);
				delay(100);
			   }
			  if(count==5)
			   {
				circle(550,170,20);
				delay(100);
			   }
			   if(count==6)
			   {
				line(550,190,550,250);
				delay(100);
			    }
			    if(count==7)
			    {
				  line(550,250,530,270);
				 line(550,245,530,265);
				  delay(100);
			    }
			    if(count==8)
			    {
				line(550,250,570,270);
				line(550,245,570,265);
				delay(100);
			    }
			    if(count==9)
			    {
				 line(550,220,530,200);
				 line(550,225,530,205);
				 delay(100);
			    }
			    if(count==10)
			    {
				 line(550,220,570,200);
				 line(550,225,570,205);
				 delay(100);
			    }
			    } }

		 else            //complete string check

		 {


			 if((strcmp(name,guess))==0)
			 { // vaishali:
		 gotoxy(5,18);	  printf("You hit the jackpot....");
		 gotoxy(5,11);	   printf("You got it..    ");
		 gotoxy(5,23);	   printf("Mystery name is ");
		    gotoxy(21,23);   printf("%s",guess);
			   delay(4000);
			   exit(0);
			  }
			  else
			  {
		 gotoxy(5,11);		   printf("You missed it..");
			gotoxy(5,18);	   printf("Game over...");
			   delay(4000);
			   exit(0);
			  }
		 }

	   }	}while(num<9);
		if(flag==1)
		{
		 gotoxy(5,18);	   printf("You win the game..  ");
		}
		else
		{
		 gotoxy(5,24);	   printf("Game over...You loose..");

		 }
		 closegraph();
	    return(0);
}


