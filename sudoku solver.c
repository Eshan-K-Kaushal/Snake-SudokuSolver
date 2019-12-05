#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include<time.h>
#include<ctype.h>
#include <time.h>
#include <windows.h>
#include <process.h>

int size;
struct position;
int bend_no;
int Scoreonly();
char key;
void Boarder();
void Right();
void loading();
void record();
int life;
void Delay(long double);
void move();
void Down();
int scr();
void goTo(int x, int y);
void Bend();
void record();
void Food();
void Print();
void Left();
void Up();
int length;
void ExitGame();
int Scoreonly();
int lif();
void GoTo(int x,int y);



//int solve(int ,int );
//int inputvalue(int , int ,int);

int a[9][9],b[9][9];

b[9][9] ={{3, 0, 6, 5, 0, 8, 4, 0, 0}, 
          {5, 2, 0, 0, 0, 0, 0, 0, 0}, 
     	  {0, 8, 7, 0, 0, 0, 0, 3, 1}, 
          {0, 0, 3, 0, 1, 0, 0, 8, 0}, 
          {9, 0, 0, 8, 6, 3, 0, 0, 5}, 
		  {0, 5, 0, 0, 9, 0, 6, 0, 0}, 
          {1, 3, 0, 0, 0, 0, 2, 5, 0}, 
          {0, 0, 0, 0, 0, 0, 0, 7, 4}, 
		  {0, 0, 5, 2, 0, 6, 3, 0, 0}};


//a[]-sudoku,b[]-solved

#define LEFT 75
#define RIGHT 77
#define UP 72
#define DOWN 80

