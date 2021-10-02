#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <cstdio>
using namespace std;

float position = 0.02f; // trnaslator factor
float speed  = 0.00f;  // initial speed

void display()
{
        glClear(GL_COLOR_BUFFER_BIT);
        glClearColor(0.0f, 1.0f, 1.0, 0.0f); //background  color

        glPushMatrix();
        glTranslatef(position,position,0.0f); //translator factor on x & y axis

        glBegin(GL_QUADS);  // squar shape
        glColor3ub(18, 161, 68);
        glVertex2f(-0.6f, -0.35f);
        glVertex2f(-0.4f, -0.55f);
        glVertex2f(-0.6f, -0.8f);
        glVertex2f(-0.8f, -0.6f);
        glEnd();

        glBegin(GL_TRIANGLES); // 1st triangle shape
        glColor3ub(161,243,79);
        glVertex2f(-0.6f, -0.35f);
        glVertex2f(-0.4f, -0.55f);
        glVertex2f(-0.35f, -0.28f);
        glEnd();

        glLineWidth(3.5); // border of 1st triangle
        glBegin(GL_LINES);
        glColor3ub(18,161,68);
        glVertex2f(-0.6f, -0.35f);
        glVertex2f(-0.35f, -0.28f);
        glVertex2f(-0.4f, -0.55f);
        glVertex2f(-0.35f, -0.28f);
        glEnd();

        glBegin(GL_TRIANGLES); //left small triangle shape
        glColor3ub(161,243,79);
        glVertex2f(-0.73f, -0.67f);
        glVertex2f(-0.79f, -0.68f);
        glVertex2f(-0.74f, -0.73f);
        glEnd();

        glBegin(GL_TRIANGLES); // right small triangle shape
        glColor3ub(161,243,79);
        glVertex2f(-0.67f, -0.73f);
        glVertex2f(-0.72f, -0.75f);
        glVertex2f(-0.67f, -0.80f);
        glEnd();

        glPopMatrix();
        glFlush();
}

void update(int value) //timer function
{
      if(position>2.0)
      {
          position = -0.5;
      }
      else if(position<-2.0)
      {
         position = -1.0;
      }
      position += speed;
      glutPostRedisplay();
      glutTimerFunc(22, update, 0);
}

void handleMouse(int button, int state, int x, int y)
{
      if(button == GLUT_LEFT_BUTTON)
      {
           speed = 0.02f;
      }
      if(button == GLUT_RIGHT_BUTTON)
      {
          speed = 0.00f;
      }
      glutPostRedisplay();
}

int main(int argc, char** argv)
{
       glutInit(&argc, argv);
       glutInitWindowSize(800, 650);
       glutCreateWindow("Rocket");
       glutDisplayFunc(display);
       glutTimerFunc(1,update,0);
       glutMouseFunc(handleMouse);
       glutMainLoop();

       return 0;

}
