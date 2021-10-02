#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <vector>
#include <math.h>

using namespace std;

        float  angle = 0.5; //1st rotate
        static GLfloat spin1 = 0.0;
        static GLfloat spin2 = 0.0;
        static GLfloat spin_speed = 1.0;

        float translate_x1 = 0.0;
        float translate_y1 = 0.0;
        float translate_z1 = -30.0;

        float left_down;
        float right_down;

        float right_up;
        float left_up;

void shape(void)
{

        glBegin(GL_LINE_LOOP);
        glVertex3f(0,0,0);

        glColor3f(1.0f,1.0f,1.0f); // border of fan

        glVertex3f(0,0,0);
        glVertex3f(-3,4.5,0);
        glVertex3f(-4.75,4.5,0);
        glVertex3f(-5.5,6.5,0);
        glVertex3f(-3,6.5,0);
        glVertex3f(-4.75,9.5,0);
        glVertex3f(-6.5,9.5,0);
        glVertex3f(-6.75,11.25,0);
        glVertex3f(-3,11.25,0);
        glVertex3f(-5.5,14.5,0);
        glVertex3f(5.5,14.5,0);
        glVertex3f(3,11.25,0);
        glVertex3f(6.75,11.25,0);
        glVertex3f(6.5,9.5,0);
        glVertex3f(4.75,9.5,0);
        glVertex3f(3,6.5,0);
        glVertex3f(5.5,6.5,0);
        glVertex3f(4.75,4.5,0);
        glVertex3f(3,4.5,0);

        glEnd();
}

void f2(void) // whole fan
{

       shape();
       glRotatef(90, 0, 0, 1.0);
       shape();
       glRotatef(180, 0, 0, 1.0);
       shape();
       glRotatef(270, 0, 0, 1.0);
       shape();

}

void display(void)
{
       glMatrixMode(GL_MODELVIEW);
       glClearColor(0.0, 0.0, 0.0, 1.0);
       glClear(GL_COLOR_BUFFER_BIT);
       glLoadIdentity();
       glTranslatef(translate_x1, translate_y1, translate_z1);
       gluLookAt(0.0, 0.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
       glPushMatrix();
       glRotatef(angle,0.0, 0.0, 1.0); //rotate on z-axis
       f2();
       glPopMatrix();

       glPushMatrix();
       glTranslatef(-30,-30,0);
       glScalef(left_down, left_down, 1);
       f2();
       glPopMatrix();

       glPushMatrix();
       glTranslatef(30,-30,0);
       glScalef(right_down ,right_down , 1);
       f2();
       glPopMatrix();

       glPushMatrix();
       glTranslatef(30, 30, 0);
       glScalef(right_up , right_up , 1);
       f2();
       glPopMatrix();

       glPushMatrix();
       glTranslatef(-30, 30,0);
       glScalef(left_up , left_up , 1);
       f2();
       glPopMatrix();

       glFlush();
       angle = angle + 0.06 ;

}

void reshape(int w,int h)
{

     glViewport(0,0,(GLsizei)w,(GLsizei)h);
     glMatrixMode(GL_PROJECTION);
     glLoadIdentity();
     gluPerspective(100.0f, (GLfloat)w/(GLfloat)h, 1.0f, 100.0f);
     glMatrixMode(GL_MODELVIEW);

     glLoadIdentity();

}

void spinDisplay1(void)
{

     spin1 = spin1 + spin_speed;
     if(spin1>360.0)
     {
        spin1 = spin1 - 360.0;
     }

     glutPostRedisplay();

}

void mouse(int button,int state,int x,int y)
{
    switch(button)
     {
     case GLUT_LEFT_BUTTON:
        if(state==GLUT_DOWN)
        glutIdleFunc(spinDisplay1);
     break;

     case GLUT_RIGHT_BUTTON:
        if(state==GLUT_DOWN)
         {
            glutIdleFunc(NULL);
         }
     break;

    default:
     break;

    }
}

void keyboard(unsigned char key, int x, int y)
{
      if(key=='a')        //left down (translae+scale) small fan
      {
          left_down = 0.4;
          glutPostRedisplay();
      }

      else if(key=='b')   //right down (translae+scale) small fan
      {
           right_down = 0.4;
           glutPostRedisplay();

      }
      else if(key=='c')  //right up (translae+scale) small fan
      {
            right_up = 0.4;
            glutPostRedisplay();

      }
      else if(key=='d') //left up (translae+scale) small fan
      {
            left_up = 0.4;
            glutPostRedisplay();

      }

}

int main(int argc, char** argv)
{

       glutInit(&argc, argv);
       glutInitDisplayMode(GLUT_SINGLE);
       glutInitWindowSize(600, 600);
       glutInitWindowPosition(100,100);
       glutCreateWindow(" Fan ");
       glutDisplayFunc(display);
       glutReshapeFunc(reshape);
       glutMouseFunc(mouse);
       glutKeyboardFunc(keyboard);
       glutMainLoop();

       return 0;

}

