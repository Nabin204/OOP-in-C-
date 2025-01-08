#include<iostream>
#include<cmath>
using namespace std;
void LineDDA()
{
    int x1,x2,y1,y2,stepsize,dx,dy,i;
    float x,y,xinc,yinc;
    cout<<"Digital differential line drawing algorithm"<<endl;
    cout<<"Put the values of x1 and y1:"<<endl;
    cin>>x1>>y1;
    cout<<"Put the values of x2 and y2:"<<endl;
    cin>>x2>>y2;
    dx=x2-x1;
    dy=y2-y1;
    x=x1;
    y=y1;
    if(abs(dx)>abs(dy))
    {
        stepsize=abs(dx);
    }
    else
    {
        stepsize=abs(dy);
    }
    xinc=dx/(float)stepsize;
    yinc=dy/(float)stepsize;
    cout<<"The required points are:"<<endl;
    for(i=0;i<stepsize;i++)
    {
    cout<<x<<"   "<<y<<endl;
    x=x+xinc;
    y=y+yinc;
    }
}
int main()
{
    LineDDA();
    return 0;
}