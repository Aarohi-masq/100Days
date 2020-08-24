#include <GL/glut.h>
#include <GL/gl.h>
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0,0.6,0);

//road black color
glColor3f(0,0,0);
glBegin(GL_QUADS);
glVertex2f(-0.4,1);
glVertex2f(-1,0.4);
glVertex2f(-1,-0.6);
glVertex2f(0.6,1);
glEnd();

//WHITE STRIPES ON road
glColor3f(1,1,1);
glBegin(GL_QUADS);
glVertex2f(0,1);
glVertex2f(0.1,0.9);
glVertex2f(-0.1,0.7);
glVertex2f(-0.2,0.8);
glEnd();
glBegin(GL_QUADS);
glVertex2f(-0.4,0.6);
glVertex2f(-0.3,0.5);
glVertex2f(-0.5,0.3);
glVertex2f(-0.6,0.4);
glEnd();
glBegin(GL_QUADS);
glVertex2f(-0.8,0.2);
glVertex2f(-0.7,0.1);
glVertex2f(-0.9,-0.1);
glVertex2f(-1,0);
glEnd();

//RIVER BLUE COLOR
glColor3f(0.1,0.4,0.9);
glBegin(GL_QUADS);
glVertex2f(1,-0.6);
glVertex2f(1,-1);
glVertex2f(-1,-1);
glVertex2f(-1,-0.6);
glEnd();

//HOUSE PARTS
glColor3f(1,0,0);
glBegin(GL_QUADS);
glVertex2f(0,0);
glVertex2f(0,-0.3);
glVertex2f(0.4,-0.3);
glVertex2f(0.4,0);
glEnd();
glBegin(GL_TRIANGLES);
glVertex2f(0,0);
glVertex2f(0.4,0);
glVertex2f(0.2,0.2);
glEnd();
glColor3f(0.8,0,0);
glBegin(GL_QUADS);
glVertex2f(0.4,0);
glVertex2f(0.8,0);
glVertex2f(0.8,-0.3);
glVertex2f(0.4,-0.3);
glEnd();
glBegin(GL_QUADS);
glVertex2f(0.2,0.2);
glVertex2f(0.4,0);
glVertex2f(0.82,0);
glVertex2f(0.62,0.2);
glEnd();

//DOORS OF HOUSE
glColor3f(0.52,0.37,0.26);
glBegin(GL_QUADS);
glVertex2f(0.1,-0.1);
glVertex2f(0.3,-0.1);
glVertex2f(0.3,-0.3);
glVertex2f(0.1,-0.3);
glEnd();
glColor3f(0,0,0);
glBegin(GL_LINES);
glVertex2f(0.2,-0.1);
glVertex2f(0.2,-0.3);
glEnd();
glPointSize(3.0);
glColor3f(0,0,0);
glBegin(GL_POINTS);
glVertex2f(0.16,-0.2);
glVertex2f(0.24,-0.2);
glEnd();

//STREET TO HOUSE
glColor3f(0.64,0.2,0.16);
glBegin(GL_QUADS);
glVertex2f(-0.8,-0.4);
glVertex2f(-0.9,-0.5);
glVertex2f(-0.2,-0.5);
glVertex2f(-0.2,-0.4);
glEnd();
glBegin(GL_QUADS);
glVertex2f(0.1,-0.3);
glVertex2f(0.3,-0.3);
glVertex2f(-0.2,-0.5);
glVertex2f(-0.2,-0.4);
glEnd();

//TREES
glColor3f(0,0.8,0);
glBegin(GL_POLYGON);
glVertex2f(-0.9,1);
glVertex2f(-0.8,0.9);
glVertex2f(-0.85,0.9);
glVertex2f(-0.8,0.8);
glVertex2f(-1,0.8);
glVertex2f(-0.95,0.9);
glVertex2f(-1,0.9);
glEnd();
glColor3f(0.64,0.50,0.39);
glBegin(GL_QUADS);
glVertex2f(-0.88,0.8);
glVertex2f(-0.92,0.8);
glVertex2f(-0.92,0.7);
glVertex2f(-0.88,0.7);
glEnd();

