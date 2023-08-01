#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

	glLineWidth(2);
	glBegin(GL_POLYGON); //building
	glColor3ub(153, 0, 76);
	glVertex2d(0.3, -0.3);
	glVertex2d(0.3, 0.5);
	glVertex2d(-0.2, 0.5);
	glVertex2d(-0.2, -0.3);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3ub(255, 255, 0);
	glVertex2d(0.2, 0.4);
	glVertex2d(0.2, 0.3);
	glVertex2d(-0.1, 0.3);
	glVertex2d(-0.1, 0.4);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3ub(255, 255, 0);
	glVertex2d(0.2, 0.3);
	glVertex2d(0.2, 0.2);
	glVertex2d(-0.1, 0.2);
	glVertex2d(-0.1, 0.3);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3ub(255, 255, 0);
	glVertex2d(0.2, 0.2);
	glVertex2d(0.2, 0.1);
	glVertex2d(-0.1, 0.1);
	glVertex2d(-0.1, 0.2);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3ub(255, 255, 0);
	glVertex2d(0.2, 0.1);
	glVertex2d(0.2, 0.0);
	glVertex2d(-0.1, 0.0);
	glVertex2d(-0.1, 0.1);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glColor3ub(255, 255, 0);
	glVertex2d(0.2, 0.0);
	glVertex2d(0.2, -0.1);
	glVertex2d(-0.1, -0.1);
	glVertex2d(-0.1, 0.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 255, 0);
	glVertex2d(0.1, -0.3);
	glVertex2d(0.1, -0.2);
	glVertex2d(0.0, -0.2);
	glVertex2d(0.0, -0.3);
	glEnd();


	glLineWidth(7);
	glBegin(GL_LINES);
	glColor3ub(117, 41, 41);
	glVertex2f(-0.4f, 0.2f);    // x, y
	glVertex2f(-0.4f, -0.3f);    // x, y
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0, 126, 0);
	glVertex2d(-0.2, 0.2);
	glVertex2d(-0.4, 0.5);
	glVertex2d(-0.6, 0.2);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0, 126, 0);
	glVertex2d(-0.2, 0.3);
	glVertex2d(-0.4, 0.5);
	glVertex2d(-0.6, 0.3);
	glEnd();

	glLineWidth(4);

	glBegin(GL_LINES);
	glColor3ub(210, 180, 140);
	glVertex2f(-0.6f, -0.3f);    // x, y
	glVertex2f(-0.6f, -0.1f);    // x, y
	glEnd();

    glBegin(GL_LINES);
	glColor3ub(210, 180, 140);
	glVertex2f(-0.9f, -0.3f);    // x, y
	glVertex2f(-0.9f, -0.1f);    // x, y
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(210, 180, 140);
	glVertex2f(-0.5f, -0.1f);    // x, y
	glVertex2f(-1.0f, -0.1f);    // x, y
	glEnd();


	glFlush();  // Render now
}


/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("scenario"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
