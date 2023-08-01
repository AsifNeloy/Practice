#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>
/* Initialize OpenGL Graphics */
void initGL() {
	// Set "clearing" or background color
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // White and opaque
	glLoadIdentity(); //Reset the drawing perspective
	gluOrtho2D(-100,100,-100,100);
}
void Building1()//B1
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(-2.5f, -100.0f);
	glVertex2f(-2.5f, -55.0f);
	glVertex2f(2.5f, -55.0f);
	glVertex2f(2.5f, -100.0f);
	glEnd();
}
void Building2()//B2 have window
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(-2.5f, -100.0f);
	glVertex2f(-2.5f, 1.0f);
	glVertex2f(-20.5f, 1.0f);
	glVertex2f(-20.5f, -100.0f);
	glEnd();
	//Window 1
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -14.0f);
	glVertex2f(-14.0f, -14.0f);
	glVertex2f(-14.0f, -4.0f);
	glEnd();
	//Window 2
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-5.0f, -4.0f);
	glVertex2f(-5.0f, -14.0f);
	glVertex2f(-9.0f, -14.0f);
	glVertex2f(-9.0f, -4.0f);
	glEnd();
	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
	glTranslatef(0.0f, -15.0f, 0.0f);
	//Window 3
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -14.0f);
	glVertex2f(-14.0f, -14.0f);
	glVertex2f(-14.0f, -4.0f);
	glEnd();
	//Window 4
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-5.0f, -4.0f);
	glVertex2f(-5.0f, -14.0f);
	glVertex2f(-9.0f, -14.0f);
	glVertex2f(-9.0f, -4.0f);
	glEnd();
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
	glTranslatef(0.0f, -30.0f, 0.0f);
	//Window 5
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -14.0f);
	glVertex2f(-14.0f, -14.0f);
	glVertex2f(-14.0f, -4.0f);
	glEnd();
	//Window 6
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-5.0f, -4.0f);
	glVertex2f(-5.0f, -14.0f);
	glVertex2f(-9.0f, -14.0f);
	glVertex2f(-9.0f, -4.0f);
	glEnd();
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
	glTranslatef(0.0f, -45.0f, 0.0f);
	//Window 7
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -14.0f);
	glVertex2f(-14.0f, -14.0f);
	glVertex2f(-14.0f, -4.0f);
	glEnd();
	//Window 8
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-5.0f, -4.0f);
	glVertex2f(-5.0f, -14.0f);
	glVertex2f(-9.0f, -14.0f);
	glVertex2f(-9.0f, -4.0f);
	glEnd();
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
	glTranslatef(0.0f, -60.0f, 0.0f);
	//Window 9
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -14.0f);
	glVertex2f(-14.0f, -14.0f);
	glVertex2f(-14.0f, -4.0f);
	glEnd();
	//Window 10
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-5.0f, -4.0f);
	glVertex2f(-5.0f, -14.0f);
	glVertex2f(-9.0f, -14.0f);
	glVertex2f(-9.0f, -4.0f);
	glEnd();
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
	glTranslatef(0.0f, -75.0f, 0.0f);
	//Window 11
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -14.0f);
	glVertex2f(-14.0f, -14.0f);
	glVertex2f(-14.0f, -4.0f);
	glEnd();
	//Window 12
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-5.0f, -4.0f);
	glVertex2f(-5.0f, -14.0f);
	glVertex2f(-9.0f, -14.0f);
	glVertex2f(-9.0f, -4.0f);
	glEnd();
    glPopMatrix();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
	glTranslatef(0.0f, -90.0f, 0.0f);
	//Window 13
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -14.0f);
	glVertex2f(-14.0f, -14.0f);
	glVertex2f(-14.0f, -4.0f);
	glEnd();
	//Window 14
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-5.0f, -4.0f);
	glVertex2f(-5.0f, -14.0f);
	glVertex2f(-9.0f, -14.0f);
	glVertex2f(-9.0f, -4.0f);
	glEnd();
    glPopMatrix();
	glutSwapBuffers();

}
void Building3()//B3
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(-22.5f, -100.0f);
	glVertex2f(-22.5f, 50.0f);
	glVertex2f(-16.5f, 50.0f);
	glVertex2f(-16.5f, -100.0f);
	glEnd();
	//Gombug 1
	glBegin(GL_POLYGON);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(-19.5f, 55.0f);
	glVertex2f(-16.5f, 50.0f);
	glVertex2f(-22.5f, 50.0f);
	glEnd();

}
void Building4()//B4
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(-22.5f, -100.0f);
	glVertex2f(-22.5f, -40.0f);
	glVertex2f(-25.5f, -40.0f);
	glVertex2f(-25.5f, -100.0f);
	glEnd();
}
void Building5()//B5 have window
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(-40.0f, -100.0f);
	glVertex2f(-40.0f, -10.0f);
	glVertex2f(-25.5f, -10.0f);
	glVertex2f(-25.5f, -100.0f);
	glEnd();
	//window 1
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-38.0f, -15.0f);
	glVertex2f(-38.0f, -25.0f);
	glVertex2f(-34.0f, -25.0f);
	glVertex2f(-34.0f, -15.0f);
	glEnd();
	//window 2
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-27.0f, -15.0f);
	glVertex2f(-27.0f, -25.0f);
	glVertex2f(-31.0f, -25.0f);
	glVertex2f(-31.0f, -15.0f);
	glEnd();
	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
	glTranslatef(0.0f, -15.0f, 0.0f);
	//window 3
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-38.0f, -15.0f);
	glVertex2f(-38.0f, -25.0f);
	glVertex2f(-34.0f, -25.0f);
	glVertex2f(-34.0f, -15.0f);
	glEnd();
	//window 4
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-27.0f, -15.0f);
	glVertex2f(-27.0f, -25.0f);
	glVertex2f(-31.0f, -25.0f);
	glVertex2f(-31.0f, -15.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -30.0f, 0.0f);
	//window 5
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-38.0f, -15.0f);
	glVertex2f(-38.0f, -25.0f);
	glVertex2f(-34.0f, -25.0f);
	glVertex2f(-34.0f, -15.0f);
	glEnd();
	//window 6
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-27.0f, -15.0f);
	glVertex2f(-27.0f, -25.0f);
	glVertex2f(-31.0f, -25.0f);
	glVertex2f(-31.0f, -15.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -45.0f, 0.0f);
	//window 7
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-38.0f, -15.0f);
	glVertex2f(-38.0f, -25.0f);
	glVertex2f(-34.0f, -25.0f);
	glVertex2f(-34.0f, -15.0f);
	glEnd();
	//window 8
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-27.0f, -15.0f);
	glVertex2f(-27.0f, -25.0f);
	glVertex2f(-31.0f, -25.0f);
	glVertex2f(-31.0f, -15.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -60.0f, 0.0f);
	//window 9
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-38.0f, -15.0f);
	glVertex2f(-38.0f, -25.0f);
	glVertex2f(-34.0f, -25.0f);
	glVertex2f(-34.0f, -15.0f);
	glEnd();
	//window 10
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-27.0f, -15.0f);
	glVertex2f(-27.0f, -25.0f);
	glVertex2f(-31.0f, -25.0f);
	glVertex2f(-31.0f, -15.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -75.0f, 0.0f);
	//window 11
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-38.0f, -15.0f);
	glVertex2f(-38.0f, -25.0f);
	glVertex2f(-34.0f, -25.0f);
	glVertex2f(-34.0f, -15.0f);
	glEnd();
	//window 12
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-27.0f, -15.0f);
	glVertex2f(-27.0f, -25.0f);
	glVertex2f(-31.0f, -25.0f);
	glVertex2f(-31.0f, -15.0f);
	glEnd();
	glPopMatrix();
	glutSwapBuffers();

}
void Building6()//B6
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(-40.0f, -100.0f);
	glVertex2f(-40.0f, -50.0f);
	glVertex2f(-44.0f, -50.0f);
	glVertex2f(-44.0f, -100.0f);
	glEnd();
}
void Building7()//B7 have window
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(-56.0f, -100.0f);
	glVertex2f(-56.0f, 30.0f);
	glVertex2f(-44.0f, 30.0f);
	glVertex2f(-44.0f, -100.0f);
	glEnd();
	//window 1
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-55.0f, 25.0f);
	glVertex2f(-55.0f, 15.0f);
	glVertex2f(-51.0f, 15.0f);
	glVertex2f(-51.0f, 25.0f);
	glEnd();
	//window 2
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-45.0f, 25.0f);
	glVertex2f(-45.0f, 15.0f);
	glVertex2f(-49.0f, 15.0f);
	glVertex2f(-49.0f, 25.0f);
	glEnd();
	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
	glTranslatef(0.0f, -15.0f, 0.0f);
	//window 3
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-55.0f, 25.0f);
	glVertex2f(-55.0f, 15.0f);
	glVertex2f(-51.0f, 15.0f);
	glVertex2f(-51.0f, 25.0f);
	glEnd();
	//window 4
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-45.0f, 25.0f);
	glVertex2f(-45.0f, 15.0f);
	glVertex2f(-49.0f, 15.0f);
	glVertex2f(-49.0f, 25.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -30.0f, 0.0f);
	//window 5
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-55.0f, 25.0f);
	glVertex2f(-55.0f, 15.0f);
	glVertex2f(-51.0f, 15.0f);
	glVertex2f(-51.0f, 25.0f);
	glEnd();
	//window 6
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-45.0f, 25.0f);
	glVertex2f(-45.0f, 15.0f);
	glVertex2f(-49.0f, 15.0f);
	glVertex2f(-49.0f, 25.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -45.0f, 0.0f);
	//window 7
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-55.0f, 25.0f);
	glVertex2f(-55.0f, 15.0f);
	glVertex2f(-51.0f, 15.0f);
	glVertex2f(-51.0f, 25.0f);
	glEnd();
	//window 8
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-45.0f, 25.0f);
	glVertex2f(-45.0f, 15.0f);
	glVertex2f(-49.0f, 15.0f);
	glVertex2f(-49.0f, 25.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -60.0f, 0.0f);
	//window 9
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-55.0f, 25.0f);
	glVertex2f(-55.0f, 15.0f);
	glVertex2f(-51.0f, 15.0f);
	glVertex2f(-51.0f, 25.0f);
	glEnd();
	//window 10
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-45.0f, 25.0f);
	glVertex2f(-45.0f, 15.0f);
	glVertex2f(-49.0f, 15.0f);
	glVertex2f(-49.0f, 25.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -75.0f, 0.0f);
	//window 11
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-55.0f, 25.0f);
	glVertex2f(-55.0f, 15.0f);
	glVertex2f(-51.0f, 15.0f);
	glVertex2f(-51.0f, 25.0f);
	glEnd();
	//window 12
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-45.0f, 25.0f);
	glVertex2f(-45.0f, 15.0f);
	glVertex2f(-49.0f, 15.0f);
	glVertex2f(-49.0f, 25.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -90.0f, 0.0f);
	//window 13
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-55.0f, 25.0f);
	glVertex2f(-55.0f, 15.0f);
	glVertex2f(-51.0f, 15.0f);
	glVertex2f(-51.0f, 25.0f);
	glEnd();
	//window 14
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-45.0f, 25.0f);
	glVertex2f(-45.0f, 15.0f);
	glVertex2f(-49.0f, 15.0f);
	glVertex2f(-49.0f, 25.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -105.0f, 0.0f);
	//window 15
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-55.0f, 25.0f);
	glVertex2f(-55.0f, 15.0f);
	glVertex2f(-51.0f, 15.0f);
	glVertex2f(-51.0f, 25.0f);
	glEnd();
	//window 16
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-45.0f, 25.0f);
	glVertex2f(-45.0f, 15.0f);
	glVertex2f(-49.0f, 15.0f);
	glVertex2f(-49.0f, 25.0f);
	glEnd();
	glPopMatrix();
	glutSwapBuffers();

}
void Building8()//B8
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(-56.0f, -100.0f);
	glVertex2f(-56.0f, -40.0f);
	glVertex2f(-60.0f, -40.0f);
	glVertex2f(-60.0f, -100.0f);
	glEnd();
}
void Building9()//B9 have window
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
	glTranslatef(-16.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(-56.0f, -100.0f);
	glVertex2f(-56.0f, 30.0f);
	glVertex2f(-44.0f, 30.0f);
	glVertex2f(-44.0f, -100.0f);
	glEnd();
	glPopMatrix();

	//Box 1
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(-70.0f, 37.0f);
	glVertex2f(-70.0f, 30.0f);
	glVertex2f(-62.0f, 30.0f);
	glVertex2f(-62.0f, 37.0f);
	glEnd();
	//Box 2
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(-69.0f, 42.0f);
	glVertex2f(-69.0f, 37.0f);
	glVertex2f(-63.0f, 37.0f);
	glVertex2f(-63.0f, 42.0f);
	glEnd();
	//Line 1
	glLineWidth(3.0);
    glBegin(GL_LINES);            // These vertices form a closed lines
    glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(-66.0f, 42.0f);
	glVertex2f(-66.0f, 54.0f);
	glEnd();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(-16.0f, 0.0f, 0.0f);
	//window 1
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-55.0f, 25.0f);
	glVertex2f(-55.0f, 15.0f);
	glVertex2f(-51.0f, 15.0f);
	glVertex2f(-51.0f, 25.0f);
	glEnd();
	//window 2
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-45.0f, 25.0f);
	glVertex2f(-45.0f, 15.0f);
	glVertex2f(-49.0f, 15.0f);
	glVertex2f(-49.0f, 25.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslatef(-16.0f, -15.0f, 0.0f);
	//window 3
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-55.0f, 25.0f);
	glVertex2f(-55.0f, 15.0f);
	glVertex2f(-51.0f, 15.0f);
	glVertex2f(-51.0f, 25.0f);
	glEnd();
	//window 4
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-45.0f, 25.0f);
	glVertex2f(-45.0f, 15.0f);
	glVertex2f(-49.0f, 15.0f);
	glVertex2f(-49.0f, 25.0f);
	glEnd();
	glPopMatrix();
    glPushMatrix();
    glTranslatef(-16.0f, -30.0f, 0.0f);
	//window 5
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-55.0f, 25.0f);
	glVertex2f(-55.0f, 15.0f);
	glVertex2f(-51.0f, 15.0f);
	glVertex2f(-51.0f, 25.0f);
	glEnd();
	//window 6
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-45.0f, 25.0f);
	glVertex2f(-45.0f, 15.0f);
	glVertex2f(-49.0f, 15.0f);
	glVertex2f(-49.0f, 25.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
    glTranslatef(-16.0f, -45.0f, 0.0f);
	//window 7
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-55.0f, 25.0f);
	glVertex2f(-55.0f, 15.0f);
	glVertex2f(-51.0f, 15.0f);
	glVertex2f(-51.0f, 25.0f);
	glEnd();
	//window 8
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-45.0f, 25.0f);
	glVertex2f(-45.0f, 15.0f);
	glVertex2f(-49.0f, 15.0f);
	glVertex2f(-49.0f, 25.0f);
	glEnd();
	glPopMatrix();
	glutSwapBuffers();
}
void Building10()//B10
{
	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
	glTranslatef(-16, 0.0f, 0.0f);
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(-56.0f, -100.0f);
	glVertex2f(-56.0f, -40.0f);
	glVertex2f(-60.0f, -40.0f);
	glVertex2f(-60.0f, -100.0f);
	glEnd();
    glPopMatrix();

	glutSwapBuffers();
}
void Building11()//B11
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(-78.0f, -100.0f);
	glVertex2f(-78.0f, -60.0f);
	glVertex2f(-76.0f, -60.0f);
	glVertex2f(-76.0f, -100.0f);
	glEnd();
}
void Building12()//B12 have window
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(-78.0f, -100.0f);
	glVertex2f(-78.0f, -30.0f);
	glVertex2f(-85.0f, -30.0f);
	glVertex2f(-85.0f, -100.0f);
	glEnd();
	//Window 1
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-79.0f, -93.0f);
	glVertex2f(-79.0f, -87.0f);
	glVertex2f(-84.0f, -87.0f);
	glVertex2f(-84.0f, -93.0f);
	glEnd();
	//Window 2
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-79.0f, -83.0f);
	glVertex2f(-79.0f, -77.0f);
	glVertex2f(-84.0f, -77.0f);
	glVertex2f(-84.0f, -83.0f);
	glEnd();
	//Window 3
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-79.0f, -73.0f);
	glVertex2f(-79.0f, -67.0f);
	glVertex2f(-84.0f, -67.0f);
	glVertex2f(-84.0f, -73.0f);
	glEnd();
	//Window 4
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-79.0f, -63.0f);
	glVertex2f(-79.0f, -57.0f);
	glVertex2f(-84.0f, -57.0f);
	glVertex2f(-84.0f, -63.0f);
	glEnd();
	//Window 5
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-79.0f, -53.0f);
	glVertex2f(-79.0f, -47.0f);
	glVertex2f(-84.0f, -47.0f);
	glVertex2f(-84.0f, -53.0f);
	glEnd();
	//Window 6
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-79.0f, -43.0f);
	glVertex2f(-79.0f, -37.0f);
	glVertex2f(-84.0f, -37.0f);
	glVertex2f(-84.0f, -43.0f);
	glEnd();


}
void Building13()//B13
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(-86.0f, -100.0f);
	glVertex2f(-86.0f, -60.0f);
	glVertex2f(-85.0f, -60.0f);
	glVertex2f(-85.0f, -100.0f);
	glEnd();
}
void Building14()//B14
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(-86.0f, -100.0f);
	glVertex2f(-86.0f, -50.0f);
	glVertex2f(-88.5f, -50.0f);
	glVertex2f(-88.5f, -100.0f);
	glEnd();
}
void Building15()//B15
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(-88.5f, -100.0f);
	glVertex2f(-88.5f, -40.0f);
	glVertex2f(-92.0f, -40.0f);
	glVertex2f(-92.0f, -100.0f);
	glEnd();
}
void Building16()//B16 have window
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(-100.0f, -100.0f);
	glVertex2f(-100.0f, -10.0f);
	glVertex2f(-92.0f, -10.0f);
	glVertex2f(-92.0f, -100.0f);
	glEnd();

    //Window 1
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-99.0f, -97.0f);
	glVertex2f(-99.0f, -88.0f);
	glVertex2f(-97.0f, -88.0f);
	glVertex2f(-97.0f, -97.0f);
	glEnd();
    //Window 2
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-93.0f, -97.0f);
	glVertex2f(-93.0f, -88.0f);
	glVertex2f(-95.0f, -88.0f);
	glVertex2f(-95.0f, -97.0f);
	glEnd();
	//Window 3
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-99.0f, -76.0f);
	glVertex2f(-99.0f, -85.0f);
	glVertex2f(-97.0f, -85.0f);
	glVertex2f(-97.0f, -76.0f);
	glEnd();
	//Window 4
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-93.0f, -76.0f);
	glVertex2f(-93.0f, -85.0f);
	glVertex2f(-95.0f, -85.0f);
	glVertex2f(-95.0f, -76.0f);
	glEnd();
	//Window 5
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-99.0f, -64.0f);
	glVertex2f(-99.0f, -73.0f);
	glVertex2f(-97.0f, -73.0f);
	glVertex2f(-97.0f, -64.0f);
	glEnd();
	//Window 6
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-93.0f, -64.0f);
	glVertex2f(-93.0f, -73.0f);
	glVertex2f(-95.0f, -73.0f);
	glVertex2f(-95.0f, -64.0f);
	glEnd();
	//Window 7
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-99.0f, -52.0f);
	glVertex2f(-99.0f, -61.0f);
	glVertex2f(-97.0f, -61.0f);
	glVertex2f(-97.0f, -52.0f);
	glEnd();
	//Window 8
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-93.0f, -52.0f);
	glVertex2f(-93.0f, -61.0f);
	glVertex2f(-95.0f, -61.0f);
	glVertex2f(-95.0f, -52.0f);
	glEnd();
	//Window 9
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-99.0f, -40.0f);
	glVertex2f(-99.0f, -49.0f);
	glVertex2f(-97.0f, -49.0f);
	glVertex2f(-97.0f, -40.0f);
	glEnd();
	//Window 10
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-93.0f, -40.0f);
	glVertex2f(-93.0f, -49.0f);
	glVertex2f(-95.0f, -49.0f);
	glVertex2f(-95.0f, -40.0f);
	glEnd();
	//Window 11
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-99.0f, -28.0f);
	glVertex2f(-99.0f, -37.0f);
	glVertex2f(-97.0f, -37.0f);
	glVertex2f(-97.0f, -28.0f);
	glEnd();
	//Window 12
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-93.0f, -28.0f);
	glVertex2f(-93.0f, -37.0f);
	glVertex2f(-95.0f, -37.0f);
	glVertex2f(-95.0f, -28.0f);
	glEnd();
	//Window 13
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-99.0f, -16.0f);
	glVertex2f(-99.0f, -25.0f);
	glVertex2f(-97.0f, -25.0f);
	glVertex2f(-97.0f, -16.0f);
	glEnd();
	//Window 14
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3ub(240,240,83); // Yellow
	glVertex2f(-93.0f, -16.0f);
	glVertex2f(-93.0f, -25.0f);
	glVertex2f(-95.0f, -25.0f);
	glVertex2f(-95.0f, -16.0f);
	glEnd();

}
void Building17()//B17 have window
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(8.0f, -100.0f);
	glVertex2f(8.0f, 18.0f);
	glVertex2f(2.5f, 18.0f);
	glVertex2f(2.5f, -100.0f);
	glEnd();
	glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
	glTranslatef(21.3f, 16.0f, 0.0f);
	//Window 1
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -14.0f);
	glVertex2f(-14.0f, -14.0f);
	glVertex2f(-14.0f, -4.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(21.3f, 1.0f, 0.0f);
	//Window 2
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -14.0f);
	glVertex2f(-14.0f, -14.0f);
	glVertex2f(-14.0f, -4.0f);
	glEnd();
	glPopMatrix();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(21.3f, -14.0f, 0.0f);
	//Window 3
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -14.0f);
	glVertex2f(-14.0f, -14.0f);
	glVertex2f(-14.0f, -4.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(21.3f, -29.0f, 0.0f);
	//Window 4
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -14.0f);
	glVertex2f(-14.0f, -14.0f);
	glVertex2f(-14.0f, -4.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(21.3f, -44.0f, 0.0f);
	//Window 5
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -14.0f);
	glVertex2f(-14.0f, -14.0f);
	glVertex2f(-14.0f, -4.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(21.3f, -59.0f, 0.0f);
	//Window 6
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -14.0f);
	glVertex2f(-14.0f, -14.0f);
	glVertex2f(-14.0f, -4.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(21.3f, -74.0f, 0.0f);
	//Window 7
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -14.0f);
	glVertex2f(-14.0f, -14.0f);
	glVertex2f(-14.0f, -4.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(21.3f, -89.0f, 0.0f);
	//Window 8
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -14.0f);
	glVertex2f(-14.0f, -14.0f);
	glVertex2f(-14.0f, -4.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(21.3f, -100.0f, 0.0f);
	//Window 9
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -14.0f);
	glVertex2f(-14.0f, -14.0f);
	glVertex2f(-14.0f, -4.0f);
	glEnd();
	glPopMatrix();
	glutSwapBuffers();
}
void Building18()//B18
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(8.0f, -100.0f);
	glVertex2f(8.0f, -30.0f);
	glVertex2f(12.0f, -30.0f);
	glVertex2f(12.0f, -100.0f);
	glEnd();
}
void Building19()//B19 have window
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(24.0f, -100.0f);
	glVertex2f(24.0f, -20.0f);
	glVertex2f(12.0f, -20.0f);
	glVertex2f(12.0f, -100.0f);
	glEnd();
	//Window 1
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(13.0f, -24.0f);
	glVertex2f(13.0f, -32.0f);
	glVertex2f(17.0f, -32.0f);
	glVertex2f(17.0f, -24.0f);
	glEnd();
	//Window 2
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(23.0f, -24.0f);
	glVertex2f(23.0f, -32.0f);
	glVertex2f(19.0f, -32.0f);
	glVertex2f(19.0f, -24.0f);
	glEnd();
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslatef(0.0f, -13.0f, 0.0f);
	//Window 3
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(13.0f, -24.0f);
	glVertex2f(13.0f, -32.0f);
	glVertex2f(17.0f, -32.0f);
	glVertex2f(17.0f, -24.0f);
	glEnd();
	//Window 4
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(23.0f, -24.0f);
	glVertex2f(23.0f, -32.0f);
	glVertex2f(19.0f, -32.0f);
	glVertex2f(19.0f, -24.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -25.0f, 0.0f);
	//Window 5
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(13.0f, -24.0f);
	glVertex2f(13.0f, -32.0f);
	glVertex2f(17.0f, -32.0f);
	glVertex2f(17.0f, -24.0f);
	glEnd();
	//Window 6
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(23.0f, -24.0f);
	glVertex2f(23.0f, -32.0f);
	glVertex2f(19.0f, -32.0f);
	glVertex2f(19.0f, -24.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -37.0f, 0.0f);
	//Window 7
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(13.0f, -24.0f);
	glVertex2f(13.0f, -32.0f);
	glVertex2f(17.0f, -32.0f);
	glVertex2f(17.0f, -24.0f);
	glEnd();
	//Window 8
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(23.0f, -24.0f);
	glVertex2f(23.0f, -32.0f);
	glVertex2f(19.0f, -32.0f);
	glVertex2f(19.0f, -24.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -49.0f, 0.0f);
	//Window 9
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(13.0f, -24.0f);
	glVertex2f(13.0f, -32.0f);
	glVertex2f(17.0f, -32.0f);
	glVertex2f(17.0f, -24.0f);
	glEnd();
	//Window 10
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(23.0f, -24.0f);
	glVertex2f(23.0f, -32.0f);
	glVertex2f(19.0f, -32.0f);
	glVertex2f(19.0f, -24.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -61.0f, 0.0f);
	//Window 11
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(13.0f, -24.0f);
	glVertex2f(13.0f, -32.0f);
	glVertex2f(17.0f, -32.0f);
	glVertex2f(17.0f, -24.0f);
	glEnd();
	//Window 12
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(23.0f, -24.0f);
	glVertex2f(23.0f, -32.0f);
	glVertex2f(19.0f, -32.0f);
	glVertex2f(19.0f, -24.0f);
	glEnd();
	glPopMatrix();
	glutSwapBuffers();

}
void Building20()//B20
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(24.0f, -20.0f);
	glVertex2f(24.0f, 25.0f);
	glVertex2f(19.0f, 25.0f);
	glVertex2f(19.0f, -20.0f);
	glEnd();
	//Gombuj 2
	glBegin(GL_POLYGON);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(24.0f, 25.0f);
	glVertex2f(21.5f, 30.0f);
	glVertex2f(19.0f, 25.0f);
	glEnd();
}
void Building21()//B21
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(24.0f, -100.0f);
	glVertex2f(24.0f, -22.0f);
	glVertex2f(28.0f, -22.0f);
	glVertex2f(28.0f, -100.0f);
	glEnd();
}
void Building22()//B22 have window
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(45.0f, -100.0f);
	glVertex2f(45.0f, -24.0f);
	glVertex2f(28.0f, -24.0f);
	glVertex2f(28.0f, -100.0f);
	glEnd();
	//Window 1
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(29.0f, -38.0f);
	glVertex2f(29.0f, -28.0f);
	glVertex2f(32.0f, -28.0f);
	glVertex2f(32.0f, -38.0f);
	glEnd();
	//Window 2
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(35.0f, -38.0f);
	glVertex2f(35.0f, -28.0f);
	glVertex2f(38.0f, -28.0f);
	glVertex2f(38.0f, -38.0f);
	glEnd();
	//Window 3
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(41.0f, -38.0f);
	glVertex2f(41.0f, -28.0f);
	glVertex2f(44.0f, -28.0f);
	glVertex2f(44.0f, -38.0f);
	glEnd();
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslatef(0.0f, -16.0f, 0.0f);
	//Window 4
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(29.0f, -38.0f);
	glVertex2f(29.0f, -28.0f);
	glVertex2f(32.0f, -28.0f);
	glVertex2f(32.0f, -38.0f);
	glEnd();
	//Window 5
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(35.0f, -38.0f);
	glVertex2f(35.0f, -28.0f);
	glVertex2f(38.0f, -28.0f);
	glVertex2f(38.0f, -38.0f);
	glEnd();
	//Window 6
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(41.0f, -38.0f);
	glVertex2f(41.0f, -28.0f);
	glVertex2f(44.0f, -28.0f);
	glVertex2f(44.0f, -38.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -30.0f, 0.0f);
	//Window 7
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(29.0f, -38.0f);
	glVertex2f(29.0f, -28.0f);
	glVertex2f(32.0f, -28.0f);
	glVertex2f(32.0f, -38.0f);
	glEnd();
	//Window 8
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(35.0f, -38.0f);
	glVertex2f(35.0f, -28.0f);
	glVertex2f(38.0f, -28.0f);
	glVertex2f(38.0f, -38.0f);
	glEnd();
	//Window 9
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(41.0f, -38.0f);
	glVertex2f(41.0f, -28.0f);
	glVertex2f(44.0f, -28.0f);
	glVertex2f(44.0f, -38.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -44.0f, 0.0f);
	//Window 10
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(29.0f, -38.0f);
	glVertex2f(29.0f, -28.0f);
	glVertex2f(32.0f, -28.0f);
	glVertex2f(32.0f, -38.0f);
	glEnd();
	//Window 11
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(35.0f, -38.0f);
	glVertex2f(35.0f, -28.0f);
	glVertex2f(38.0f, -28.0f);
	glVertex2f(38.0f, -38.0f);
	glEnd();
	//Window 12
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(41.0f, -38.0f);
	glVertex2f(41.0f, -28.0f);
	glVertex2f(44.0f, -28.0f);
	glVertex2f(44.0f, -38.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -58.0f, 0.0f);
	//Window 13
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(29.0f, -38.0f);
	glVertex2f(29.0f, -28.0f);
	glVertex2f(32.0f, -28.0f);
	glVertex2f(32.0f, -38.0f);
	glEnd();
	//Window 14
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(35.0f, -38.0f);
	glVertex2f(35.0f, -28.0f);
	glVertex2f(38.0f, -28.0f);
	glVertex2f(38.0f, -38.0f);
	glEnd();
	//Window 15
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(41.0f, -38.0f);
	glVertex2f(41.0f, -28.0f);
	glVertex2f(44.0f, -28.0f);
	glVertex2f(44.0f, -38.0f);
	glEnd();
	glPopMatrix();
	glutSwapBuffers();
}
void Building23()//B24
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(45.0f, -100.0f);
	glVertex2f(45.0f, -30.0f);
	glVertex2f(48.0f, -30.0f);
	glVertex2f(48.0f, -100.0f);
	glEnd();
}
void Building24()//B24
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(52.0f, -100.0f);
	glVertex2f(52.0f, 15.0f);
	glVertex2f(48.0f, 15.0f);
	glVertex2f(48.0f, -100.0f);
	glEnd();
}
void Building25()//B25
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(52.0f, -100.0f);
	glVertex2f(52.0f, 0.0f);
	glVertex2f(57.0f, 0.0f);
	glVertex2f(57.0f, -100.0f);
	glEnd();
}
void Building26()//B26
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(59.0f, -100.0f);
	glVertex2f(59.0f, -30.0f);
	glVertex2f(57.0f, -30.0f);
	glVertex2f(57.0f, -100.0f);
	glEnd();
}
void Building27()//B27
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(59.0f, -100.0f);
	glVertex2f(59.0f, -15.0f);
	glVertex2f(62.0f, -15.0f);
	glVertex2f(62.0f, -100.0f);
	glEnd();
}
void Building28()//B28 have window
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(70.0f, -100.0f);
	glVertex2f(70.0f, 18.0f);
	glVertex2f(62.0f, 18.0f);
	glVertex2f(62.0f, -100.0f);
	glEnd();
	//Box 1
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(69.0f, 20.0f);
	glVertex2f(69.0f, 18.0f);
	glVertex2f(63.0f, 18.0f);
	glVertex2f(63.0f, 20.0f);
	glEnd();
	//Window 1
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yollow
	glVertex2f(65.5f, 5.0f);
	glVertex2f(65.5f, 15.0f);
	glVertex2f(63.0f, 15.0f);
	glVertex2f(63.0f, 5.0f);
	glEnd();
	//Window 2
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yollow
	glVertex2f(69.0f, 5.0f);
	glVertex2f(69.0f, 15.0f);
	glVertex2f(66.5f, 15.0f);
	glVertex2f(66.5f, 5.0f);
	glEnd();
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslatef(0.0f, -32.0f, 0.0f);
	//Window 3
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yollow
	glVertex2f(65.5f, 5.0f);
	glVertex2f(65.5f, 15.0f);
	glVertex2f(63.0f, 15.0f);
	glVertex2f(63.0f, 5.0f);
	glEnd();
	//Window 4
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yollow
	glVertex2f(69.0f, 5.0f);
	glVertex2f(69.0f, 15.0f);
	glVertex2f(66.5f, 15.0f);
	glVertex2f(66.5f, 5.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -46.0f, 0.0f);
	//Window 5
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yollow
	glVertex2f(65.5f, 5.0f);
	glVertex2f(65.5f, 15.0f);
	glVertex2f(63.0f, 15.0f);
	glVertex2f(63.0f, 5.0f);
	glEnd();
	//Window 6
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yollow
	glVertex2f(69.0f, 5.0f);
	glVertex2f(69.0f, 15.0f);
	glVertex2f(66.5f, 15.0f);
	glVertex2f(66.5f, 5.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -60.0f, 0.0f);
	//Window 7
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yollow
	glVertex2f(65.5f, 5.0f);
	glVertex2f(65.5f, 15.0f);
	glVertex2f(63.0f, 15.0f);
	glVertex2f(63.0f, 5.0f);
	glEnd();
	//Window 8
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yollow
	glVertex2f(69.0f, 5.0f);
	glVertex2f(69.0f, 15.0f);
	glVertex2f(66.5f, 15.0f);
	glVertex2f(66.5f, 5.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -74.0f, 0.0f);
	//Window 9
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yollow
	glVertex2f(65.5f, 5.0f);
	glVertex2f(65.5f, 15.0f);
	glVertex2f(63.0f, 15.0f);
	glVertex2f(63.0f, 5.0f);
	glEnd();
	//Window 10
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yollow
	glVertex2f(69.0f, 5.0f);
	glVertex2f(69.0f, 15.0f);
	glVertex2f(66.5f, 15.0f);
	glVertex2f(66.5f, 5.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -88.0f, 0.0f);
	//Window 11
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yollow
	glVertex2f(65.5f, 5.0f);
	glVertex2f(65.5f, 15.0f);
	glVertex2f(63.0f, 15.0f);
	glVertex2f(63.0f, 5.0f);
	glEnd();
	//Window 12
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yollow
	glVertex2f(69.0f, 5.0f);
	glVertex2f(69.0f, 15.0f);
	glVertex2f(66.5f, 15.0f);
	glVertex2f(66.5f, 5.0f);
	glEnd();
	glPopMatrix();
	glPushMatrix();
	glTranslatef(0.0f, -102.0f, 0.0f);
	//Window 13
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yollow
	glVertex2f(65.5f, 5.0f);
	glVertex2f(65.5f, 15.0f);
	glVertex2f(63.0f, 15.0f);
	glVertex2f(63.0f, 5.0f);
	glEnd();
	//Window 14
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yollow
	glVertex2f(69.0f, 5.0f);
	glVertex2f(69.0f, 15.0f);
	glVertex2f(66.5f, 15.0f);
	glVertex2f(66.5f, 5.0f);
	glEnd();
	glPopMatrix();
	glutSwapBuffers();
}
void Building29()//B29
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(70.0f, -100.0f);
	glVertex2f(70.0f, -12.0f);
	glVertex2f(75.0f, -12.0f);
	glVertex2f(75.0f, -100.0f);
	glEnd();
}
void Building30()//B30
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(75.0f, -100.0f);
	glVertex2f(75.0f, -15.0f);
	glVertex2f(80.0f, -15.0f);
	glVertex2f(80.0f, -100.0f);
	glEnd();
}
void Building31()//B31
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(80.0f, -100.0f);
	glVertex2f(80.0f, -18.0f);
	glVertex2f(85.0f, -18.0f);
	glVertex2f(85.0f, -100.0f);
	glEnd();
}
void Building32()//B32 have window
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(95.0f, -100.0f);
	glVertex2f(95.0f, 10.0f);
	glVertex2f(85.0f, 10.0f);
	glVertex2f(85.0f, -100.0f);
	glEnd();
	//Windows 1
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(94.0f, -1.0f);
	glVertex2f(94.0f, 6.0f);
	glVertex2f(86.0f, 6.0f);
	glVertex2f(86.0f, -1.0f);
	glEnd();
	//Windows 2
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslatef(0.0f, -13.0f, 0.0f);
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(94.0f, -1.0f);
	glVertex2f(94.0f, 6.0f);
	glVertex2f(86.0f, 6.0f);
	glVertex2f(86.0f, -1.0f);
	glEnd();
	glPopMatrix();
	//Windows 3
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslatef(0.0f, -27.0f, 0.0f);
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(94.0f, -1.0f);
	glVertex2f(94.0f, 6.0f);
	glVertex2f(86.0f, 6.0f);
	glVertex2f(86.0f, -1.0f);
	glEnd();
	glPopMatrix();
	//Windows 4
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslatef(0.0f, -40.0f, 0.0f);
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(94.0f, -1.0f);
	glVertex2f(94.0f, 6.0f);
	glVertex2f(86.0f, 6.0f);
	glVertex2f(86.0f, -1.0f);
	glEnd();
	glPopMatrix();
	//Windows 5
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslatef(0.0f, -53.0f, 0.0f);
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(94.0f, -1.0f);
	glVertex2f(94.0f, 6.0f);
	glVertex2f(86.0f, 6.0f);
	glVertex2f(86.0f, -1.0f);
	glEnd();
	glPopMatrix();
	//Windows 6
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslatef(0.0f, -66.0f, 0.0f);
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(94.0f, -1.0f);
	glVertex2f(94.0f, 6.0f);
	glVertex2f(86.0f, 6.0f);
	glVertex2f(86.0f, -1.0f);
	glEnd();
	glPopMatrix();
	//Windows 7
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslatef(0.0f, -79.0f, 0.0f);
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(94.0f, -1.0f);
	glVertex2f(94.0f, 6.0f);
	glVertex2f(86.0f, 6.0f);
	glVertex2f(86.0f, -1.0f);
	glEnd();
	glPopMatrix();
	//Windows 8
	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslatef(0.0f, -92.0f, 0.0f);
	glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(94.0f, -1.0f);
	glVertex2f(94.0f, 6.0f);
	glVertex2f(86.0f, 6.0f);
	glVertex2f(86.0f, -1.0f);
	glEnd();
	glPopMatrix();
	glutSwapBuffers();
}
void Building33()//B33
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(95.0f, -100.0f);
	glVertex2f(95.0f, -16.0f);
	glVertex2f(97.0f, -16.0f);
	glVertex2f(97.0f, -100.0f);
	glEnd();
}
void Building34()//B34
{
    glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(0.0f, 0.0f, 0.0f); // Black
	glVertex2f(97.0f, -100.0f);
	glVertex2f(97.0f, -7.0f);
	glVertex2f(100.0f, -7.0f);
	glVertex2f(100.0f, -100.0f);
	glEnd();
}

