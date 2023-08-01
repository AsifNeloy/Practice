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
	glColor3ub(0, 0, 0); // Red

	glVertex2f(4.0f, 20.0f);    // x, y
	glVertex2f(4.0f, 2.0f);
	glVertex2f(-4.0f, 2.0f);    // x, y
	glVertex2f(-4.0f, 20.0f);

	glEnd();

	glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(0, 0, 0); // Red

	glVertex2f(1.0f, 2.0f);    // x, y
	glVertex2f(1.0f, -18.0f);
	glVertex2f(-1.0f, -18.0f);    // x, y
	glVertex2f(-1.0f, 2.0f);

	glEnd();
          glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3ub(0, 0, 0); // Red

	glVertex2f(-5.0f, -18.0f);    // x, y
	glVertex2f(5.0f, -18.0f);
	glVertex2f(5.0f, -20.0f);    // x, y
	glVertex2f(-5.0f, -20.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(255.0f, 0.0f, 0.0f); // Yellow
	glVertex2f(0.0f, 18.0f);
	glVertex2f(1.0f, 17.0f);
	glVertex2f(1.0f, 16.0f);
	glVertex2f(0.0f, 15.0f);
	glVertex2f(-1.0f, 16.0f);
	glVertex2f(-1.0f, 17.0f);
	glEnd();

          glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 0.0f); // Yellow
	glVertex2f(0.0f, 14.0f);
	glVertex2f(1.0f, 13.0f);
	glVertex2f(1.0f, 12.0f);
	glVertex2f(0.0f, 11.0f);
	glVertex2f(-1.0f, 12.0f);
	glVertex2f(-1.0f, 13.0f);
	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.0f, 255.0f, 0.0f); // Yellow
	glVertex2f(0.0f, 10.0f);
	glVertex2f(1.0f, 9.0f);
	glVertex2f(1.0f, 8.0f);
	glVertex2f(0.0f, 7.0f);
	glVertex2f(-1.0f, 8.0f);
	glVertex2f(-1.0f, 9.0f);
	glEnd();

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);          // Initialize GLUT
	glutCreateWindow("Rainbow Flag");  // Create window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	gluOrtho2D(-25, 25, -25, 25);
	glutDisplayFunc(display);       // Register callback handler for window re-paint event
	initGL();                       // Our own OpenGL initialization
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}

