#include<windows.h>
#include<GL/glut.h>
#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<cstdio>

float i;
float PI=3.1416;
GLfloat carPosition1=0; //translator factor
GLfloat carSpeed1=1.5;

void display1(void) //for day mode
{

        glClear(GL_COLOR_BUFFER_BIT);
        glColor3ub(10, 196,236);  // color of sky

        glBegin(GL_QUADS);
	    glVertex2i(-100,-20);
	    glVertex2i(-100,100);
        glVertex2i(100,100);
	    glVertex2i(100,-20);
	    glEnd();

        glBegin(GL_QUADS);   //House side background
	    glColor3ub(50,205,50);
	    glVertex2i(-100,-20);
	    glVertex2i(-100,-40);
	    glVertex2i(100,-40);
	    glVertex2i(100,-20);
	    glEnd();

        glBegin(GL_QUADS);  //Road background
	    glColor3ub(0,0,0);
	    glVertex2i(-100,-40);
	    glVertex2i(-100,-100);
	    glVertex2i(100,-100);
	    glVertex2i(100,-40);
	    glEnd();

	    glLineWidth(2);
	    glBegin(GL_LINES);   //Road Mark
        glColor3f(253, 254, 254);
        glVertex2i(-100,-70);
        glVertex2i(-80,-70);
        glVertex2i(-70,-70);
        glVertex2i(-50,-70);
        glVertex2i(-60,-70);
        glVertex2i(-40,-70);
        glVertex2i(-30,-70);
        glVertex2i(-10,-70);
        glVertex2i(0,-70);
        glVertex2i(20,-70);
        glVertex2i(30,-70);
        glVertex2i(50,-70);
        glVertex2i(60,-70);
        glVertex2i(80,-70);
        glVertex2i(90,-70);
        glVertex2i(100,-70);
        glEnd();

        glBegin(GL_QUADS);  //Footpath
	    glColor3ub(148, 49, 38);
	    glVertex2i(100,-40);
	    glVertex2i(100,-35);
	    glVertex2i(-100,-35);
	    glVertex2i(-100,-40);
		glColor3ub(203, 67, 53);
        glVertex2i(100,-25);
	    glVertex2i(100,-35);
	    glVertex2i(-100,-35);
        glVertex2i(-100,-25);
	    glEnd();

        //1st HOUSE DESIGN

        //Body Structure
	    glBegin(GL_QUADS);
	    glColor3ub(125, 206, 160);  // house body color(different light sky color)

	    glVertex2i(-40,-22);
	    glVertex2i(-40,40);
	    glVertex2i(-4,40);
	    glVertex2i(-4,-22);
	    glEnd();

	    //Building down
	    glBegin(GL_QUADS);
	    glColor3ub(100, 30, 22); // building down color(deep brown color)

	    glVertex2i(-40,-22);
	    glVertex2i(-41,-25);
	    glVertex2i(-3,-25);
	    glVertex2i(-4,-22);
	    glEnd();

	    //Building top
	    glBegin(GL_TRIANGLES);
	    glColor3ub(135, 54, 0 ); // topper triangle color(brown)

	    glVertex2i(-42,40);
	    glVertex2i(-2,40);
	    glVertex2i(-22,55);
	    glEnd();

        //Building 2nd top
	    glBegin(GL_QUADS);
	    glColor3ub(135, 54, 0); // Building 2nd top color(brown)

        glVertex2i(-42,5);
	    glVertex2i(-40,10);
	    glVertex2i(-4,10);
	    glVertex2i(-2,5);
	    glEnd();

	    //Left top window
	    glBegin(GL_QUADS);
	    glColor3ub(46, 134, 193); // left window color(deep sky blue)

	    glVertex2i(-37,35);
	    glVertex2i(-29,35);
	    glVertex2i(-29,14);
	    glVertex2i(-37,14);
	    glEnd();

        //Left top window line design
	    glLineWidth(3);
	    glBegin(GL_LINES);
	    glColor3ub(23, 32, 42);  // left top window vertical line color(black)

        glVertex2i(-33, 35);
	    glVertex2i(-33, 14);
	    glEnd();

	    glBegin(GL_LINES);
	    glColor3ub(23, 32, 42 ); // left top window horizontal line color(black)

	    glVertex2i(-37, 24.5);
	    glVertex2i(-29, 24.5);
	    glEnd();

	    //Middle top window
	    glBegin(GL_QUADS);
	    glColor3ub(46, 134, 193); // middle top window color(deep sky blue)

	    glVertex2i(-26,35);
	    glVertex2i(-18,35);
	    glVertex2i(-18,14);
	    glVertex2i(-26,14);
	    glEnd();

	    //Middle top window line design
	    glLineWidth(3);
	    glBegin(GL_LINES);
	    glColor3ub(23, 32, 42 );  // middle top window vertical line color(black)

	    glVertex2i(-22, 35);
	    glVertex2i(-22, 14);
	    glEnd();

	    glBegin(GL_LINES);
	    glColor3ub(23, 32, 42 ); // middle top window  horizontal line color(black)

	    glVertex2i(-26, 24.5);
	    glVertex2i(-18, 24.5);
	    glEnd();

	    //Right top window
	    glBegin(GL_QUADS);
	    glColor3ub(46, 134, 193); // right top window color(deep sky blue)

	    glVertex2i(-15,35);
	    glVertex2i(-7,35);
	    glVertex2i(-7,14);
	    glVertex2i(-15,14);
	    glEnd();

        //Right top window design
        glLineWidth(3);
	    glBegin(GL_LINES);
	    glColor3ub(23, 32, 42 ); // right top window  vertical line color(black)

	    glVertex2i(-11, 35);
	    glVertex2i(-11, 14);
     	glEnd();

	    glBegin(GL_LINES);
	    glColor3ub(23, 32, 42 ); //right top window horizontal line color(black)

	    glVertex2i(-15, 24.5);
	    glVertex2i(-7, 24.5);
     	glEnd();

	    //Left down window
	    glBegin(GL_QUADS);
        glColor3ub(46, 134, 193); // left down window color(deep sky blue)

	    glVertex2i(-37,-18);
	    glVertex2i(-29,-18);
	    glVertex2i(-29,2);
	    glVertex2i(-37,2);
	    glEnd();

	    //Left down window line design
	    glLineWidth(3);
	    glBegin(GL_LINES);
	    glColor3ub(23, 32, 42 ); //left down window vertical line color(black)

	    glVertex2i(-33, -18);
	    glVertex2i(-33, 2);
	    glEnd();

	    glBegin(GL_LINES);
	    glColor3ub(23, 32, 42 );  //left down window horizontal line color(black)

	    glVertex2i(-37,-8);
	    glVertex2i(-29,-8);
	    glEnd();

	    //Right down window
	    glBegin(GL_QUADS);
	    glColor3ub(46, 134, 193); // right down window color(deep sky blue)

	    glVertex2i(-15,-18);
	    glVertex2i(-7,-18);
	    glVertex2i(-7,2);
	    glVertex2i(-15,2);
	    glEnd();

	    //Right down window line design
	    glLineWidth(3);
	    glBegin(GL_LINES);
	    glColor3ub(23, 32, 42 ); // right down window vertical line color(black)

        glVertex2i(-11, -18);
	    glVertex2i(-11, 2);
	    glEnd();

	    glBegin(GL_LINES);
	    glColor3ub(23, 32, 42 ); // right down window horizontal line color(black)

	    glVertex2i(-15, -8);
	    glVertex2i(-7, -8);
	    glEnd();

	    //Door design
	    glBegin(GL_QUADS);
	    glColor3ub(46, 134, 193); // door color(deep sky blue)

	    glVertex2i(-26,-22);
	    glVertex2i(-18,-22);
	    glVertex2i(-18,0);
	    glVertex2i(-26,0);
        glEnd();

        // Door line design
	    glLineWidth(3);
	    glBegin(GL_LINES);
	    glColor3ub(23, 32, 42 ); // door horizontal line color(black)

        glVertex2i(-22, -22);
	    glVertex2i(-22, 0);
	    glEnd();


	    //Shopping Mall Design

	    //Down part
	    glBegin(GL_QUADS);
	    glColor3ub(104, 35, 31); //down part of shopping mall color(deep brown)

	    glVertex2i(85,-22);
	    glVertex2i(86,-25);
	    glVertex2i(14,-25);
	    glVertex2i(15,-22);
	    glEnd();

	    //Left Down
	    glBegin(GL_QUADS);
	    glColor3ub(46, 134, 193); // left down part of shopping mall(deep sky blue)

	    glVertex2i(16,-22);
        glVertex2i(16,2);
	    glVertex2i(36,2);
	    glVertex2i(36,-22);
	    glEnd();

	    //Most Left down line-1
	    glLineWidth(3);
	    glBegin(GL_LINES);

	    glColor3ub(23, 32, 42 ); //most left down vertical line-1(black color)
        glVertex2i(20, -22);
	    glVertex2i(20, 2);
        glEnd();

        //Left down line-2
        glLineWidth(3);
	    glBegin(GL_LINES);
	    glColor3ub(23, 32, 42 ); //left down vertical line-2(black color)

        glVertex2i(33, -22);
	    glVertex2i(33, 2);
	    glEnd();

       //Left down rectangle
	   glBegin(GL_QUADS);
	   glColor3ub(245, 103, 16); //left down rectangle(orange color)

	   glVertex2i(15,6);
	   glVertex2i(15,2);
	   glVertex2i(36,2);
	   glVertex2i(36,6);
	   glEnd();

	   //Left Top
	   glBegin(GL_QUADS);
	   glColor3ub(46, 134, 193); // left top of shopping mall color(deep sky blue)

	   glVertex2i(16,6);
	   glVertex2i(16,29);
	   glVertex2i(36,29);
	   glVertex2i(36,6);
	   glEnd();

       //Most Left Top line-1
	   glLineWidth(3);
	   glBegin(GL_LINES);
	   glColor3ub(23, 32, 42 ); //most left top vertical line-1(black color)

       glVertex2i(20, 6);
	   glVertex2i(20, 29);
	   glEnd();

       //Left Top line-2
	   glLineWidth(3);
	   glBegin(GL_LINES);
       glColor3ub(23, 32, 42 ); //left top vertical line-2(Black color)

       glVertex2i(33, 6);
	   glVertex2i(33, 29);
       glEnd();

	   //Left Top rectangle
	   glBegin(GL_QUADS);
       glColor3ub(80, 33, 18); // left top rectangle(deep brown)

	   glVertex2i(16,31);
	   glVertex2i(16,29);
	   glVertex2i(36,29);
	   glVertex2i(36,31);
	   glEnd();

	   // Most Left Top
	   glBegin(GL_QUADS);
	   glColor3ub(231, 76, 60); //most left top color(light red)

	   glVertex2i(13,40);
	   glVertex2i(16,31);
	   glVertex2i(36,31);
	   glVertex2i(36,36);
	   glEnd();

	   //Right Down
	   glBegin(GL_QUADS);
	   glColor3ub(46, 134, 193); //right down of shopping mall color(deep sky blue)

	   glVertex2i(60,-22);
	   glVertex2i(61.99,2);
	   glVertex2i(84,2);
	   glVertex2i(84,-22);
	   glEnd();

	   //Right down line-1
	   glLineWidth(3);
	   glBegin(GL_LINES);
	   glColor3ub(23, 32, 42 ); //right down vertical line-1(black color)

       glVertex2i(66, -22);
	   glVertex2i(66, 2);
	   glEnd();

       //Most Right Down Line-2
       glLineWidth(3);
	   glBegin(GL_LINES);
	   glColor3ub(23, 32, 42 ); //most right down vertical line-2(black color)

       glVertex2i(80, -22);
	   glVertex2i(80, 2);
	   glEnd();

	   //Right down rectangle
	   glBegin(GL_QUADS);
	   glColor3ub(245, 103, 16); //right down rectangle(orange color)

	   glVertex2i(61.99,6);
	   glVertex2i(61.99,2);
	   glVertex2i(85,2);
	   glVertex2i(85,6);
	   glEnd();

	   //Right Top
	   glBegin(GL_QUADS);
	   glColor3ub(46, 134, 193); //right top of shopping mall color(deep sky blue)

	   glVertex2i(61.99,6);
	   glVertex2i(61.99,29);
	   glVertex2i(84,29);
	   glVertex2i(84,6);
       glEnd();

       //Right Top Line-1
       glLineWidth(3);
	   glBegin(GL_LINES);
	   glColor3ub(23, 32, 42 ); //right top vertical line-1(black color)

       glVertex2i(66, 6);
	   glVertex2i(66, 29);
	   glEnd();

	   //Most Right Top line-2
	   glLineWidth(3);
	   glBegin(GL_LINES);
	   glColor3ub(23, 32, 42 ); //most right top vertical line-2(black color)

       glVertex2i(80, 6);
	   glVertex2i(80, 29);
	   glEnd();


	   //Right Top rectangle
	   glBegin(GL_QUADS);
	   glColor3ub(80, 33, 18); //right top rectangle color(deep brown)

	   glVertex2i(61.99,31);
	   glVertex2i(61.99,29);
	   glVertex2i(84,29);
	   glVertex2i(84,31);
	   glEnd();

	   // Most Right Top
	   glBegin(GL_QUADS);
	   glColor3ub(231, 76, 60); //most right top color(light red)

	   glVertex2i(61.99,36);
	   glVertex2i(61.99,31);
	   glVertex2i(84,31);
	   glVertex2i(83,36);
	   glEnd();

	   //Gate body design of shopping mall
	   glBegin(GL_QUADS);
	   glColor3ub(234, 29, 16); // gate body color(red)

	   glVertex2i(36,-22);
	   glVertex2i(36,42);
	   glVertex2i(66,49);
	   glVertex2i(62,-22);
	   glEnd();

	   //Door of shopping mall
       glBegin(GL_QUADS);
	   glColor3ub(46, 134, 193); // door of shopping mall color(deep sky blue)

	   glVertex2i(43,-22);
	   glVertex2i(43,0);
	   glVertex2i(54,0);
       glVertex2i(54,-22);
	   glEnd();

	   //Door Line Design
	   glLineWidth(3);
	   glBegin(GL_LINES); //door line design color(black)

	   glColor3ub(23, 32, 42 );
       glVertex2i(49, -22);
	   glVertex2i(49, 0);
       glEnd();

	   //Gate Top box design
	   glBegin(GL_QUADS);
	   glColor3ub(110, 44, 0); //Gate Top box design(deep brown)

	   glVertex2i(40,35);
	   glVertex2i(60,35);
	   glVertex2i(60,15);
	   glVertex2i(40,15);
	   glEnd();


       //Translation of car
	   glPushMatrix();
       glTranslatef(carPosition1,0.0f,0.0f); // x-axis translation

       //Car Body
	   glBegin(GL_QUADS);
	   glColor3ub(125, 60, 152); //car body color(purple)

	   glVertex2i(50,-70);
	   glVertex2i(85,-70);
       glVertex2i(87,-80);
       glVertex2i(48,-80);
       glVertex2i(58,-70);
       glVertex2i(61,-60);
	   glVertex2i(76,-60);
	   glVertex2i(78,-70);
       glEnd();

       //Car Glass
	   glBegin(GL_QUADS);
	   glColor3ub(52, 152, 219); //car glass color(light sky blue)

	   glVertex2i(59,-70);
	   glVertex2i(62,-61);
       glVertex2i(75,-61);
       glVertex2i(77,-70);
       glEnd();

       //Car Vertical Line
       glLineWidth(2);
       glBegin(GL_LINES); //car vertical line(black)
       glColor3f(0,0,0);

       glVertex2i(69,-80);
       glVertex2i(69,-61);
       glEnd();

       //Car Horizontal Line
       glLineWidth(2);
       glBegin(GL_LINES); //car horizontal line(black)
       glColor3f(0,0,0);

       glVertex2i(58,-70);
       glVertex2i(78,-70);
       glEnd();

       //Left Car Bumper
	   glBegin(GL_QUADS);
	   glColor3ub(46, 64, 83); //left car bumper color(black)

	   glVertex2i(46,-80);
	   glVertex2i(53,-80);
       glVertex2i(53,-76);
       glVertex2i(46,-76);
       glEnd();


       //Right Car Bumper
	   glBegin(GL_QUADS);
	   glColor3ub(46, 64, 83); //right car bumper color(black)

       glVertex2i(88,-80);
	   glVertex2i(82,-80);
	   glVertex2i(82,-76);
	   glVertex2i(88,-76);
       glEnd();

       //Left Car Light
	   glBegin(GL_QUADS);
       glColor3ub(226, 224, 224); //left car light color(white)

       glVertex2i(51,-70);
	   glVertex2i(49,-70);
	   glVertex2i(49,-72);
	   glVertex2i(51,-72);
       glEnd();

        //Right Car Light
	   glBegin(GL_QUADS);
       glColor3ub(236, 67, 34); //right car light color(light red)

	   glVertex2i(84,-70);
	   glVertex2i(85,-70);
       glVertex2i(85,-75);
	   glVertex2i(84,-75);
       glEnd();

       //Left border circle
       float x, y;
       float PI = 3.1416;
       int i;
       float radius;
       int triangleAmount = 40; // for full fill whole circle
       GLfloat twicePi = 2.0f * PI;

       glBegin(GL_TRIANGLE_FAN);
       glColor3ub(40, 55, 71 ); //left border circle color(black)

       x=60; y=-80; radius=5; //center
       twicePi = 2.0f * PI;
       glVertex2f(x, y); // center of circle

       for(i =0; i <= triangleAmount;i++)
        {
           glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)),
                      y + (radius * sin(i * twicePi / triangleAmount)));
        }
        glEnd();

        //Left inside circle
        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(153, 163, 164);   //left inside circle color(gray)

        x=60; y=-80; radius=3;
        twicePi = 2.0f * PI;
        glVertex2f(x, y); // center of circle

        for(i = 0; i <= triangleAmount;i++)
        {
               glVertex2f( x + (radius * cos(i *  twicePi / triangleAmount)),
                           y + (radius * sin(i * twicePi / triangleAmount)));
        }
        glEnd();

        //Right border circle
        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(40, 55, 71 ); //right border circle(black color)

        x=75; y=-80; radius=5;
        twicePi = 2.0f * PI;
        glVertex2f(x, y); // center of circle

        for(i = 0; i <= triangleAmount;i++)
        {
             glVertex2f( x + (radius * cos(i *  twicePi / triangleAmount)),
                         y + (radius * sin(i * twicePi / triangleAmount)));
        }
        glEnd();

         //Right inside cicle
        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(153, 163, 164); //right inside circle color(gray)

        x=75; y=-80; radius =3;
        twicePi = 2.0f * PI;
        glVertex2f(x, y); // center of circle

        for(i = 0; i <= triangleAmount;i++)
        {
            glVertex2f( x + (radius * cos(i *  twicePi / triangleAmount)),
                        y + (radius * sin(i * twicePi / triangleAmount)));
        }
        glEnd();

       glPopMatrix();

       glFlush();
}

