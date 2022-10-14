#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int main()
{
    int totalSize;
    int row,col,value;
    printf("Enter the size of the magic box: ");
    scanf("%d", &totalSize);
    printf("\n");


    value=1;
    row=1;
    col=3;


    if(totalSize % 2 ==0)
    {
       printf("Not Possible");
       exit(0);
    }

    do
    {
    gotoxy(col*3,row);
    printf("%d",value);
    if(value%totalSize==0)
   {
     row++;
   }
   else{
    row--;
    col--;
   }
   if(row==0)
    {
    row=totalSize;
    }
   if(col==0)
    {
      col=totalSize;
    }
   value++;
    }
    while(value <=pow(totalSize, 2));


    return 0;
}
