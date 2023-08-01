#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

          glLineWidth(2); //elbow
          glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.3f, 0.3f);    // x, y
	glVertex2f(-0.2f, 0.3f);    // x, y
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.2f, 0.3f);    // x, y
	glVertex2f(-0.2f, -0.3f);    // x, y
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(-0.2f, -0.3f);    // x, y
	glVertex2f(-0.1f, -0.3f);    // x, y
	glEnd();

	glBegin(GL_TRIANGLES);//triangle
	glColor3ub(255, 255, 0);
	glVertex2d(0.0f, 0.4f);
	glVertex2d(0.4f, 0.0f);
	glVertex2d(0.0f, -0.4f);
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.0f, 0.4f);    // x, y
	glVertex2f(0.4f, 0.0f);    // x, y
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.4f, 0.0f);    // x, y
	glVertex2f(0.0f, -0.4f);    // x, y
	glEnd();
	glBegin(GL_LINES);
	glColor3ub(0, 0, 0);
	glVertex2f(0.0f, -0.4f);    // x, y
	glVertex2f(0.0f, 0.4f);    // x, y
	glEnd();


	/*glLineWidth(7.5);
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(1.0,0,1.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

    glVertex2f(0.2f,0.5f);
    glVertex2f(0.2f,-0.5f);

	glEnd();*/


	glFlush();  // Render now
}

void others(){

}
/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("scenario"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	//display();
	//others();
	//glutDisplayFunc(others);
	glutDisplayFunc(display);
	//others();// Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