void display(int sudokuBoard[][9])
{
   //Row 1
        printf( "1  ");
        printf("%d",sudokuBoard[0][0]);
        printf(" %d", sudokuBoard[1][0]);
        printf(" %d", sudokuBoard[2][0]);
        printf("|");
        printf("%d", sudokuBoard[3][0]);
        printf(" %d",sudokuBoard[4][0]);
        printf(" %d", sudokuBoard[5][0]);
        printf("|");
        printf("%d", sudokuBoard[6][0]);
        printf(" %d", sudokuBoard[7][0]);
        printf(" %d",  sudokuBoard[8][0]);
        printf("\n");

   //Row 2
        printf( "1  ");
        printf("%d",sudokuBoard[0][1]);
        printf(" %d" , sudokuBoard[1][1]);
        printf(" %d" , sudokuBoard[2][1]);
        printf("|");
        printf("%d", sudokuBoard[3][1]);
        printf(" %d",sudokuBoard[4][1]);
        printf(" %d", sudokuBoard[5][1]);
        printf("|");
        printf("%d", sudokuBoard[6][1]);
        printf(" %d", sudokuBoard[7][1]);
        printf(" %d",  sudokuBoard[8][1]);
        printf("\n");

   //Row 3
        printf( "1  ");
        printf("%d",sudokuBoard[0][2]);
        printf(" %d" , sudokuBoard[1][2]);
        printf(" %d" , sudokuBoard[2][2]);
        printf("|");
        printf("%d", sudokuBoard[3][2]);
        printf(" %d",sudokuBoard[4][2]);
        printf(" %d", sudokuBoard[5][2]);
        printf("|");
        printf("%d", sudokuBoard[6][2]);
        printf(" %d", sudokuBoard[7][2]);
        printf(" %d",  sudokuBoard[8][2]);
        printf("\n");

   //Visual Separator
        printf("   -----+-----+-----\n");


   //Row 4
        printf( "1  ");
        printf("%d",sudokuBoard[0][3]);
        printf(" %d" , sudokuBoard[1][3]);
        printf(" %d" , sudokuBoard[2][3]);
        printf("|");
        printf("%d", sudokuBoard[3][3]);
        printf(" %d",sudokuBoard[4][3]);
        printf(" %d", sudokuBoard[5][3]);
        printf("|");
        printf("%d", sudokuBoard[6][3]);
        printf(" %d", sudokuBoard[7][3]);
        printf(" %d",  sudokuBoard[8][3]);
        printf("\n");

   //Row 5
        printf( "1  ");
        printf("%d",sudokuBoard[0][4]);
        printf(" %d" , sudokuBoard[1][4]);
        printf(" %d" , sudokuBoard[2][4]);
        printf("|");
        printf("%d", sudokuBoard[3][4]);
        printf(" %d",sudokuBoard[4][4]);
        printf(" %d", sudokuBoard[5][4]);
        printf("|");
        printf("%d", sudokuBoard[6][4]);
        printf(" %d", sudokuBoard[7][4]);
        printf(" %d",  sudokuBoard[8][4]);
        printf("\n");

   //Row 6
        printf( "1  ");
        printf("%d",sudokuBoard[0][5]);
        printf(" %d" , sudokuBoard[1][5]);
        printf(" %d" , sudokuBoard[2][5]);
        printf("|");
        printf("%d", sudokuBoard[3][5]);
        printf(" %d",sudokuBoard[4][5]);
        printf(" %d", sudokuBoard[5][5]);
        printf("|");
        printf("%d", sudokuBoard[6][5]);
        printf(" %d", sudokuBoard[7][5]);
        printf(" %d",  sudokuBoard[8][5]);
        printf("\n");
   //Visual Separator
        printf("   -----+-----+-----\n");

   //Row 7
        printf( "1  ");
        printf("%d",sudokuBoard[0][6]);
        printf(" %d" , sudokuBoard[1][6]);
        printf(" %d" , sudokuBoard[2][6]);
        printf("|");
        printf("%d", sudokuBoard[3][6]);
        printf(" %d",sudokuBoard[4][6]);
        printf(" %d", sudokuBoard[5][6]);
        printf("|");
        printf("%d", sudokuBoard[6][6]);
        printf(" %d", sudokuBoard[7][6]);
        printf(" %d",  sudokuBoard[8][6]);
        printf("\n");

   //Row 8
        printf( "1  ");
        printf("%d",sudokuBoard[0][7]);
        printf(" %d" , sudokuBoard[1][7]);
        printf(" %d" , sudokuBoard[2][7]);
        printf("|");
        printf("%d", sudokuBoard[3][7]);
        printf(" %d",sudokuBoard[4][7]);
        printf(" %d", sudokuBoard[5][7]);
        printf("|");
        printf("%d", sudokuBoard[6][7]);
        printf(" %d", sudokuBoard[7][7]);
        printf(" %d",  sudokuBoard[8][7]);
        printf("\n");

   //Row 9
        printf( "1  ");
        printf("%d",sudokuBoard[0][9]);
        printf(" %d" , sudokuBoard[1][9]);
        printf(" %d" , sudokuBoard[2][9]);
        printf("|");
        printf("%d", sudokuBoard[3][9]);
        printf(" %d",sudokuBoard[4][9]);
        printf(" %d", sudokuBoard[5][9]);
        printf("|");
        printf("%d", sudokuBoard[6][9]);
        printf(" %d", sudokuBoard[7][9]);
        printf(" %d",  sudokuBoard[8][9]);
        printf("\n");

}


void gotoxy(int x, int y)
{
 
 COORD coordinate;
 
 coordinate.X = x;
 
 coordinate.Y = y;
 
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
 
}
int inputvalue(int x, int y, int value)
{
//scanning(searching)  horizontal and vertical elements
for(int i=0; i<9 ;i++)
{
if(value == b[x][i] || value == b[i][y])
return 0;
}
//scanning(searching) square
for(int i=(x/3)*3 ; i<=((x/3)*3)+2 ; i++)
for(int j=(y/3)*3 ; j<=((y/3)*3)+2 ; j++)
if(b[i][j]==value)
return 0;
return value;
}

int solve(int x, int y)
{
int temp,i;
if(b[x][y]==0)
{
for(i=1; i<10; i++)
{
temp=inputvalue(x,y,i);
if(temp>0)
{
b[x][y]=temp;
if(x==8 && y==8)
return 1;
else if(x==8)
{if(solve(0,y+1)) return 1;}
else
{if(solve(x+1,y)) return 1;}

}
}
if(i==10)
{
if(b[x][y]!=a[x][y])
b[x][y]=0;
return 0;
}
}
if(x==8 && y==8)
return 1;
else if(x==8)
{if(solve(0,y+1)) return 1;}

else
{if(solve(x+1,y)) return 1;}
}




struct position
{
    int x;
    int y;
    int dir;
};
 
 
typedef struct position position;
 
position bend[500],body[30],head,object ;
 
