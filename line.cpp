#include<GL/glut.h>
 #include<iostream>
 using namespace std;
 void Init()
 {
 glClearColor(0,0,0,1);
 glColor3f(0.0,1.0,0.0);
 glPointSize(1.0);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 gluOrtho2D(-780,780,-420,420);
 }
 int sign(float a)
 {
 if(a==0)
    return 0;
 else
    return 1;
 return -1;
 }
 void DDA_Line(int x1,int y1,int x2,int y2)
 {
 float dx,dy,length;
 dx=x2-x1;
 dy=y2-y1;
 if(abs(dx)>=abs(dy))
    length=abs(dx);
 else
    length=abs(dy);
 float xin=dx/length;
 float yin=dy/length;
 float x=x1+0.5*sign(xin);
 float y=y1+0.5*sign(yin);
 int i=0;
 while(i<=length)
 {
    glBegin(GL_POINTS);
        glVertex2i(x,y);
    glEnd();
 x=x+xin;
 y=y+yin;
 i++; 
}
 glFlush();
 }
 void Bresenhum(int x1,int y1,int x2,int y2)
 { }
 void display()
 {
 int choice;
 cout<<"\n1.DDA Line\t 2.Bresenhum Line";
 cin>>choice;
 glClear(GL_COLOR_BUFFER_BIT);
 if(choice==1)
    DDA_Line(50,50,200,200);
 else
    Bresenhum(100,100,300,300);
 glFlush();
 }
 int main(int argc,char**argv)
 {
 cout<<"hello";
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
 glutInitWindowSize(1000,700);
 glutInitWindowPosition(0,0);
 glutCreateWindow("Line Drawing");
 Init();
 glutDisplayFunc(display);
 glutMainLoop();
 return(0);
 }
 