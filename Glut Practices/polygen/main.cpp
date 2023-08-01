#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Initialize OpenGL Graphics */
void initGL() {
	// Set "clearing" or background color
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Black and opaque
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color



	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(255, 0, 0); // Red

	glVertex2f(10.0f, -10.0f);    // x, y
	glVertex2f(10.0f, -8.0f);
	glVertex2f(-10.0f, -8.0f);    // x, y
	glVertex2f(-10.0f, -10.0f);

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(255, 225, 0); // Red

	glVertex2f(10.0f, -8.0f);    // x, y
	glVertex2f(10.0f, -6.0f);
	glVertex2f(-10.0f, -6.0f);    // x, y
	glVertex2f(-10.0f, -8.0f);

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(255, 128, 0); // Red

	glVertex2f(10.0f, -6.0f);    // x, y
	glVertex2f(10.0f, -4.0f);
	glVertex2f(-10.0f, -4.0f);    // x, y
	glVertex2f(-10.0f, -6.0f);

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(0, 204, 0); // Red

	glVertex2f(10.0f, -4.0f);    // x, y
	glVertex2f(10.0f, -2.0f);
	glVertex2f(-10.0f, -2.0f);    // x, y
	glVertex2f(-10.0f, -4.0f);

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(0, 204, 204); // Red

	glVertex2f(10.0f, -2.0f);    // x, y
	glVertex2f(10.0f, 0.0f);
	glVertex2f(-10.0f, 0.0f);    // x, y
	glVertex2f(-10.0f, -2.0f);

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(0, 128, 255); // Red

	glVertex2f(10.0f, 0.0f);    // x, y
	glVertex2f(10.0f, 2.0f);
	glVertex2f(-10.0f, 2.0f);    // x, y
	glVertex2f(-10.0f, 0.0f);

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(127, 0, 255); // Red

	glVertex2f(10.0f, 2.0f);    // x, y
	glVertex2f(10.0f, 4.0f);
	glVertex2f(-10.0f, 4.0f);    // x, y
	glVertex2f(-10.0f, 2.0f);

	glEnd();

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3ub(51, 0, 0);
	glVertex2f(-10.0f, -10.0f);    // x, y
	glVertex2f(10.0f, -10.0f);    // x, y

	glVertex2f(-10.0f, -8.0f);    // x, y
	glVertex2f(10.0f, -8.0f);

	glVertex2f(-10.0f, -6.0f);    // x, y
	glVertex2f(10.0f, -6.0f);

	glVertex2f(-10.0f, -4.0f);    // x, y
	glVertex2f(10.0f, -4.0f);

	glVertex2f(-10.0f, -2.0f);    // x, y
	glVertex2f(10.0f, -2.0f);

	glVertex2f(-10.0f, 0.0f);    // x, y
	glVertex2f(10.0f, 0.0f);

	glVertex2f(-10.0f, 2.0f);    // x, y
	glVertex2f(10.0f, 2.0f);

	glVertex2f(-10.0f, 4.0f);    // x, y
	glVertex2f(10.0f, 4.0f);


          glVertex2f(-10.0f, -10.0f);    // x, y
	glVertex2f(-10.0f, 4.0f);

	glVertex2f(10.0f, -10.0f);    // x, y
	glVertex2f(10.0f, 4.0f);

	glEnd();


	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutCreateWindow("Rainbow Flag");  // Create window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	gluOrtho2D(-15, 15, -15, 15);
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}