int main()
{
	int option,lab;
	while(option!=3)
	{
		
	system("cls");
	printf("1.SNAKE\n2.SUDOKU\n3.EXIT\nChoose your option\n");
    scanf("%d",&option);
	if(option==1)
	{
    int label,choice,s;
    char key,ans;
	size=5,life=5;
    Print();
	printf("\nDo you want to go to Advanced Settings?(y/n) :");
	scanf("%c",&ans);
	if(ans=='y' || ans=='Y')
	{
	while(choice!= 3)
	{
	system("cls");
		label:
		printf("\nEnter your choice :\n1.Life\n2.Initial size\n3.Exit settings\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:life = lif();
			       break;
			case 2:printf("\nEnter the size(default - 5)\n");
			       scanf("%d",&size);
				   break;
			case 3:break;
			default:printf("\nEnter a valid choice!!\n");
			        goto label;
		}
	system("cls");
	}	
	}
    system("cls");
    loading();
	head.dir=RIGHT;
	head.x=25;
	head.y=20;
	Boarder();
    Food(); //to generate object coordinates initially
    bend[0]=head;
    move();   //initialing initial bend position
    }
	else if(option==2)
{
{
system("cls");
/*for(int i=0; i<9 ; i++)
for(int j=0 ; i<9 ; j++)
{
scanf("%d",&a[i][j]);
}
for(int i=0 ; i<9 ; i++)
for(int j=0 ; i<9 ; j++)
b[i][j]=a[i][j];*/

if(solve(0,0))
{
	display(b);
}

else 
printf("no solution");
printf("\nEnter any key to continue...\n");
getch();
}
}
else if(option==3)
{
	printf("\nGOODDAY!");
	exit(0);
}
else
	printf("\nInvalid choice!!");
}return 0;
}

void move()
{
    int a,i;
 
    do{
 
        Food();
        fflush(stdin);
 
        length=0;
 
        for(i=0;i<30;i++)
 
        {
 
            body[i].x=0;
 
            body[i].y=0;
 
            if(i==size)
 
            break;
 
        }
 
        Delay(size);
 
        Boarder();
 
        if(head.dir==RIGHT)
 
            Right();
 
        else if(head.dir==LEFT)
 
            Left();
 
        else if(head.dir==DOWN)
 
            Down();
 
        else if(head.dir==UP)
 
            Up();
 
        ExitGame();
 
    }while(!kbhit());
 
    a=getch();
 
    if(a==27)
 
    {
 
        system("cls");
 
        exit(0);
 
    }
    key=getch();
 
    if((key==RIGHT&&head.dir!=LEFT&&head.dir!=RIGHT)||(key==LEFT&&head.dir!=RIGHT&&head.dir!=LEFT)||(key==UP&&head.dir!=DOWN&&head.dir!=UP)||(key==DOWN&&head.dir!=UP&&head.dir!=DOWN))
 
    {
 
        bend_no++;
 
        bend[bend_no]=head;
 
        head.dir=key;
 
        if(key==UP)
 
            head.y--;
 
        if(key==DOWN)
 
            head.y++;
 
        if(key==RIGHT)
 
            head.x++;
 
        if(key==LEFT)
 
            head.x--;
 
        move();
 
    }
 
    else if(key==27)
 
    {
 
        system("cls");
 
        exit(0);
 
    }
 
    else
 
    {
 
        printf("\a");
 
        move();
 
    }
}
 
void goTo(int x, int y)
{
 
 COORD coordinate;
 
 coordinate.X = x;
 
 coordinate.Y = y;
 
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinate);
 
}
void GoTo(int x, int y)
{
    HANDLE a;
    COORD b;
    fflush(stdout);
    b.X = x;
    b.Y = y;
    a = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(a,b);
 }
