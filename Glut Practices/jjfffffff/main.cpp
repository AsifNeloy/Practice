#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>

/* Initialize OpenGL Graphics */
float _move = 0.0f;
float _movecloud2=0.0f;
float _movecloud3=0.0f;
float xr = 0, yr = 0;
GLfloat position = -130.0f;
GLfloat speed = 2.0f;
GLfloat position1 = 130.0f;
GLfloat speed1 = 2.0f;
void dis();
void display();
void initGL() {
	// Set "clearing" or background color
	glClearColor(0.0f, 0.0f, 0.5f, 0.0f); // Blue and opaque
	glLoadIdentity(); //Reset the drawing perspective
	gluOrtho2D(-100,200,-200,180);
}
//Anika's Part
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
	/*glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-18.0f, -4.0f);
	glVertex2f(-18.0f, -14.0f);
	glVertex2f(-14.0f, -14.0f);
	glVertex2f(-14.0f, -4.0f);
	glEnd();*/
	//Window 14
	/*glBegin(GL_QUADS);            // These vertices form a closed quads
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(-5.0f, -4.0f);
	glVertex2f(-5.0f, -14.0f);
	glVertex2f(-9.0f, -14.0f);
	glVertex2f(-9.0f, -4.0f);
	glEnd();*/
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
	/*glBegin(GL_QUADS);            // These vertices form a closed quads
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
	glEnd();*/
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
//Asif's Part
//Hill 1
void updatecloud2(int value) {

    _movecloud2 += .2;
    if(_movecloud2 > 60)
    {
        _movecloud2 = -60;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(80, updatecloud2, 0); //Notify GLUT to call update again in 25 milliseconds
}

void updatecloud3(int value) {

    _movecloud3 -= .2;
    if(_movecloud3 < -80.0)
    {
        _movecloud3 = 60.0;
    }
	glutPostRedisplay(); //Notify GLUT that the display has changed

	glutTimerFunc(80, updatecloud3, 0); //Notify GLUT to call update again in 25 milliseconds
}

void cloud1()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity(); //Reset the drawing perspective
    gluOrtho2D(-40,40,-40,40);
    glPushMatrix();
	glTranslatef(_move, 0.0f, 0.0f);

    glColor3ub(255, 255, 255);
    DrawCircle(-26,34,3,200);
    glColor3ub(255, 255, 255);
    DrawCircle(-24,35,3,200);
    glColor3ub(255, 255, 255);
    DrawCircle(-24,33,3,200);
    glColor3ub(255, 255, 255);
    DrawCircle(-22,35,3,200);
    glColor3ub(255, 255, 255);
    DrawCircle(-22,33,3,200);
    glColor3ub(255, 255, 255);
    DrawCircle(-20,34,3,200);
   glPopMatrix();
}



void cloud2()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity(); //Reset the drawing perspective
    gluOrtho2D(-40,40,-40,40);
    glPushMatrix();
	glTranslatef(_movecloud2, 0.0f, 0.0f);

    glColor3ub(255, 255, 255);
    DrawCircle(-12,34,3,200);
    glColor3ub(255, 255, 255);
    DrawCircle(-10,35,3,200);
    glColor3ub(255, 255, 255);
    DrawCircle(-8,33,3,200);
    glColor3ub(255, 255, 255);
    DrawCircle(-6,35,3,200);
    glColor3ub(255, 255, 255);
    DrawCircle(-4,33,3,200);
    glColor3ub(255, 255, 255);
    DrawCircle(-2,34,3,200);
 glPopMatrix();
}

