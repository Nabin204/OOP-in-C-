#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<math.h>
using namespace std;
void LineDDA()
{
    int x1,x2,y1,y2,stepsize,dx,dy,i;
    float x,y,xinc,yinc;
    printf("Digital differential Analyzer line drawing algorithm\n");
    cout<<"Put the values of x1 and y1\n";
    cin>>x1>>y1;
    cout<<"Put the values of x2 and y2\n";
    cin>>x2>>y2;
    dx-x2-x1;
    dy=y2-y1;
    x=x1;
    y=y1;
    if(abs(dy)>abs(dx))
    {
        stepsize=abs(dy);
    }
    else
    {
        stepsize=abs(dx);
    }
    xinc=dx/(float)stepsize;
    yinc=dy/(float)stepsize;
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"D:\Tutorials\Basic c++ programs\Exam Practice")
    putpixel(round(x),round(y),WHITE);
    for(i=0;i<stepsize;i++)
    {
    x=x+xinc;
    y=y+yinc;
    putpixel(round(x),round(y),WHITE);
    }
    getch();
    closegraph();
}
int main()
{
	LineDDA();
	return 0;
}