void loading(){
    int row,col,r,c,q;
    goTo(36,14);
    printf("loading...");
    goTo(0,16);
    for(r=1;r<=80;r++){
    for(q=0;q<=10000000;q++);//to display the character slowly
    printf("=");}
	printf("Press any Key to continue...");
    getch();
}
void Down()
{
    int i;
    for(i=0;i<=(head.y-bend[bend_no].y)&&length<size;i++)
    {
        GoTo(head.x,head.y-i);
        {
            if(length==0)
                printf("v");
            else
                printf("*");
        }
        body[length].x=head.x;
        body[length].y=head.y-i;
        length++;
    }
    Bend();
    if(!kbhit())
        head.y++;
}
void Delay(long double k)
{
    scr();
    long double i;
    for(i=0;i<=(10000000);i++);
}
void ExitGame()
{
    int i,check=0;
    for(i=4;i<size;i++)   //starts with 4 because it needs minimum 4 element to touch its own body
    {
        if(body[0].x==body[i].x&&body[0].y==body[i].y)
        {
            check++;    //check's value increases as the coordinates of head is equal to any other body position
        }
        if(i==size||check!=0)
            break;
    }
    if(head.x<=10||head.x>=70||head.y<=10||head.y>=30||check!=0)
    {
        life--;
        if(life>=0)
        {
            head.x=25;
            head.y=20;
            bend_no=0;
            head.dir=RIGHT;
            move();
        }
        else
        {
            system("cls");
            printf("All lives completed\nBetter Luck Next Time!!!\nPress any key to quit the game\n");
            record();
			exit(0);
        }
    }
}
void Food()
{
    if(head.x==object.x&&head.y==object.y)
    {
        size++;
        time_t a;
        a=time(0);
        srand(a);
        object.x=rand()%70;
        if(object.x<=10)
            object.x+=11;
        object.y=rand()%30;
        if(object.y<=10)
 
            object.y+=11;
    }
    else if(object.x==0)/*to create object for the first time coz global variable are initialized with 0*/
    {
        object.x=rand()%70;
        if(object.x<=10)
            object.x+=11;
        object.y=rand()%30;
        if(object.y<=10)
            object.y+=11;
    }
}
void Left()
{
    int i;
    for(i=0;i<=(bend[bend_no].x-head.x)&&length<size;i++)
    {
        GoTo((head.x+i),head.y);
       {
                if(length==0)
                    printf("<");
                else
                    printf("*");
        }
        body[length].x=head.x+i;
        body[length].y=head.y;
        length++;
    }
    Bend();
    if(!kbhit())
        head.x--;
 
}
void record()
{
   char player[20],nplayer[20],cha,c;
   int i,j,px;
   FILE *info;
   info=fopen("record.txt","a+");
   getch();
   system("cls");
   printf("Enter your name\n");
   scanf("%[^\n]",player);
   //************************
   for(j=0;player[j]!='\0';j++){ //to convert the first letter after space to capital
   nplayer[0]=toupper(player[0]);
   if(player[j-1]==' '){
   nplayer[j]=toupper(player[j]);
   nplayer[j-1]=player[j-1];}
   else nplayer[j]=player[j];
   }
   nplayer[j]='\0';
   //*****************************
   //sdfprintf(info,"\t\t\tPlayers List\n");
   fprintf(info,"Player Name :%s\n",nplayer);
    //for date and time
 
   time_t mytime;
  mytime = time(NULL);
  fprintf(info,"Played Date:%s",ctime(&mytime));
     //**************************
     fprintf(info,"scr:%d\n",px=Scoreonly());//call points to display points
     //fprintf(info,"\nLevel:%d\n",10);//call level to display level
   for(i=0;i<=50;i++)
   fprintf(info,"%c",'_');
   fprintf(info,"\n");
   fclose(info);																							
   printf("wanna see past records press 'y'\n");
   cha=getch();
   system("cls");
   if(cha=='y'){
   info=fopen("record.txt","r");
   do{
       putchar(c=getc(info));
       }while(c!=EOF);}
     fclose(info);
}
void Right()
{
    int i;
    for(i=0;i<=(head.x-bend[bend_no].x)&&length<size;i++)
    {
        //GoTo((head.x-i),head.y);
        body[length].x=head.x-i;
        body[length].y=head.y;
        GoTo(body[length].x,body[length].y);
        {
            if(length==0)
                printf(">");
            else
                printf("*");
        }
        /*body[length].x=head.x-i;
        body[length].y=head.y;*/
        length++;
    }
    Bend();
    if(!kbhit())
        head.x++;
}
void Bend()
{
    int i,j,diff;
    for(i=bend_no;i>=0&&length<size;i--)
    {
            if(bend[i].x==bend[i-1].x)
            {
                diff=bend[i].y-bend[i-1].y;
                if(diff<0)
                    for(j=1;j<=(-diff);j++)
                    {
                        body[length].x=bend[i].x;
                        body[length].y=bend[i].y+j;
                        GoTo(body[length].x,body[length].y);
                        printf("*");
                        length++;
                        if(length==size)
                            break;
                    }
                else if(diff>0)
                    for(j=1;j<=diff;j++)
                    {
                        /*GoTo(bend[i].x,(bend[i].y-j));
                        printf("*");*/
                        body[length].x=bend[i].x;
                        body[length].y=bend[i].y-j;
                        GoTo(body[length].x,body[length].y);
                        printf("*");
                        length++;
                        if(length==size)
                            break;
                    }
            }
        else if(bend[i].y==bend[i-1].y)
        {
            diff=bend[i].x-bend[i-1].x;
            if(diff<0)
                for(j=1;j<=(-diff)&&length<size;j++)
                {
                    /*GoTo((bend[i].x+j),bend[i].y);
                    printf("*");*/
                    body[length].x=bend[i].x+j;
                    body[length].y=bend[i].y;
                    GoTo(body[length].x,body[length].y);
                        printf("*");
                   length++;
                   if(length==size)
                           break;
               }
           else if(diff>0)
               for(j=1;j<=diff&&length<size;j++)
               {
                   /*GoTo((bend[i].x-j),bend[i].y);
                   printf("*");*/
                   body[length].x=bend[i].x-j;
                   body[length].y=bend[i].y;
                   GoTo(body[length].x,body[length].y);
                       printf("*");
                   length++;
                   if(length==size)
                       break;
               }
       }
   }
}
void Boarder()
{
   system("cls");
   int i;
   GoTo(object.x,object.y);
       printf("F");
   for(i=10;i<71;i++)
   {
       GoTo(i,10);
           printf("!");
       GoTo(i,30);
           printf("!");
   }
   for(i=10;i<31;i++)
   {
       GoTo(10,i);
           printf("!");
       GoTo(70,i);
       printf("!");
   }
}

