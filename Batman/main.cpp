#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h


/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {


       glClearColor(0.0f, 0.0f, 0.0f, 1.0f);  // Set background color to black and opaque
       glClear(GL_COLOR_BUFFER_BIT);          // Clear the color buffer (background)


       glBegin(GL_POLYGON);
       glColor3f(0.0f, 0.0f, 0.0f);

       glVertex2f(0.02f,  0.62f);
       glVertex2f(-0.57f, 0.62f);
       glVertex2f(-0.57f, 0.58f);
       glVertex2f(-0.62f, 0.58f);
       glVertex2f(-0.62f, 0.52f);
       glVertex2f(-0.68f, 0.52f);
       glVertex2f(-0.68f, 0.47f);
       glVertex2f(-0.72f, 0.48f);
       glVertex2f(-0.72f, 0.42f);
       glVertex2f(-0.78f, 0.42f);
       glVertex2f(-0.78f, 0.38f);
       glVertex2f(-0.82f, 0.38f);
       glVertex2f(-0.82f, 0.32f);
       glVertex2f(-0.88f, 0.32f);
       glVertex2f(-0.88f, 0.28f);
       glVertex2f(-0.92f, 0.28f);
       glVertex2f(-0.92f, 0.22f);
       glVertex2f(-0.98f, 0.22f);
       glVertex2f(-0.98f, -0.22f);
       glVertex2f(-0.98f, -0.22f);
       glVertex2f(-0.92f, -0.28f);
       glVertex2f(-0.88f, -0.28f);
       glVertex2f(-0.88f, -0.32f);
       glVertex2f(-0.82f, -0.32f);
       glVertex2f(-0.82f, -0.38f);
       glVertex2f(-0.78f, -0.38f);
       glVertex2f(-0.78f, -0.42f);
       glVertex2f(-0.72f, -0.48f);
       glVertex2f(-0.72f, -0.48f);
       glVertex2f(-0.68f, -0.48f);
       glVertex2f(-0.62f, -0.52f);
       glVertex2f(-0.62f, -0.52f);
       glVertex2f(-0.62f, -0.58f);
       glVertex2f(-0.58f, -0.58f);
       glVertex2f(-0.58f, -0.62f);
       glVertex2f(0.58f, -0.62f);
       glVertex2f(0.58f, -0.52f);
       glVertex2f(0.62f, -0.57f);
       glVertex2f(0.62f, -0.52f);
       glVertex2f(0.68f, -0.52f);
       glVertex2f(0.68f, -0.48f);
       glVertex2f(0.72f, -0.48f);
       glVertex2f(0.72f, -0.42f);
       glVertex2f(0.78f, -0.42f);
       glVertex2f(0.78f, -0.38f);
       glVertex2f(0.82f, -0.38f);
       glVertex2f(0.82f, -0.32f);
       glVertex2f(0.82f, -0.32f);
       glVertex2f(0.88f, -0.28f);
       glVertex2f(0.92f, -0.22f);
       glVertex2f(0.92f, -0.22f);
       glVertex2f(0.98f, -0.22f);
       glVertex2f(0.98f, 0.22f);
       glVertex2f(0.92f, 0.22f);
       glVertex2f(0.92f, 0.28f);
       glVertex2f(0.88f, 0.28f);
       glVertex2f(0.88f, 0.32f);
       glVertex2f(0.82f, 0.32f);
       glVertex2f(0.82f, 0.38f);
       glVertex2f(0.78f, 0.38f);
       glVertex2f(0.78f, 0.42f);
       glVertex2f(0.72f, 0.42f);
       glVertex2f(0.72f, 0.48f);
       glVertex2f(0.68f, 0.48f);
       glVertex2f(0.68f, 0.52f);
       glVertex2f(0.62f, 0.52f);
       glVertex2f(0.62f, 0.58f);
       glVertex2f(0.58f, 0.58f);
       glVertex2f(0.58f, 0.62f);
       glVertex2f(0.02f, 0.62f);

       glEnd();


       glBegin(GL_POLYGON);
       glColor3f(1.0f, 1.0f, 0.0f);

       glVertex2f(0.02f, 0.57f);
       glVertex2f(-0.58f, 0.58f);
       glVertex2f(-0.58f, 0.52f);
       glVertex2f(-0.62f, 0.52f);
       glVertex2f(-0.62f, 0.47f);
       glVertex2f(-0.68f, 0.47f);
       glVertex2f(-0.67f, 0.42f);
       glVertex2f(-0.72f, 0.42f);
       glVertex2f(-0.72f, 0.38f);
       glVertex2f(-0.77f, 0.37f);
       glVertex2f(-0.77f, 0.32f);
       glVertex2f(-0.82f, 0.32f);
       glVertex2f(-0.82f, 0.27f);
       glVertex2f(-0.87f, 0.27f);
       glVertex2f(-0.87f, 0.22f);
       glVertex2f(-0.92f, 0.22f);
       glVertex2f(-0.92f, -0.22f);
       glVertex2f(-0.87f, -0.22f);
       glVertex2f(-0.87f, -0.27f);
       glVertex2f(-0.82f, -0.27f);
       glVertex2f(-0.82f, -0.32f);
       glVertex2f(-0.77f, -0.32f);
       glVertex2f(-0.77f, -0.37f);
       glVertex2f(-0.72f, -0.37f);
       glVertex2f(-0.72f, -0.42f);
       glVertex2f(-0.67f, -0.42f);
       glVertex2f(-0.67f, -0.47f);
       glVertex2f(-0.62f, -0.47f);
       glVertex2f(-0.62f, -0.52f);
       glVertex2f(-0.57f, -0.52f);
       glVertex2f(-0.57f, -0.57f);
       glVertex2f(-0.52f, -0.57f);
       glVertex2f(0.57f, -0.57f);
       glVertex2f(0.57f, -0.52f);
       glVertex2f(0.62f, -0.52f);
       glVertex2f(0.62f, -0.47f);
       glVertex2f(0.67f, -0.47f);
       glVertex2f(0.67f, -0.42f);
       glVertex2f(0.72f, -0.42f);
       glVertex2f(0.72f, -0.37f);
       glVertex2f(0.77f, -0.37f);
       glVertex2f(0.77f, -0.32f);
       glVertex2f(0.82f, -0.32f);
       glVertex2f(0.82f, -0.27f);
       glVertex2f(0.87f, -0.27f);
       glVertex2f(0.87f, -0.22f);
       glVertex2f(0.92f, -0.22f);
       glVertex2f(0.92f, 0.22f);
       glVertex2f(0.87f, 0.22f);
       glVertex2f(0.87f, 0.27f);
       glVertex2f(0.82f, 0.27f);
       glVertex2f(0.82f, 0.32f);
       glVertex2f(0.77f, 0.32f);
       glVertex2f(0.77f, 0.37f);
       glVertex2f(0.72f, 0.37f);
       glVertex2f(0.72f, 0.42f);
       glVertex2f(0.67f, 0.42f);
       glVertex2f(0.67f, 0.47f);
       glVertex2f(0.62f, 0.47f);
       glVertex2f(0.62f, 0.52f);
       glVertex2f(0.57f, 0.52f);
       glVertex2f(0.57f, 0.57f);
       glVertex2f(0.02f, 0.57f);

       glEnd();


       glBegin(GL_POLYGON);
       glColor3f(0.0f, 0.0f, 0.0f);


       glVertex2f(-0.42f, 0.45f);
       glVertex2f(-0.57f, 0.47f);
       glVertex2f(-0.57f, 0.42f);
       glVertex2f(-0.62f, 0.42f);
       glVertex2f(-0.62f, 0.37f);
       glVertex2f(-0.67f, 0.37f);
       glVertex2f(-0.67f, 0.32f);
       glVertex2f(-0.72f, 0.32f);
       glVertex2f(-0.72f, 0.27f);
       glVertex2f(-0.77f, 0.27f);
       glVertex2f(-0.77f, 0.22f);
       glVertex2f(-0.82f, 0.22f);
       glVertex2f(-0.82f, 0.17f);
       glVertex2f(-0.87f, 0.17f);
       glVertex2f(-0.87f, -0.12f);
       glVertex2f(-0.87f, -0.17f);
       glVertex2f(-0.82f, -0.27f);
       glVertex2f(-0.77f, -0.22f);
       glVertex2f(-0.77f, -0.27f);
       glVertex2f(-0.72f, -0.27f);
       glVertex2f(-0.72f, -0.32f);
       glVertex2f(-0.67f, -0.32f);
       glVertex2f(-0.67f, -0.37f);
       glVertex2f(-0.62f, -0.37f);
       glVertex2f(-0.62f, -0.42f);
       glVertex2f(-0.57f, -0.42f);
       glVertex2f(-0.57f, -0.47f);
       glVertex2f(-0.42f, -0.47f);
       glVertex2f(-0.42f, -0.5f);
       glVertex2f(0.42f, -0.5f);
       glVertex2f(0.42f, -0.47f);
       glVertex2f(0.57f, -0.47f);
       glVertex2f(0.57f, -0.42f);
       glVertex2f(0.62f, -0.42f);
       glVertex2f(0.62f, -0.37f);
       glVertex2f(0.67f, -0.37f);
       glVertex2f(0.67f, -0.32f);
       glVertex2f(0.72f, -0.32f);
       glVertex2f(0.72f, -0.27f);
       glVertex2f(0.77f, -0.27f);
       glVertex2f(0.77f, -0.22f);
       glVertex2f(0.82f, -0.22f);
       glVertex2f(0.82f, -0.17f);
       glVertex2f(0.87f, -0.17f);
       glVertex2f(0.87f, 0.17f);
       glVertex2f(0.82f, 0.17f);
       glVertex2f(0.82f, 0.22f);
       glVertex2f(0.77f, 0.22f);
       glVertex2f(0.77f, 0.27f);
       glVertex2f(0.72f, 0.27f);
       glVertex2f(0.72f, 0.32f);
       glVertex2f(0.67f, 0.32f);
       glVertex2f(0.67f, 0.32f);
       glVertex2f(0.62f, 0.37f);
       glVertex2f(0.62f, 0.42f);
       glVertex2f(0.57f, 0.42f);
       glVertex2f(0.57f, 0.45f);
       glVertex2f(0.42f, 0.4f);


       glEnd();


       glBegin(GL_POLYGON);
       glColor3f(1.0f, 1.0f, 0.0f);

       glVertex2f(-0.42f, 0.47f);
       glVertex2f(-0.42f, 0.17f);
       glVertex2f(-0.22f, 0.17f);
       glVertex2f(-0.22f, 0.22f);
       glVertex2f(-0.17f, 0.22f);
       glVertex2f(-0.17f, 0.47f);


       glEnd();


       glBegin(GL_POLYGON);
       glColor3f(1.0f, 1.0f, 0.0f);

       glVertex2f(-0.42f, 0.42f);
       glVertex2f(-0.47f, 0.42f);
       glVertex2f(-0.47f, 0.22f);
       glVertex2f(-0.42f, 0.22f);

       glEnd();


       glBegin(GL_POLYGON);
       glColor3f(0.0f, 0.0f, 0.0f);

       glVertex2f(-0.17f, 0.52f);
       glVertex2f(-0.17f, 0.45f);
       glVertex2f(-0.12f, 0.45f);
       glVertex2f(-0.12f, 0.52f);

       glEnd();


       glBegin(GL_POLYGON);
       glColor3f(0.0f, 0.0f, 0.0f);

       glVertex2f(0.12f, 0.52f);
       glVertex2f(0.12f, 0.45f);
       glVertex2f(0.17f, 0.45f);
       glVertex2f(0.17f, 0.52f);

       glEnd();


      glBegin(GL_POLYGON);
      glColor3f(1.0f, 1.0f, 0.0f);

      glVertex2f(0.17f, 0.47f);
      glVertex2f(0.17f, 0.2f);
      glVertex2f(0.42f, 0.2f);
      glVertex2f(0.42f, 0.47f);

      glEnd();


      glBegin(GL_POLYGON);
      glColor3f(1.0f, 1.0f, 0.0f);

      glVertex2f(0.22f, 0.22f);
      glVertex2f(0.22f, 0.17f);
      glVertex2f(0.42f, 0.17f);
      glVertex2f(0.42f, 0.22f);

      glEnd();


      glBegin(GL_POLYGON);
      glColor3f(1.0f, 1.0f, 0.0f);

      glVertex2f(0.42f, 0.42f);
      glVertex2f(0.42f, 0.22f);
      glVertex2f(0.47f, 0.22f);
      glVertex2f(0.47f, 0.42f);

      glEnd();


      glBegin(GL_POLYGON);
      glColor3f(1.0f, 1.0f, 0.0f);

      glVertex2f(0.05f, -0.45f);
      glVertex2f(0.05f, -0.52f);
      glVertex2f(0.32f, -0.52f);
      glVertex2f(0.32f, -0.45f);

      glEnd();


      glBegin(GL_POLYGON);
      glColor3f(1.0f, 1.0f, 0.0f);

      glVertex2f(0.12f, -0.4f);
      glVertex2f(0.12f, -0.47f);
      glVertex2f(0.32f, -0.47f);
      glVertex2f(0.32f, -0.4f);

       glEnd();

       glBegin(GL_POLYGON);
       glColor3f(1.0f, 1.0f, 0.0f);

       glVertex2f(0.12f, -0.35f);
       glVertex2f(0.12f, -0.42f);
       glVertex2f(0.27f, -0.42f);
       glVertex2f(0.27f, -0.35f);

       glEnd();


       glBegin(GL_POLYGON);
       glColor3f(1.0f, 1.0f, 0.0f);

       glVertex2f(0.17f, -0.32f);
       glVertex2f(0.17f, -0.37f);
       glVertex2f(0.22f, -0.37f);
       glVertex2f(0.22f, -0.32f);

       glEnd();


       glBegin(GL_POLYGON);
       glColor3f(1.0f, 1.0f, 0.0f);

       glVertex2f(-0.32f, -0.45f);
       glVertex2f(-0.32f, -0.52f);
       glVertex2f(-0.05f, -0.52f);
       glVertex2f(-0.05f, -0.45f);

       glEnd();

       glBegin(GL_POLYGON);
       glColor3f(1.0f, 1.0f, 0.0f);

       glVertex2f(-0.32f, -0.4f);
       glVertex2f(-0.32f, -0.47f);
       glVertex2f(-0.12f, -0.47f);
       glVertex2f(-0.12f, -0.4f);

       glEnd();


       glBegin(GL_POLYGON);
       glColor3f(1.0f, 1.0f, 0.0f);

       glVertex2f(-0.27f, -0.35f);
       glVertex2f(-0.27f, -0.42f);
       glVertex2f(-0.12f, -0.42f);
       glVertex2f(-0.12f, -0.35f);

       glEnd();

       glBegin(GL_POLYGON);
       glColor3f(1.0f, 1.0f, 0.0f);

       glVertex2f(-0.22f, -0.32f);
       glVertex2f(-0.22f, -0.37f);
       glVertex2f(-0.17f, -0.37f);
       glVertex2f(-0.17f, -0.32f);

       glEnd();

       glFlush();
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
         glutInit(&argc, argv);               // Initialize GLUT
         glutCreateWindow("Batman");   // Create a window with the given title
         glutInitWindowSize(520, 520);   // Set the window's initial width & height
         glutDisplayFunc(display);      // Register display callback handler for window re-paint
         glutMainLoop();  // Enter the event-processing loop

        return 0;
}
