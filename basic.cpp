#include<stdio.h>
#include<graphics.h>
#include<windows.h>
int main()
 {int gm =0,gd,j=10,c,k=10,i,x=10;
   initgraph(&gm,&gm," ");
   initwindow(400,400);
     int a[20]={13,6,66,44,11,33,99,55,22,20,10,20,30,51,20,35,3,6,32,2};
   for( i=0;i<20;i++)
    {bar(j,0,j+10,a[i]*3);
    j=j+11;
    }
 int temp,n=19;
  for(i=0;i<=(n-1);i++)
  {
      for(j=0;j<=n-i-1;j++)
      {      setcolor(0);
              setfillstyle(SOLID_FILL,RED);
                bar(x,0,x+10,a[j]*3);
              floodfill(x,a[j+1],0);
               setcolor(0);
              setfillstyle(SOLID_FILL,RED);
                  bar(x+11,0,x+21,a[j+1]*3);
              floodfill(x,a[j]+1,0);
               delay(50);
                   setcolor(0);
              setfillstyle(SOLID_FILL,WHITE);
                bar(x,0,x+10,a[j]*3);
              floodfill(x,a[j+1],0);
               setcolor(0);
              setfillstyle(SOLID_FILL,WHITE);
                  bar(x+11,0,x+21,a[j+1]*3);
              floodfill(x,a[j]+1,0);
       if( a[j]>a[j+1])
          {
              temp =a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
              }
             clearviewport();
             k=10;
    for( c=0;c<20;c++)
    {bar(k,0,k+10,a[c]*3);
    k=k+11;
    }
   x=x+11;
      } k=10+ 11*(n-i-1);
    for( c=n-i-1;c<20;c++)
    {setfillstyle(SOLID_FILL,GREEN);
        bar(k,0,k+10,a[c]*3);
         floodfill(x,a[j]+1,0);
    k=k+11;

    } Beep(450,100);
    delay(40);
      x=10;
      }

      getch();
  closegraph();


  return 0;
}
