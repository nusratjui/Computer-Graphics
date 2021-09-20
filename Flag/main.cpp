#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h



/* Handler for window-repaint event. Call back when the window first appears and

whenever the window needs to be re-painted. */

void display() {



         glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
         glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
         glLineWidth(5.5);



         glBegin(GL_LINES);
         glColor3f(1.0f, 0.0f, 0.0f);
         glVertex2f(-.45f, 0.45f);
         glVertex2f(0.45f, 0.45f);



         glColor3f(1.0f, 0.5f, 0.0f);
         glVertex2f(-.45f, 0.41f);
         glVertex2f(0.45f, 0.41f);



         glColor3f(1.0f, 1.0f, 0.0f);
         glVertex2f(-.45f, 0.37f);
         glVertex2f(0.45f, 0.37f);



         glColor3f(0.0f, 1.0f, 0.0f);
         glVertex2f(-.45f, 0.33f);
         glVertex2f(0.45f, 0.33f);



         glColor3f(0.0f, 0.0f, 1.0f);
         glVertex2f(-.45f, 0.29f);
         glVertex2f(0.45f, 0.29f);



         glColor3f(0.73f, 0.16f, 0.96f);
         glVertex2f(-.45f, 0.25f);
         glVertex2f(0.45f, 0.25f);



         glColor3f(1.0f, 1.0f, 1.0f);
         glVertex2f(-.45f, 0.51f);
         glVertex2f(-.45f, -.14f);



         glEnd();
         glFlush();  // Render now

}

/* Main function: GLUT runs as a console application starting at main()  */

int main(int argc, char** argv) {

    glutInit(&argc, argv);                 // Initialize GLUT
    glutCreateWindow("Flag"); // Create a window with the given title
    glutInitWindowSize(420, 420);   // Set the window's initial width & height
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop();           // Enter the event-processing loop

    return 0;

}