void Hill1()
{
          glBegin(GL_POLYGON);
          glColor3ub(105,96,96);
          glVertex2f(100.0f, -100.0f);
          glVertex2f(100.0f, 18.0f);
          glVertex2f(95.0f, 12.0f);
          glVertex2f(86.0f, 6.0f);
          glVertex2f(83.0f, -4.0f);
          glVertex2f(80.0f, -15.0f);
          glVertex2f(80.0f, -100.0f);
          glEnd();
}

void Hill2()
{
          glBegin(GL_POLYGON);
          glColor3ub(105,96,96);
          glVertex2f(45.0f, -100.0f);
          glVertex2f(42.0f, -24.0f);
          glVertex2f(38.0f, -10.0f);
          glVertex2f(34.0f, -5.0f);
          glVertex2f(30.0f, 10.0f);
          glVertex2f(26.0f, -3.0f);
          glVertex2f(12.0f, -8.0f);
          glVertex2f(2.5f, -30.0f);
          glVertex2f(-15.0f, -100.0f);
          glEnd();

}

void Hill3()
{
          glBegin(GL_POLYGON);
          glColor3ub(105,96,96);
          glVertex2f(-2.5f, -100.0f);
          glVertex2f(-22.0f, -34.0f);
          glVertex2f(-26.0f, -15.0f);
          glVertex2f(-34.0f, -10.0f);
          glVertex2f(-36.0f, 5.0f);
          glVertex2f(-44.0f, 25.0f);
          glVertex2f(-50.0f, 35.0f);
          glVertex2f(-58.0f, 39.0f);
          glVertex2f(-60.0f, 49.0f);
          glVertex2f(-64.0f, 53.0f);
          glVertex2f(-70.0f, 50.0f);
          glVertex2f(-72.0f, 40.0f);
          glVertex2f(-76.0f, 42.0f);
          glVertex2f(-77.0f, 35.0f);
          glVertex2f(-86.0f, -20.0f);
          glVertex2f(-92.0f, 40.0f);
          glVertex2f(-100.0f, 10.0f);
          glVertex2f(-100.0f, -100.0f);
          glEnd();
}
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color
          Hill1();
          Hill2();
          Hill3();
    Building1();
    Building3();
    Building2();
    Building4();
    Building5();
    Building6();
    Building7();
    Building8();
    Building9();
    Building10();
    Building11();
    Building12();
    Building13();
    Building14();
    Building15();
    Building16();
    Building17();
    Building18();
    Building19();
    Building20();
    Building21();
    Building22();
    Building23();
    Building24();
    Building25();
    Building26();
    Building27();
    Building28();
    Building29();
    Building30();
    Building31();
    Building32();
    Building33();
    Building34();



	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutInitWindowSize(1300, 670);   // Set the window's initial width & height
	glutCreateWindow("Night City Project");  // Create window with the given title
	//glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}