glColor3f(0,0.76,0);
glBegin(GL_POLYGON);
glVertex2f(0.8,0.8);
glVertex2f(0.9,0.7);
glVertex2f(0.86,0.7);
glVertex2f(0.9,0.6);
glVertex2f(0.86,0.6);
glVertex2f(0.9,0.5);
glVertex2f(0.7,0.5);
glVertex2f(0.76,0.6);
glVertex2f(0.7,0.6);
glVertex2f(0.76,0.7);
glVertex2f(0.7,0.7);
glEnd();
glColor3f(0.64,0.50,0.39);
glBegin(GL_QUADS);
glVertex2f(0.78,0.5);
glVertex2f(0.82,0.5);
glVertex2f(0.82,0.4);
glVertex2f(0.78,0.4);
glEnd();

glColor3f(0,0.76,0);
glBegin(GL_POLYGON);
glVertex2f(0.4,0.6);
glVertex2f(0.5,0.4);
glVertex2f(0.3,0.4);
glEnd();
glColor3f(0.64,0.50,0.39);
glBegin(GL_QUADS);
glVertex2f(0.38,0.4);
glVertex2f(0.42,0.4);
glVertex2f(0.42,0.3);
glVertex2f(0.38,0.3);
glEnd();

glColor3f(0,0.74,0);
glBegin(GL_POLYGON);
glVertex2f(-0.3,0);
glVertex2f(-0.2,-0.2);
glVertex2f(-0.4,-0.2);
glEnd();
glColor3f(0.64,0.50,0.39);
glBegin(GL_QUADS);
glVertex2f(-0.28,-0.3);
glVertex2f(-0.32,-0.3);
glVertex2f(-0.32,-0.2);
glVertex2f(-0.28,-0.2);
glEnd();

//BOATS
glColor3f(1,1,0);
glBegin(GL_POLYGON);
glVertex2f(0,-0.5);
glVertex2f(0,-0.7);
glVertex2f(0.1,-0.7);
glEnd();
glColor3f(0.8,0.8,0);
glBegin(GL_POLYGON);
glVertex2f(0,-0.6);
glVertex2f(0,-0.7);
glVertex2f(-0.1,-0.7);
glEnd();
glColor3f(0.5,0,0);
glBegin(GL_POLYGON);
glVertex2f(-0.2,-0.7);
glVertex2f(0.2,-0.7);
glVertex2f(0.1,-0.8);
glVertex2f(-0.1,-0.8);
glEnd();

glColor3f(1,0.22,0.22);
glBegin(GL_POLYGON);
glVertex2f(-0.5,-0.7);
glVertex2f(-0.4,-0.9);
glVertex2f(-0.5,-0.9);
glEnd();
glColor3f(0.92,0.15,0.15);
glBegin(GL_POLYGON);
glVertex2f(-0.5,-0.9);
glVertex2f(-0.6,-0.9);
glVertex2f(-0.5,-0.8);
glEnd();
glColor3f(0.5,0,0);
glBegin(GL_POLYGON);
glVertex2f(-0.3,-0.9);
glVertex2f(-0.7,-0.9);
glVertex2f(-0.6,-1);
glVertex2f(-0.4,-1);
glEnd();

glColor3f(0.99,0.47,0.29);
glBegin(GL_POLYGON);
glVertex2f(0.6,-0.6);
glVertex2f(0.7,-0.8);
glVertex2f(0.6,-0.8);
glEnd();
glColor3f(0.91,0.39,0.13);
glBegin(GL_POLYGON);
glVertex2f(0.6,-0.8);
glVertex2f(0.5,-0.8);
glVertex2f(0.6,-0.7);
glEnd();
glColor3f(0.5,0,0);
glBegin(GL_POLYGON);
glVertex2f(0.4,-0.8);
glVertex2f(0.8,-0.8);
glVertex2f(0.7,-0.9);
glVertex2f(0.5,-0.9);
glEnd();

glRasterPos2f(-0.70,-0.70);
glutBitmapString(GLUT_BITMAP_HELVETICA_10,"Aarohi Mangal");
glFlush();
}
int main(int argc,char** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(500,500);
glutInitWindowPosition(200,200);
glutCreateWindow("triangle");
glClearColor(0,1,0,1);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
