
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h



/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glLineWidth(0.5);


     //Green triangle at the top
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 1.0f, 0.0f); // Red
    glVertex2f(-0.80f, 0.0f);    // x, y
    glVertex2f(0.80f, 0.0f);    // x, y
    glVertex2f(0.0f, 0.60f);    // x, y
    glEnd();

    //White square under triangle as body shape
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 1.0f, 1.0f); // Red
    glVertex2f(-0.80f, 0.0f);
    glVertex2f(0.80f, 0.0f);
    glVertex2f(0.80f, -.90f);
    glVertex2f(-0.80f, -.90f);
    glEnd();


    // Blue square over white one as door
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(0.0f, 0.0f, 1.0f); // Red
    glVertex2f(-0.25f, -0.16f);
    glVertex2f(0.25f, -0.16f);
    glVertex2f(0.25f, -.90f);
    glVertex2f(-0.25f, -.90f);
    glEnd();


    //Left red window
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(-0.65f, -0.54f);
    glVertex2f(-0.35f, -0.54f);
    glVertex2f(-0.35f, -0.34f);
    glVertex2f(-0.65f, -0.34f);
    glEnd();


    //Right red window
    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(0.35f, -0.54f);
    glVertex2f(0.65f, -0.54f);
    glVertex2f(0.65f, -0.34f);
    glVertex2f(0.35f, -0.34f);
    glEnd();

    glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
    glutInit(&argc, argv);                 // Initialize GLUT
    glutCreateWindow("House"); // Create a window with the given title
    glutInitWindowSize(420, 420);   // Set the window's initial width & height
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop();           // Enter the event-processing loop
    return 0;
}
