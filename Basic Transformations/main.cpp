#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include<vector>
#include<math.h>
using namespace std;


int pntX1, pntY1, choice = 0, edges;
vector<int> pntX;
vector<int> pntY;
int transX, transY;
double scaleX, scaleY;
double angle, angleintoRad;


/*double round(double d)
{
return floor(d + 0.5);
}*/

void drawPolygon()
{
glBegin(GL_POLYGON);
glColor3f(1.0, 0.0, 0.0);
for (int i = 0; i < edges; i++)
{
glVertex2i(pntX[i], pntY[i]);
}
glEnd();
}


void drawPolygonTrans(int tx, int ty)
{
glBegin(GL_POLYGON);
glColor3f(0.0, 1.0, 0.0);
for (int i = 0; i < edges; i++)
{
glVertex2i(pntX[i] + tx, pntY[i] + ty);
}
glEnd();
}


void drawPolygonScale(double sx, double sy)
{
glBegin(GL_POLYGON);
glColor3f(0.0, 1.0, 0.0);
for (int i = 0; i < edges; i++)
{
glVertex2i(pntX[i] * sx, pntY[i] * sy);
}
glEnd();
}


void drawPolygonRotate(double angleintoRad)
{
glBegin(GL_POLYGON);
glColor3f(0.0, 1.0, 0.0);
for (int i = 0; i < edges; i++)
{
glVertex2i(((pntX[i]*cos(angleintoRad))-(pntY[i]*sin(angleintoRad))), ((pntX[i]*sin(angleintoRad))+(pntY[i]*cos(angleintoRad))));
}
glEnd();
}

void myInit(void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
glColor3f(0.0f, 0.0f, 0.0f);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
//gluOrtho2D(-640.0, 640.0, -480.0, 480.0);
glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);

}


void myDisplay(void)
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.0, 0.0, 0.0);

if (choice == 1)
{
drawPolygon();
drawPolygonTrans(transX, transY);
}

if (choice == 2)
{
drawPolygon();
drawPolygonScale(scaleX, scaleY);
}

if (choice == 3)
{
drawPolygon();
drawPolygonRotate(angleintoRad);
}

glFlush();
}

int main(int argc, char** argv)
{
cout << "Enter your choice:\n\n" << endl;

cout << "1. Translation" << endl;
cout << "2. Scaling" << endl;
cout << "3. Rotation" << endl;
cout << "4. Exit" << endl;


cin >> choice;

if (choice == 4) {
return 0;
}

cout << "\n\nFor Polygon:\n" << endl;

cout << "Enter no of edges: "; cin >> edges;

for (int i = 0; i < edges; i++)
{
cout << "Enter co-ordinates for vertex  " << i + 1 << " : "; cin >> pntX1 >> pntY1;
pntX.push_back(pntX1);
pntY.push_back(pntY1);
}

if (choice == 1)
{
cout << "Enter the translation factor for X and Y: "; cin >> transX >> transY;
}

if (choice == 2)
{
cout << "Enter the scalling factor for X and Y: "; cin >> scaleX >> scaleY;
}

if (choice == 3)
{
cout << "Enter the rotation angle: "; cin >> angle;
		angleintoRad = angle*(3.1416 / 180);
}


glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(640, 480);
glutInitWindowPosition(100, 150);
glutCreateWindow("Basic Transformations");
glutDisplayFunc(myDisplay);
myInit();
glutMainLoop();
    return 0;
}