void display2(void) //for display night mode
{

       float x,y;
       int i;
       GLfloat radius;
       int triangleAmount =40;
       GLfloat twicePi = 2.0f * PI;

       //Night Mode Sky
       glBegin(GL_QUADS);
	   glColor3ub(7, 26, 116 ); //night mode sky(deep navy blue)

	   glVertex2i(-100,-20);
	   glVertex2i(-100,100);
	   glVertex2i(100,100);
	   glVertex2i(100,-20);
	   glEnd();

       //Night Mode Grass
       glBegin(GL_QUADS);
       glColor3ub(136, 221, 12 ); //night mode grass(light green)

       glVertex2i(-100,-20);
       glVertex2i(-100,-40);
       glVertex2i(100,-40);
       glVertex2i(100,-20);
       glEnd();

       //Road background
       glBegin(GL_QUADS);
	   glColor3ub(0,0,0); //black

	   glVertex2i(-100,-40);
	   glVertex2i(-100,-100);
	   glVertex2i(100,-100);
	   glVertex2i(100,-40);
	   glEnd();

       glLineWidth(2.0f);
       glBegin(GL_LINES);
       glColor3f(253, 254, 254);
       glVertex2i(-100,-70);
       glVertex2i(-80,-70);
       glVertex2i(-70,-70);
       glVertex2i(-50,-70);
       glVertex2i(-60,-70);
       glVertex2i(-40,-70);
       glVertex2i(-30,-70);
       glVertex2i(-10,-70);
       glVertex2i(0,-70);
       glVertex2i(20,-70);
       glVertex2i(30,-70);
       glVertex2i(50,-70);
       glVertex2i(60,-70);
       glVertex2i(80,-70);
       glVertex2i(90,-70);
       glVertex2i(100,-70);
       glEnd();

       //Footpath
	   glBegin(GL_QUADS);
	   glColor3ub(148, 49, 38);
	   glVertex2i(100,-40);
	   glVertex2i(100,-35);
	   glVertex2i(-100,-35);
	   glVertex2i(-100,-40);
       glColor3ub(203, 67, 53);
       glVertex2i(100,-25);
	   glVertex2i(100,-35);
	   glVertex2i(-100,-35);
       glVertex2i(-100,-25);
	   glEnd();


	    //1st HOUSE DESIGN

        //Body Structure
	    glBegin(GL_QUADS);
	    glColor3ub(125, 206, 160);  // house body color(different light sky color)

	    glVertex2i(-40,-22);
	    glVertex2i(-40,40);
	    glVertex2i(-4,40);
	    glVertex2i(-4,-22);
	    glEnd();

	    //Building down
	    glBegin(GL_QUADS);
	    glColor3ub(100, 30, 22); // building down color(deep brown color)

	    glVertex2i(-40,-22);
	    glVertex2i(-41,-25);
	    glVertex2i(-3,-25);
	    glVertex2i(-4,-22);
	    glEnd();

	    //Building top
	    glBegin(GL_TRIANGLES);
	    glColor3ub(135, 54, 0 ); // topper triangle color(brown)

	    glVertex2i(-42,40);
	    glVertex2i(-2,40);
	    glVertex2i(-22,55);
	    glEnd();

        //Building 2nd top
	    glBegin(GL_QUADS);
	    glColor3ub(135, 54, 0); // Building 2nd top color(brown)

        glVertex2i(-42,5);
	    glVertex2i(-40,10);
	    glVertex2i(-4,10);
	    glVertex2i(-2,5);
	    glEnd();

	    //Left top window
	    glBegin(GL_QUADS);
	    glColor3ub(251, 250, 0); // left window color(yellow)

	    glVertex2i(-37,35);
	    glVertex2i(-29,35);
	    glVertex2i(-29,14);
	    glVertex2i(-37,14);
	    glEnd();

        //Left top window line design
	    glLineWidth(3);
	    glBegin(GL_LINES);
	    glColor3ub(23, 32, 42);  // left top window vertical line color(black)

        glVertex2i(-33, 35);
	    glVertex2i(-33, 14);
	    glEnd();

	    glBegin(GL_LINES);
	    glColor3ub(23, 32, 42 ); // left top window horizontal line color(black)

	    glVertex2i(-37, 24.5);
	    glVertex2i(-29, 24.5);
	    glEnd();

	    //Middle top window
	    glBegin(GL_QUADS);
	    glColor3ub(251, 250, 0); // middle top window color(yellow)

	    glVertex2i(-26,35);
	    glVertex2i(-18,35);
	    glVertex2i(-18,14);
	    glVertex2i(-26,14);
	    glEnd();

	    //Middle top window line design
	    glLineWidth(3);
	    glBegin(GL_LINES);
	    glColor3ub(23, 32, 42 );  // middle top window vertical line color(black)

	    glVertex2i(-22, 35);
	    glVertex2i(-22, 14);
	    glEnd();

	    glBegin(GL_LINES);
	    glColor3ub(23, 32, 42 ); // middle top window  horizontal line color(black)

	    glVertex2i(-26, 24.5);
	    glVertex2i(-18, 24.5);
	    glEnd();

	    //Right top window
	    glBegin(GL_QUADS);
	    glColor3ub(251, 250, 0); //right top window color(yellow)

	    glVertex2i(-15,35);
	    glVertex2i(-7,35);
	    glVertex2i(-7,14);
	    glVertex2i(-15,14);
	    glEnd();

        //Right top window design
        glLineWidth(3);
	    glBegin(GL_LINES);
	    glColor3ub(23, 32, 42 ); // right top window  vertical line color(black)

	    glVertex2i(-11, 35);
	    glVertex2i(-11, 14);
     	glEnd();

	    glBegin(GL_LINES);
	    glColor3ub(23, 32, 42 ); //right top window horizontal line color(black)

	    glVertex2i(-15, 24.5);
	    glVertex2i(-7, 24.5);
     	glEnd();

	    //Left down window
	    glBegin(GL_QUADS);
        glColor3ub(251, 250, 0); // left down window color(yellow)

	    glVertex2i(-37,-18);
	    glVertex2i(-29,-18);
	    glVertex2i(-29,2);
	    glVertex2i(-37,2);
	    glEnd();

	    //Left down window line design
	    glLineWidth(3);
	    glBegin(GL_LINES);
	    glColor3ub(23, 32, 42 ); //left down window vertical line color(black)

	    glVertex2i(-33, -18);
	    glVertex2i(-33, 2);
	    glEnd();

	    glBegin(GL_LINES);
	    glColor3ub(23, 32, 42 );  //left down window horizontal line color(black)

	    glVertex2i(-37,-8);
	    glVertex2i(-29,-8);
	    glEnd();

	    //Right down window
	    glBegin(GL_QUADS);
	    glColor3ub(251, 250, 0); // right down window color(yellow)

	    glVertex2i(-15,-18);
	    glVertex2i(-7,-18);
	    glVertex2i(-7,2);
	    glVertex2i(-15,2);
	    glEnd();

	    //Right down window line design
	    glLineWidth(3);
	    glBegin(GL_LINES);
	    glColor3ub(23, 32, 42 ); // right down window vertical line color(black)

        glVertex2i(-11, -18);
	    glVertex2i(-11, 2);
	    glEnd();

	    glBegin(GL_LINES);
	    glColor3ub(23, 32, 42 ); // right down window horizontal line color(black)

	    glVertex2i(-15, -8);
	    glVertex2i(-7, -8);
	    glEnd();

	    //Door design
	    glBegin(GL_QUADS);
	    glColor3ub(46, 134, 193); // door color(deep sky blue)

	    glVertex2i(-26,-22);
	    glVertex2i(-18,-22);
	    glVertex2i(-18,0);
	    glVertex2i(-26,0);
        glEnd();

        // Door line design
	    glLineWidth(3);
	    glBegin(GL_LINES);
	    glColor3ub(23, 32, 42 ); // door horizontal line color(black)

        glVertex2i(-22, -22);
	    glVertex2i(-22, 0);
	    glEnd();



	    //Shopping Mall Design

	    //Down part
	    glBegin(GL_QUADS);
	    glColor3ub(104, 35, 31); // down part of shopping mall color(deep brown)

	    glVertex2i(85,-22);
	    glVertex2i(86,-25);
	    glVertex2i(14,-25);
	    glVertex2i(15,-22);
	    glEnd();

	    //Left Down
	    glBegin(GL_QUADS);
	    glColor3ub(19, 47, 112); // left down part of shopping mall(deep blue)

	    glVertex2i(16,-22);
        glVertex2i(16,2);
	    glVertex2i(36,2);
	    glVertex2i(36,-22);
	    glEnd();

	    //Most Left down line-1
	    glLineWidth(3);
	    glBegin(GL_LINES);

	    glColor3ub(23, 32, 42 ); //most left down vertical line-1(black color)
        glVertex2i(20, -22);
	    glVertex2i(20, 2);
        glEnd();

        //Left down line-2
        glLineWidth(3);
	    glBegin(GL_LINES);
	    glColor3ub(23, 32, 42 ); //left down vertical line-2(black color)

        glVertex2i(33, -22);
	    glVertex2i(33, 2);
	    glEnd();

       //Left down rectangle
       glBegin(GL_QUADS);
       glColor3ub(245, 103, 16); //left down rectangle(orange color)

	   glVertex2i(15,6);
	   glVertex2i(15,2);
	   glVertex2i(36,2);
	   glVertex2i(36,6);
	   glEnd();

	   //Left Top
	   glBegin(GL_QUADS);
	   glColor3ub(19, 47, 112); // left top of shopping mall color(deep blue)

	   glVertex2i(16,6);
	   glVertex2i(16,29);
	   glVertex2i(36,29);
	   glVertex2i(36,6);
	   glEnd();

       //Most Left Top line-1
	   glLineWidth(3);
	   glBegin(GL_LINES);
	   glColor3ub(23, 32, 42 ); //most left top vertical line-1(black color)

       glVertex2i(20, 6);
	   glVertex2i(20, 30);
	   glEnd();

       //Left Top line-2
	   glLineWidth(3);
	   glBegin(GL_LINES);
       glColor3ub(23, 32, 42 ); //left top vertical line-2(Black color)

       glVertex2i(33, 6);
	   glVertex2i(33, 30);
       glEnd();

	   //Left Top rectangle
	   glBegin(GL_QUADS);
       glColor3ub(80, 33, 18); // left top rectangle(deep brown)

	   glVertex2i(16,31);
	   glVertex2i(16,29);
	   glVertex2i(36,29);
	   glVertex2i(36,31);
	   glEnd();

	   // Most Left Top
	   glBegin(GL_QUADS);
	   glColor3ub(231, 76, 60); //most left top color(light red)

	   glVertex2i(13,39);
	   glVertex2i(16,31);
	   glVertex2i(36,31);
	   glVertex2i(36,36);
	   glEnd();

	   //Right Down
	   glBegin(GL_QUADS);
	   glColor3ub(19, 47, 112); //right down of shopping mall color(deep blue)

	   glVertex2i(60,-22);
	   glVertex2i(61.99,2);
	   glVertex2i(84,2);
	   glVertex2i(84,-22);
	   glEnd();

	   //Right down line-1
	   glLineWidth(3);
	   glBegin(GL_LINES);
	   glColor3ub(23, 32, 42 ); //right down vertical line-1(black color)

       glVertex2i(66, -22);
	   glVertex2i(66, 2);
	   glEnd();

       //Most Right Down Line-2
       glLineWidth(3);
	   glBegin(GL_LINES);
	   glColor3ub(23, 32, 42 ); //most right down vertical line-2(black color)

       glVertex2i(80, -22);
	   glVertex2i(80, 2);
	   glEnd();

	   //Right down rectangle
	   glBegin(GL_QUADS);
	   glColor3ub(245, 103, 16); //right down rectangle(orange color)

	   glVertex2i(60,6);
	   glVertex2i(60,2);
	   glVertex2i(85,2);
	   glVertex2i(85,6);
	   glEnd();

	   //Right Top
	   glBegin(GL_QUADS);
	   glColor3ub(19, 47, 112); //right top of shopping mall color(deep sky blue)

	   glVertex2i(60,6);
	   glVertex2i(60,29);
	   glVertex2i(84,29);
	   glVertex2i(84,6);
       glEnd();

       //Right Top Line-1
       glLineWidth(3);
	   glBegin(GL_LINES);
	   glColor3ub(23, 32, 42 ); //right top vertical line-1(black color)

       glVertex2i(66, 6);
	   glVertex2i(66, 30);
	   glEnd();

	   //Most Right Top line-2
	   glLineWidth(3);
	   glBegin(GL_LINES);
	   glColor3ub(23, 32, 42 ); //most right top vertical line-2(black color)

       glVertex2i(80, 6);
	   glVertex2i(80, 30);
	   glEnd();


	   //Right Top rectangle
	   glBegin(GL_QUADS);
	   glColor3ub(80, 33, 18); //right top rectangle color(deep brown)

	   glVertex2i(60,31);
	   glVertex2i(60,29);
	   glVertex2i(84,29);
	   glVertex2i(84,31);
	   glEnd();

	   // Most Right Top
	   glBegin(GL_QUADS);
	   glColor3ub(231, 76, 60); //most right top color(light red)

	   glVertex2i(60,36);
	   glVertex2i(60,31);
	   glVertex2i(84,31);
	   glVertex2i(83,35);
	   glEnd();

	   //Gate body design of shopping mall
	   glBegin(GL_QUADS);
	   glColor3ub(234, 29, 16); // gate body color(red)

	   glVertex2i(36,-22);
	   glVertex2i(36,42);
	   glVertex2i(66,49);
	   glVertex2i(62,-22);
	   glEnd();

	   //Door of shopping mall
       glBegin(GL_QUADS);
	   glColor3ub(19, 47, 112); // door of shopping mall color(deep blue)

	   glVertex2i(43,-22);
	   glVertex2i(43,0);
	   glVertex2i(54,0);
       glVertex2i(54,-22);
	   glEnd();

	   //Door Line Design
	   glLineWidth(3);
	   glBegin(GL_LINES); //door line design color(black)

	   glColor3ub(23, 32, 42 );
       glVertex2i(49, -22);
	   glVertex2i(49, 0);
       glEnd();

	   //Gate Top box design
	   glBegin(GL_QUADS);
	   glColor3ub(110, 44, 0);
	   glVertex2i(40,35);
	   glVertex2i(60,35);
	   glVertex2i(60,15);
	   glVertex2i(40,15);
	   glEnd();


       //Translation of car
       glPushMatrix();
       glTranslatef(carPosition1,0.0f,0.0f);

       //Car Body
	   glBegin(GL_QUADS);
	   glColor3ub(125, 60, 152); //car body color(purple)

	   glVertex2i(50,-70);
	   glVertex2i(85,-70);
       glVertex2i(87,-80);
       glVertex2i(48,-80);
       glVertex2i(58,-70);
       glVertex2i(61,-60);
	   glVertex2i(76,-60);
	   glVertex2i(78,-70);
       glEnd();

       //Car Glass
	   glBegin(GL_QUADS);
	   glColor3ub(52, 152, 219); //car glass color(light sky blue)

	   glVertex2i(59,-70);
	   glVertex2i(62,-61);
       glVertex2i(75,-61);
       glVertex2i(77,-70);
       glEnd();



       //Car Vertical Line
       glLineWidth(2);
       glBegin(GL_LINES); //car vertical line(black)
       glColor3f(0,0,0);

       glVertex2i(69,-80);
       glVertex2i(69,-60);
       glEnd();

       //Car Horizontal Line
       glLineWidth(2);
       glBegin(GL_LINES); //car horizontal line(black)
       glColor3f(0,0,0);

       glVertex2i(58,-70);
       glVertex2i(78,-70);
       glEnd();


       //Left Car Bumper
	   glBegin(GL_QUADS);
	   glColor3ub(46, 64, 83); //left car bumper color(black)

	   glVertex2i(46,-80);
	   glVertex2i(53,-80);
       glVertex2i(53,-76);
       glVertex2i(46,-76);
       glEnd();

       //Right Car Bumper
	   glBegin(GL_QUADS);
	   glColor3ub(46, 64, 83); //right car bumper color(black)

       glVertex2i(88,-80);
	   glVertex2i(82,-80);
	   glVertex2i(82,-76);
	   glVertex2i(88,-76);
       glEnd();

       //Left Car Light
	   glBegin(GL_QUADS);
       glColor3ub(226, 224, 224); //left car light color(white)

       glVertex2i(51,-70);
	   glVertex2i(49,-70);
	   glVertex2i(49,-72);
	   glVertex2i(51,-72);
       glEnd();

        //Right Car Light
	   glBegin(GL_QUADS);
       glColor3ub(236, 67, 34); //right car light color(light red)

	   glVertex2i(84,-70);
	   glVertex2i(85,-70);
       glVertex2i(85,-75);
	   glVertex2i(84,-75);
       glEnd();

       //Front Light Night Mode
	   glBegin(GL_QUADS);
	   glColor3ub(251, 250,0 ); //font light night mode (yellow)

	   glVertex2i(49,-73);
	   glVertex2i(49,-70);
	   glVertex2i(14,-76);
	   glVertex2i(29,-79);
	   glEnd();

       //Left border circle
       glBegin(GL_TRIANGLE_FAN);
       glColor3ub(40, 55, 71 );//left border circle (black color)

       x=60; y=-80; radius=5;
       twicePi = 2.0f * PI;
       glVertex2f(x, y); // center of circle

       for(i = 0; i <= triangleAmount;i++)
       {
            glVertex2f( x + (radius * cos(i *  twicePi / triangleAmount)),
                        y + (radius * sin(i * twicePi / triangleAmount)));
       }

       glEnd();

       //Left inside circle
       glBegin(GL_TRIANGLE_FAN);
       glColor3ub(153, 163, 164); //left inside circle color(gray)

       x=60; y=-80; radius =3;
       twicePi = 2.0f * PI;
       glVertex2f(x, y); // center of circle

       for(i = 0; i <= triangleAmount;i++)
       {
             glVertex2f( x + (radius * cos(i *  twicePi / triangleAmount)),
                         y + (radius * sin(i * twicePi / triangleAmount)));
       }
       glEnd();

        //Right border circle
        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(40, 55, 71 ); //right border circle(black color)

        x=75; y=-80; radius =5;
        twicePi = 2.0f * PI;
        glVertex2f(x, y); // center of circle

        for(i = 0; i <= triangleAmount;i++)
        {
           glVertex2f( x + (radius * cos(i *  twicePi / triangleAmount)),
                       y + (radius * sin(i * twicePi / triangleAmount)));
        }
        glEnd();

        //Right inside circle
        glBegin(GL_TRIANGLE_FAN);
        glColor3ub(153, 163, 164); //right inside circle color(gray)

        x=75; y=-80; radius =3;
        twicePi = 2.0f * PI;
        glVertex2f(x, y); // center of circle

        for(i = 0; i <= triangleAmount;i++)
        {
             glVertex2f( x + (radius * cos(i *  twicePi / triangleAmount)),
                         y + (radius * sin(i * twicePi / triangleAmount)));
        }
        glEnd();

       glPopMatrix();
	   glFlush();

}

void update(int value)
{

       if(carPosition1<-180)
       {
          carPosition1=70;
       }

       carPosition1-=carSpeed1;
       glutPostRedisplay();
       glutTimerFunc(100, update, 0);
}

void handleKeypress(unsigned char key, int x, int y)
{

	   switch (key)
	   {

         case 'a':
             glutDisplayFunc(display1); // day mode
             glutPostRedisplay();
         break;

         case 'b':
             glutDisplayFunc(display2); //night mode
             glutPostRedisplay();
         break;

	     glutPostRedisplay();
	   }

}

void init(void)
{
       glClearColor (1.0, 1.0, 1.0, 0.0);
       glMatrixMode(GL_PROJECTION);
       glLoadIdentity();
       glOrtho(-100.0, 100.0, -100.0, 100.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
       glutInit(&argc, argv);
	   glutInitDisplayMode(GLUT_SINGLE| GLUT_RGB | GLUT_DEPTH);
	   glutInitWindowSize(1200, 600);
	   glutCreateWindow("Covid-19");
	   glutKeyboardFunc(handleKeypress);
	   glutDisplayFunc(display1);
	   init();
	   glutTimerFunc(1, update, 0);
	   glutMainLoop();
	   return 0;

}