/*void Boarder()
{
   system("cls");
   int i;
   GoTo(object.x,object.y);  
       printf("F");
   for(i=10;i<71;i++)
   {
       GoTo(i,10);
           printf("!");
       GoTo(i,30);
           printf("!");
   }
   for(i=13;i<32;i++)
   {
       GoTo(i,15);
           printf("!");
	   GoTo(i,19);
           printf("!");
       GoTo(i,27);
           printf("!");
   }

   for(i=35;i<68;i++)
   {
	   GoTo(i,15);
           printf("!");
       GoTo(i,19);
           printf("!");
       GoTo(i,27);
           printf("!");
   }
   for(i=10;i<31;i++)
   {
       GoTo(10,i);
           printf("!");
       GoTo(70,i);
       printf("!");
   }
}*/
void Print()
{
   printf("\n----                                ____");                        
   printf("\n        ()+    ()     / +    !  /  |    ");
   printf("\n----    () +   ()    /   +   ! /   |___ ");       
   printf("\n    |   ()  +  ()   / --- +  ! *   |    ");
   printf("\n----    ()   + ()  /       + !  *  |____");
   printf("\n(press any key to continue...)\n");
   getch();
   system("cls");
   printf("\tInstructions For Game:\n");
   printf("\n-Use ONLY arrow keys to move the snake\n-Food is provided at random coordinates\n-Eat the object to grow the snake size and increase your score\n-Don't hit the wall or your body, doing so will decrease your life by one point\n-To pause the game press any key other than arrow keys\n-To exit press Esc\n");
   printf("\n\nPress any key to start the game...\n\n");
}

int scr()
{
   int points;
   GoTo(20,8);
   points=size-5;
   printf("SCORE : %d",(size-5));
   points=size-5;
   GoTo(50,8);
   printf("Life : %d",life);
   return points;
}
int Scoreonly()
{
int points=scr();
system("cls");
return points;
}
void Up()
{
   int i;
   for(i=0;i<=(bend[bend_no].y-head.y)&&length<size;i++)
   {
       GoTo(head.x,head.y+i);
       {
           if(length==0)
               printf("^");
           else
               printf("*");
       }
       body[length].x=head.x;
       body[length].y=head.y+i;
       length++;
   }
   Bend();
   if(!kbhit())
       head.y--;
}

int lif()
{   int life;
	printf("\nEnter the number of lives you want for the snake  :");
	scanf("%d",&life);
	while(life<0)
	{		
		printf("\nEnter a positive value!!");
		scanf("%d",&life);
    }
	return life;
}