void cloud3()
{
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity(); //Reset the drawing perspective
    gluOrtho2D(-40,40,-40,40);
    glPushMatrix();
	glTranslatef(_movecloud3, 0.0f, 0.0f);

    glColor3ub(255, 255, 255);
    DrawCircle(8,34,3,200);
    glColor3ub(255, 255, 255);
    DrawCircle(9,35,3,200);
    glColor3ub(255, 255, 255);
    DrawCircle(10,33,3,200);
    glColor3ub(255, 255, 255);
    DrawCircle(11,35,3,200);
    glColor3ub(255, 255, 255);
    DrawCircle(14,33,3,200);
    glColor3ub(255, 255, 255);
    DrawCircle(17,34,3,200);
   glPopMatrix();
}

void Hill1()//H1
{
    glBegin(GL_POLYGON);
    glColor3ub(105,96,96);
    glVertex2f(100.0f, -100.0f);
    glVertex2f(100.0f, 25.0f);
    glVertex2f(95.0f, 12.0f);
    glVertex2f(86.0f, 2.0f);
    glVertex2f(83.0f, -2.0f);
    glVertex2f(80.0f, -25.0f);
    glVertex2f(80.0f, -100.0f);
    glEnd();
}
//Hill 2
void Hill2()//H2
{
    glBegin(GL_POLYGON);
    glColor3ub(105,96,96);
    glVertex2f(52.0f, -100.0f);
    glVertex2f(45.0f, -27.0f);
    glVertex2f(38.0f, -15.0f);
    glVertex2f(34.0f, 10.0f);
    glVertex2f(30.0f, 12.0f);
    glVertex2f(26.0f, -8.0f);
    glVertex2f(12.0f, -25.0f);
    glVertex2f(2.5f, -35.0f);
    glVertex2f(-15.0f, -100.0f);
    glEnd();

}
//Hill 3
void Hill3()//H3
{

    glBegin(GL_POLYGON);
    glColor3ub(105,96,96);
    glVertex2f(-2.5f, -100.0f);
    glVertex2f(-20.0f, -30.0f);
    glVertex2f(-30.0f, -15.0f);
    glVertex2f(-34.0f, -20.0f);
    glVertex2f(-36.0f, -30.0f);
    glVertex2f(-77.0f, 30.0f);
    glVertex2f(-86.0f, -10.0f);
    glVertex2f(-92.0f, 20.0f);
    glVertex2f(-100.0f, 10.0f);
    glVertex2f(-100.0f, -100.0f);
    glEnd();

}
void Stars()
{
    glPointSize(3.0);
    glBegin(GL_POINTS); //S1
    glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-90.0f, 60.0f);
	glEnd();
    glPointSize(4.0);
    glBegin(GL_POINTS); //S2
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-95.0f, 85.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S3
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-80.0f, 75.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S4
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-65.0f, 65.0f);
	glEnd();
	glPointSize(5.0);
    glBegin(GL_POINTS); //S5
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-55.0f, 85.0f);
	glEnd();
	glPointSize(5.0);
    glBegin(GL_POINTS); //S6
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-45.0f, 90.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S7
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-55.0f, 60.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S8
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-40.0f, 45.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S9
	glColor3ub(255,231,3); //Color_yellow

	glVertex2f(-30.0f, 75.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S10
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-25.0f, 45.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S11
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-28.0f, 25.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S12
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-35.0f, 15.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S13
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-15.0f, 65.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S14
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-20.0f, 45.0f);
	glEnd();
	glPointSize(3.0);
	glBegin(GL_POINTS); //S15
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-13.0f, 15.0f);
	glEnd();
	glPointSize(4.0);
	glBegin(GL_POINTS); //S16
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-3.0f, 35.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S17
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-5.0f, 70.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S18
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(-0.0f, 85.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S19
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(9.0f, 65.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS);  //S20
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(20.0f, 45.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S21
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(25.0f, 75.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S22
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(35.0f, 55.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS);   //S23
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(38.0f, 25.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS);  //S24
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(43.0f, 5.0f);
	glEnd();
	glPointSize(5.0);
    glBegin(GL_POINTS);  //S25
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(45.0f, 87.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S26
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(53.0f, 55.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS); //S27
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(57.0f, 25.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S28
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(63.0f, 65.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS); //S29
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(70.0f, 45.0f);    // x, y
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS);  //S30
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(75.0f, 15.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S31
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(85.0f, 45.0f);
	glEnd();
	glPointSize(5.0);
    glBegin(GL_POINTS);  //S32
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(85.0f, 75.0f);
	glEnd();
	glPointSize(4.0);
    glBegin(GL_POINTS);  //S33
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(95.0f, 55.0f);
	glEnd();
	glPointSize(3.0);
    glBegin(GL_POINTS);  //S34
	glColor3ub(255,231,3); //Color_yellow
	glVertex2f(93.0f, 25.0f);
	glEnd();
}
void MovingStar()
{
    glBegin(GL_POLYGON); //MS1
    glColor3ub(255,231,3); //color_yellow
    glVertex2f(27.75f, 74.0f);
    glVertex2f(30.0f, 75.0f);
    glVertex2f(27.75f, 76.25f);
    glVertex2f(27.0f, 80.0f);
    glVertex2f(26.25f, 76.25f);
    glVertex2f(24.0f, 75.0f);
    glVertex2f(26.25f, 73.75f);
    glVertex2f(27.0f, 70.0f);
    glEnd();

    glPushMatrix();
    glTranslatef(-60.0f, -10.0f, 0.0f);
    glBegin(GL_POLYGON);//MS2
    glColor3ub(255,231,3); //color_yellow
    glVertex2f(27.75f, 74.0f);
    glVertex2f(30.0f, 75.0f);
    glVertex2f(27.75f, 76.25f);
    glVertex2f(27.0f, 80.0f);
    glVertex2f(26.25f, 76.25f);
    glVertex2f(24.0f, 75.0f);
    glVertex2f(26.25f, 73.75f);
    glVertex2f(27.0f, 70.0f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-100.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON); //MS3
    glColor3ub(255,231,3); //color_yellow
    glVertex2f(27.75f, 74.0f);
    glVertex2f(30.0f, 75.0f);
    glVertex2f(27.75f, 76.25f);
    glVertex2f(27.0f, 80.0f);
    glVertex2f(26.25f, 76.25f);
    glVertex2f(24.0f, 75.0f);
    glVertex2f(26.25f, 73.75f);
    glVertex2f(27.0f, 70.0f);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(50.0f, -30.0f, 0.0f);
    glBegin(GL_POLYGON); //MS4
    glColor3ub(255,231,3);//color_yellow
    glVertex2f(27.75f, 74.0f);
    glVertex2f(30.0f, 75.0f);
    glVertex2f(27.75f, 76.25f);
    glVertex2f(27.0f, 80.0f);
    glVertex2f(26.25f, 76.25f);
    glVertex2f(24.0f, 75.0f);
    glVertex2f(26.25f, 73.75f);
    glVertex2f(27.0f, 70.0f);
    glEnd();
    glPopMatrix();

}

//Ahnaf's Part
void updateJet1Left (int value) //upJ1L
{
    if(position <-130.0)
        position = 130.0f;

    position -= speed;

    glutPostRedisplay();

    glutTimerFunc(20,updateJet1Left,0);
}

void updateJet1Right (int value) //upJ1R
{
    if(position1 >130.0)
        position1 = -130.0f;

    position1 += speed1;

    glutPostRedisplay();

    glutTimerFunc(20,updateJet1Right,0);
}
void updateJet2Keyboard(int value) //upJ2K

{
    if(xr >190.0) //ending point from left to right
        xr = -30.0f; //in loop starts from left starting point and goes to right

    if(xr <-30.0) //ending point from right to left
        xr = 190.0f;  //in loop starts from right starting point and goes to left

    if(yr >80.0) //ending point from down to upwards
        yr = -165.0f; //in loop starts from down starting point and goes to upwards

    if(yr <-165.0) //ending point from upwards to downwards
        yr = 80.0f; //in loop starts from up starting point and goes to downwards

    glutPostRedisplay();

    glutTimerFunc(10,updateJet2Keyboard,0);
}
void Jet1() //J1
{
	//left tail wing
    glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslatef(-10.0f, 25.0f, 0.0f);
	glColor3f(1.0,1.0,0.6);
	glBegin(GL_POLYGON);
	glVertex2f(5.5,47.0);
	glVertex2f(8.5,47.0);
	glVertex2f(5.5,48.0);
	glVertex2f(4.5,48.0);
	glEnd();


	//left front wing

	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex2f(13.0,47.0);
	glVertex2f(20.0,47.0);
	glVertex2f(13.0,50.0);
	glVertex2f(11.0,50.0);
	glEnd();

	//tail
	glColor3f(0.05,0.9,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(4.7,45.0);
	glVertex2f(5.5,51.0);
	glVertex2f(7.0,51.0);
	glVertex2f(9.0,45.0);
	glEnd();


	//body
	glColor3f(0.0,0.85,0.85);
	glBegin(GL_POLYGON);
	glVertex2f(5.0,48.0);
	glVertex2f(11.0,48.0);
	glVertex2f(22.0,46.5);
	glVertex2f(22.0,45.0);
	glVertex2f(5.0,45.0);
	glEnd();


	//right front wing
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(13.0,46.0);
	glVertex2f(18.0,46.0);
	glVertex2f(13.0,41.0);
	glVertex2f(11.0,41.0);
	glEnd();


	//dome
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(13.0,47.0);
	glVertex2f(15.0,48.5);
	glVertex2f(17.0,49.0);
	glVertex2f(19.0,48.0);
	glVertex2f(21.0,46.0);
	glVertex2f(17.0,46.0);
	glVertex2f(15.0,47.5);
	glVertex2f(13.0,47.0);
	glEnd();


	//right tail wing
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex2f(5.5,47.0);
	glVertex2f(8.5,47.0);
	glVertex2f(5.5,43.0);
	glVertex2f(4.5,43.0);
	glEnd();


	// front tip
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(22.0,45.0);
	glVertex2f(22.3,45.375);
	glVertex2f(22.6,45.75);
	glVertex2f(22.3,46.125);
	glVertex2f(22.0,46.5);
	glEnd();
	glPopMatrix();
	glutSwapBuffers();
}


void Jet2() //J2
{
	//left tail wing
    glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslatef(-10.0f, 25.0f, 0.0f);
	glColor3f(1.0,1.0,0.6);
	glBegin(GL_POLYGON);
	glVertex2f(5.5+xr,47.0+yr);
	glVertex2f(8.5+xr,47.0+yr);
	glVertex2f(5.5+xr,48.0+yr);
	glVertex2f(4.5+xr,48.0+yr);
	glEnd();


	//left front wing

	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex2f(13.0+xr,47.0+yr);
	glVertex2f(20.0+xr,47.0+yr);
	glVertex2f(13.0+xr,50.0+yr);
	glVertex2f(11.0+xr,50.0+yr);
	glEnd();

	//tail
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(4.7+xr,45.0+yr);
	glVertex2f(5.5+xr,51.0+yr);
	glVertex2f(7.0+xr,51.0+yr);
	glVertex2f(9.0+xr,45.0+yr);
	glEnd();


	//body
	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(5.0+xr,48.0+yr);
	glVertex2f(11.0+xr,48.0+yr);
	glVertex2f(22.0+xr,46.5+yr);
	glVertex2f(22.0+xr,45.0+yr);
	glVertex2f(5.0+xr,45.0+yr);
	glEnd();


	//right front wing
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(13.0+xr,46.0+yr);
	glVertex2f(18.0+xr,46.0+yr);
	glVertex2f(13.0+xr,41.0+yr);
	glVertex2f(11.0+xr,41.0+yr);
	glEnd();


	//dome
	glColor3f(0.05,0.9,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(13.0+xr,47.0+yr);
	glVertex2f(15.0+xr,48.5+yr);
	glVertex2f(17.0+xr,49.0+yr);
	glVertex2f(19.0+xr,48.0+yr);
	glVertex2f(21.0+xr,46.0+yr);
	glVertex2f(17.0+xr,46.0+yr);
	glVertex2f(15.0+xr,47.5+yr);
	glVertex2f(13.0+xr,47.0+yr);
	glEnd();


	//right tail wing
	glColor3f(0.6,0.6,0.6);
	glBegin(GL_POLYGON);
	glVertex2f(5.5+xr,47.0+yr);
	glVertex2f(8.5+xr,47.0+yr);
	glVertex2f(5.5+xr,43.0+yr);
	glVertex2f(4.5+xr,43.0+yr);
	glEnd();


	// front tip
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(22.0+xr,45.0+yr);
	glVertex2f(22.3+xr,45.375+yr);
	glVertex2f(22.6+xr,45.75+yr);
	glVertex2f(22.3+xr,46.125+yr);
	glVertex2f(22.0+xr,46.5+yr);
	glEnd();
	glPopMatrix();
	glutSwapBuffers();
}
void displayLeft() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

    Hill1();
    Hill2();
    Hill3();
    Stars();
    MovingStar();
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
    glPushMatrix();
    glTranslatef(position, 0.0f, 0.0f);
    Jet1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-90.0f, 10.0f, 0.0f);
    Jet2();
    glPopMatrix();
	glFlush();  // Render now
	glutSwapBuffers();

}

void displayRight() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

    Hill1();
    Hill2();
    Hill3();
    Stars();
    MovingStar();
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
    glPushMatrix();
    glTranslatef(position1, 0.0f, 0.0f);
    Jet1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-90.0f, 10.0f, 0.0f);
    Jet2();
    glPopMatrix();
	glFlush();  // Render now
	glutSwapBuffers();

}
void handleMouse(int button, int state, int x, int y) //hM
{
    if (button == GLUT_LEFT_BUTTON)
    {
        glutDisplayFunc(displayLeft);
    }
    if (button == GLUT_RIGHT_BUTTON)
    {
        glutDisplayFunc(displayRight);
    }
    glutPostRedisplay();
}

void handlekey(int key, int x, int y) //hk
{
    switch(key){
    case GLUT_KEY_UP:
        yr=yr+5;
        glutPostRedisplay();
        break;
    case GLUT_KEY_DOWN:
        yr=yr-5;
        glutPostRedisplay();
        break;
    case GLUT_KEY_LEFT:
        xr=xr-5;
        glutPostRedisplay();
        break;
    case GLUT_KEY_RIGHT:
        xr=xr+5;
        glutPostRedisplay();
        break;
    }
    glutPostRedisplay();
}
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color
          cloud1(); cloud2(); cloud3();
    //Hill1();
    //Hill2();
    //Hill3();
    Stars();
    MovingStar();
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
    /*Building30();
    Building31();
    Building32();
    Building33();
    Building34();*/

    glPushMatrix();
    glTranslatef(-130.0f, 10.0f, 0.0f);
    Jet1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(-90.0f, 10.0f, 0.0f);
    Jet2();
    glPopMatrix();


	glFlush();  // Render now
}
void dis()
{
glutDisplayFunc(display);
}
/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutInitWindowSize(1300, 670);   // Set the window's initial width & height
	glutCreateWindow("Night City Project");  // Create window with the given title
	//glutInitWindowPosition(50, 50); // Position the window's initial top-left corner
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMouseFunc(handleMouse);
	glutSpecialFunc(handlekey);
    glutTimerFunc(20,updateJet1Left , 0);
    glutTimerFunc(20,updateJet1Right , 0);
    glutTimerFunc(80, updatecloud2, 0);
	glutTimerFunc(80, updatecloud3, 0);
    glutTimerFunc(10,updateJet2Keyboard,0);
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}
