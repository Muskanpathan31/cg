#include<GL/gl.h>
 #include<iostream>
 #include<GL/glut.h>
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
 void display()
 {
 glClear(GL_COLOR_BUFFER_BIT);
 glPointSize(4.0);
 glColor3f(0.5f, 0.5f, 0.5f);
 glBegin(GL_POLYGON);
 glVertex2i(40, 40);
 glVertex2i(320, 40);
 glVertex2i(40, 200);
 glVertex2i(320, 200);
 glVertex2i(40, 200);
 glVertex2i(40, 40);
 glVertex2i(320, 200);
 glVertex2i(320, 40);
 glEnd();
 // Right Window Update
 glColor3f(1.0f, 0.0f, 0.0f);
 glBegin(GL_POLYGON);
 glVertex2i(220, 60);
 glVertex2i(300, 60);
 glVertex2i(220, 150);
 glVertex2i(300, 150);
 glVertex2i(220, 60);
 glVertex2i(220, 150);
 glVertex2i(300, 150);
 glVertex2i(300, 60);
 glEnd();
    // Door
 glColor3f(0.60f, 0.42f, 0.16f);
 glBegin(GL_POLYGON);
 glVertex2i(130, 40);
 glVertex2i(130, 160);
 glVertex2i(130, 160);
 glVertex2i(180, 160);
 glVertex2i(180, 100);
 glVertex2i(180, 40);
 glVertex2i(120, 40);
 glVertex2i(170, 40);
 glEnd();
  // Hut's top triangle part
 glColor3f(1.0f, 0.0f, 1.0f);
 glBegin(GL_POLYGON);
 glVertex2i(10, 200);
 glVertex2i(340, 200);
 glVertex2i(200, 390);
 glVertex2i(10, 200);
 glVertex2i(200, 390);
 glEnd();
 glFlush();
 }
 int main(int argc,char **argv)
 {
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
 glutInitWindowSize(1000,700);
 glutInitWindowPosition(0,0);
 glutCreateWindow("House Drawing");
 Init();
 glutDisplayFunc(display);
 glutMainLoop();
 return(0);
 }
