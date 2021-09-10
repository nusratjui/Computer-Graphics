#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

    void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glLineWidth(2.5);
    // Draw a Red 1x1 Square centered at origin


    // First letter-A
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f); // White

    glVertex2f(-0.90f, -0.5f);    // x, y
    glVertex2f(-0.5f, 0.5f);    // x, y

    glVertex2f(-0.90f, -0.50f);    // x, y
    glVertex2f(-0.80f, -0.50f);    // x, y

    glVertex2f(-0.80f, -0.5f);    // x, y
    glVertex2f(-0.68f, -0.2f);    // x, y

    glVertex2f(-0.68f, -0.2f);    // x, y
    glVertex2f(-0.40f, -0.2f);    // x, y

    glVertex2f(-0.40f, -0.2f);    // x, y
    glVertex2f(-0.30f, -0.50f);    // x, y

    glVertex2f(-0.50f, 0.5f);    // x, y
    glVertex2f(-0.20f, -0.5f);    // x, y

    glVertex2f(-0.30f, -0.5f);    // x, y
    glVertex2f(-0.20f, -0.5f);    // x, y

    glVertex2f(-0.65f, -0.1f);    // x, y
    glVertex2f(-0.40f, -0.1f);    // x, y

    glVertex2f(-0.40f, -0.1f);    // x, y
    glVertex2f(-0.51f, 0.28f);    // x, y

    glVertex2f(-0.65f, -0.1f);    // x, y
    glVertex2f(-0.51f, 0.28f);    // x, y



    // Second letter-I
    glVertex2f(-0.17f, -0.50f);    // x, y
    glVertex2f(-0.05f, -0.50f);    // x, y

    glVertex2f(-0.17f, -0.50f);    // x, y
    glVertex2f(-0.17f, 0.5f);    // x, y

    glVertex2f(-0.17f, 0.5f);    // x, y
    glVertex2f(-0.05f, 0.5f);    // x, y

    glVertex2f(-0.05f, 0.5f);    // x, y
    glVertex2f(-0.05f, -0.50f);    // x, y



    //Third letter-U
    glVertex2f(0.38f, -0.50f);
    glVertex2f(0.05f, -0.50f);

    glVertex2f(0.38f, -0.50f);
    glVertex2f(0.38f, 0.5f);

    glVertex2f(0.05f, -0.50f);
    glVertex2f(0.05f, 0.5f);

    glVertex2f(0.29f, -0.41f);
    glVertex2f(0.14f, -0.41f);

    glVertex2f(0.29f, -0.41f);
    glVertex2f(0.29f, 0.5f);

    glVertex2f(0.14f, -0.41f);
    glVertex2f(0.14f, 0.5f);

    glVertex2f(0.38f, 0.5f);
    glVertex2f(0.29f, 0.5f);

    glVertex2f(0.14f, 0.5f);
    glVertex2f(0.05f, 0.5f);



    //Fourth letter-B
    glVertex2f(0.43f, 0.5f);
    glVertex2f(0.90f, 0.5f);

    glVertex2f(0.90f, -0.50f);
    glVertex2f(0.43f, -0.50f);

    glVertex2f(0.43f, 0.5f);
    glVertex2f(0.43f, -0.50f);

    glVertex2f(0.90f, 0.5f);
    glVertex2f(0.90f, -0.50f);

    glVertex2f(0.50f, 0.40f);
    glVertex2f(0.83f, 0.40f);

    glVertex2f(0.50f, 0.07f);
    glVertex2f(0.83f, 0.07f);

    glVertex2f(0.50f, 0.40f);
    glVertex2f(0.50f, 0.07f);

    glVertex2f(0.83f, 0.40f);
    glVertex2f(0.83f, 0.07f);

    glVertex2f(0.50f, -0.03f);
    glVertex2f(0.83f, -0.03f);

    glVertex2f(0.50f, -0.39f);
    glVertex2f(0.83f, -0.39f);

    glVertex2f(0.50f, -0.03f);
    glVertex2f(0.50f, -0.39f);

    glVertex2f(0.83f, -0.03f);
    glVertex2f(0.83f, -0.39f);

    glEnd();
    glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
    glutInit(&argc, argv);                 // Initialize GLUT
    glutCreateWindow("AIUB"); // Create a window with the given title
    glutInitWindowSize(420, 420);   // Set the window's initial width & height
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop();           // Enter the event-processing loop
    return 0;
}

