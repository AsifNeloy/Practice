#include<cstdio>
#include <windows.h>  // for MS Windows
#include <GL/gl.h>
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>
float _move = 0.4f;
float _angle1 = 0.0f;

void initGL() {
	// Set "clearing" or background color
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black and opaque
	glLoadIdentity(); //Reset the drawing perspective
}
void building1()
{
    glBegin(GL_POLYGON);            // 1
	glColor3ub(117,8,8);
	glVertex2f(0.55f, 0.9f);
	glVertex2f(0.55f, 0.87f);
	glVertex2f(0.95f, 0.87f);
	glVertex2f(0.95f, 0.9f);

	glEnd();

    glBegin(GL_POLYGON);            // 2
	glColor3ub(232,149,40);
	glVertex2f(0.57f, 0.87f);
	glVertex2f(0.57f, 0.2f);
	glVertex2f(0.93f, 0.2f);
	glVertex2f(0.93f, 0.87f);

	glEnd();

	glBegin(GL_POLYGON);            // 3
	glColor3ub(117,8,8);
	glVertex2f(0.55f, 0.2f);
	glVertex2f(0.55f, 0.17f);
	glVertex2f(0.95f, 0.17f);
	glVertex2f(0.95f, 0.2f);

	glEnd();

	glBegin(GL_POLYGON);            // 4
	glColor3ub(232,149,40);
	glVertex2f(0.57f, 0.17f);
	glVertex2f(0.57f, -0.07f);
	glVertex2f(0.93f, -0.07f);
	glVertex2f(0.93f, 0.17f);


	glEnd();

	glBegin(GL_POLYGON);            // 5
	glColor3ub(117,8,8); // Yellow
	glVertex2f(0.95f, -0.07f);
	glVertex2f(0.95, -0.08f);
	glVertex2f(0.55f, -0.08f);
	glVertex2f(0.55f, -0.07f);

	glEnd();
    //windows
    glBegin(GL_POLYGON);            // 1
	glColor3f(1.0f, 1.0f, 1.0f); // Yellow
	glVertex2f(0.65f, 0.82f);
	glVertex2f(0.7, 0.82f);
	glVertex2f(0.7f, 0.7f);
	glVertex2f(0.65f, 0.7f);

	glEnd();

	glBegin(GL_POLYGON);            // 2
	glColor3f(1.0f, 1.0f, 1.0f); // Yellow
	glVertex2f(0.85f, 0.82f);
	glVertex2f(0.8, 0.82f);
	glVertex2f(0.8f, 0.7f);
	glVertex2f(0.85f, 0.7f);

	glEnd();


	glBegin(GL_POLYGON);            // 3
	glColor3f(1.0f, 1.0f, 1.0f); // Yellow
	glVertex2f(0.65f, 0.67f);
	glVertex2f(0.7, 0.67f);
	glVertex2f(0.7f, 0.55f);
	glVertex2f(0.65f, 0.55f);

	glEnd();

	glBegin(GL_POLYGON);            // 4
	glColor3f(1.0f, 1.0f, 1.0f); // Yellow
	glVertex2f(0.85f, 0.67f);
	glVertex2f(0.8, 0.67f);
	glVertex2f(0.8f, 0.55f);
	glVertex2f(0.85f, 0.55f);

	glEnd();

    glBegin(GL_POLYGON);            // 5
	glColor3f(1.0f, 1.0f, 1.0f); // Yellow
	glVertex2f(0.65f, 0.52f);
	glVertex2f(0.7, 0.52f);
	glVertex2f(0.7f, 0.4f);
	glVertex2f(0.65f, 0.4f);

	glEnd();

	glBegin(GL_POLYGON);            // 6
	glColor3f(1.0f, 1.0f, 1.0f); // Yellow
	glVertex2f(0.85f, 0.52f);
	glVertex2f(0.8, 0.52f);
	glVertex2f(0.8f, 0.4f);
	glVertex2f(0.85f, 0.4f);

	glEnd();

	glBegin(GL_POLYGON);            // 7
	glColor3f(1.0f, 1.0f, 1.0f); // Yellow
	glVertex2f(0.65f, 0.37f);
	glVertex2f(0.7, 0.37f);
	glVertex2f(0.7f, 0.25f);
	glVertex2f(0.65f, 0.25f);

	glEnd();

	glBegin(GL_POLYGON);            // 8
	glColor3f(1.0f, 1.0f, 1.0f); // Yellow
	glVertex2f(0.85f, 0.37f);
	glVertex2f(0.8, 0.37f);
	glVertex2f(0.8f, 0.25f);
	glVertex2f(0.85f, 0.25f);

	glEnd();

	glBegin(GL_POLYGON);            // 9
	glColor3f(1.0f, 1.0f, 1.0f); // Yellow
	glVertex2f(0.6f, 0.1f);
	glVertex2f(0.65, 0.1f);
	glVertex2f(0.65f, -0.02f);
	glVertex2f(0.6f, -0.02f);

	glEnd();

	glBegin(GL_POLYGON);            // 10
	glColor3f(1.0f, 1.0f, 1.0f); // Yellow
	glVertex2f(0.85f, 0.1f);
	glVertex2f(0.9, 0.1f);
	glVertex2f(0.9f, -0.02f);
	glVertex2f(0.85f, -0.02f);

	glEnd();

	//Line
    glLineWidth(5.5);
    glBegin(GL_LINES);            // middle line
	glColor3f(1.0f, 1.0f, 1.0f); // Yellow
	glVertex2f(0.75f, 0.87f);
	glVertex2f(0.75, 0.2f);

	glEnd();
	//Door
	glBegin(GL_POLYGON);            // 8
	glColor3f(1.0f, 1.0f, 1.0f); // Yellow
	glVertex2f(0.7f, 0.13f);
	glVertex2f(0.7, -0.07f);
	glVertex2f(0.8f, -0.07f);
	glVertex2f(0.8f, 0.13f);

	glEnd();



}
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

void building2()
{
    glBegin(GL_POLYGON);            // 1
	glColor3ub(238,199,44);
	glVertex2f(0.25f, 0.65f);
	glVertex2f(0.25f, 0.1f);
	glVertex2f(0.52f, 0.1f);
	glVertex2f(0.52f, 0.65f);

	glEnd();


    glLineWidth(5.5);
    glBegin(GL_LINES);            // 2
	glColor3ub(117,8,8); // Yellow
	glVertex2f(0.24f, 0.1f);
	glVertex2f(0.53f, 0.1f);

	glEnd();

	glBegin(GL_POLYGON);            // 3
	glColor3ub(238,199,44);
	glVertex2f(0.25f, 0.09f);
	glVertex2f(0.25f, -0.07f);
	glVertex2f(0.52f, -0.07f);
	glVertex2f(0.52f, 0.09f);

	glEnd();

	glBegin(GL_LINES);            // middle line
	glColor3ub(117,8,8); // Yellow
	glVertex2f(0.385f, 0.65f);
	glVertex2f(0.385f, 0.1f);

	glEnd();
    //windows
	glBegin(GL_POLYGON);            // 1
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.3f, 0.6f);
	glVertex2f(0.3f, 0.5f);
	glVertex2f(0.35f, 0.5f);
	glVertex2f(0.35f, 0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // 2
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.3f, 0.45f);
	glVertex2f(0.3f, 0.35f);
	glVertex2f(0.35f, 0.35f);
	glVertex2f(0.35f, 0.45f);

	glEnd();

	glBegin(GL_POLYGON);            // 3
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.3f, 0.3f);
	glVertex2f(0.3f, 0.2f);
	glVertex2f(0.35f, 0.2f);
	glVertex2f(0.35f, 0.3f);

	glEnd();

	glBegin(GL_POLYGON);            // 4
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.47f, 0.6f);
	glVertex2f(0.47f, 0.5f);
	glVertex2f(0.42f, 0.5f);
	glVertex2f(0.42f, 0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // 5
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.47f, 0.45f);
	glVertex2f(0.47f, 0.35f);
	glVertex2f(0.42f, 0.35f);
	glVertex2f(0.42f, 0.45f);

	glEnd();

	glBegin(GL_POLYGON);            // 6
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.47f, 0.3f);
	glVertex2f(0.47f, 0.2f);
	glVertex2f(0.42f, 0.2f);
	glVertex2f(0.42f, 0.3f);

	glEnd();

	//Door
	glBegin(GL_POLYGON);            // 5
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.335f, 0.05f);
	glVertex2f(0.335f, -0.07f);
	glVertex2f(0.435f, -0.07f);
	glVertex2f(0.435f, 0.05f);

	glEnd();

}

void road()
{
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(155,67,34); // Yellow
	glVertex2f(1.0f, -1.0f);
	glVertex2f(1.0f, -0.9f);
	glVertex2f(-1.0f, -0.9f);
	glVertex2f(-1.0f, -1.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(155,67,34); // Yellow
	glVertex2f(1.0f, -0.09f);
	glVertex2f(1.0f, -0.5f);
	glVertex2f(-1.0f, -0.5f);
	glVertex2f(-1.0f, -0.09f);

	glEnd();
//road
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, -0.5f);
	glVertex2f(-1.0f, -0.55f);
	glVertex2f(-0.8f, -0.55f);
	glVertex2f(-0.8f, -0.5f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.6f, -0.55f);
	glVertex2f(-0.6f, -0.5f);
	glVertex2f(-0.4f, -0.5f);
	glVertex2f(-0.4f, -0.55f);


	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.2f, -0.55f);
	glVertex2f(-0.2f, -0.5f);
	glVertex2f(0.0f, -0.5f);
	glVertex2f(0.0f, -0.55f);


	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.2f, -0.55f);
	glVertex2f(0.2f, -0.5f);
	glVertex2f(0.4f, -0.5f);
	glVertex2f(0.4f, -0.55f);


	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.6f, -0.55f);
	glVertex2f(0.6f, -0.5f);
	glVertex2f(0.8f, -0.5f);
	glVertex2f(0.8f, -0.55f);


	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.8f, -0.9f);
	glVertex2f(-0.8f, -0.85f);
	glVertex2f(-0.6f, -0.85f);
	glVertex2f(-0.6f, -0.9f);


	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.4f, -0.9f);
	glVertex2f(-0.4f, -0.85f);
	glVertex2f(-0.2f, -0.85f);
	glVertex2f(-0.2f, -0.9f);


	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.0f, -0.9f);
	glVertex2f(0.0f, -0.85f);
	glVertex2f(0.2f, -0.85f);
	glVertex2f(0.2f, -0.9f);


	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.4f, -0.9f);
	glVertex2f(0.4f, -0.85f);
	glVertex2f(0.6f, -0.85f);
	glVertex2f(0.6f, -0.9f);


	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.8f, -0.9f);
	glVertex2f(0.8f, -0.85f);
	glVertex2f(1.0f, -0.85f);
	glVertex2f(1.0f, -0.9f);


	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(107,96,92);
	glVertex2f(-1.0f, -0.85f);
	glVertex2f(-1.0f, -0.55f);
	glVertex2f(1.0f, -0.55f);
	glVertex2f(1.0f, -0.85f);


	glEnd();

	//lines

    glLineWidth(5.5);
    glBegin(GL_LINES);            // middle line
	glColor3f(1.0f, 1.0f, 1.0f); // Yellow
	glVertex2f(-1.0f, -0.7f);
	glVertex2f(-0.9, -0.7f);

	glEnd();

	glLineWidth(5.5);
    glBegin(GL_LINES);            // middle line
	glColor3f(1.0f, 1.0f, 1.0f); // Yellow
	glVertex2f(-0.8f, -0.7f);
	glVertex2f(-0.7, -0.7f);

	glEnd();

	glLineWidth(5.5);
    glBegin(GL_LINES);            // middle line
	glColor3f(1.0f, 1.0f, 1.0f); // Yellow
	glVertex2f(-0.6f, -0.7f);
	glVertex2f(-0.5, -0.7f);

	glEnd();

	glLineWidth(5.5);
    glBegin(GL_LINES);            // middle line
	glColor3f(1.0f, 1.0f, 1.0f); // Yellow
	glVertex2f(-0.4f, -0.7f);
	glVertex2f(-0.3, -0.7f);

	glEnd();

	glLineWidth(5.5);
    glBegin(GL_LINES);            // middle line
	glColor3f(1.0f, 1.0f, 1.0f); // Yellow
	glVertex2f(-0.2f, -0.7f);
	glVertex2f(-0.1, -0.7f);

	glEnd();

	glLineWidth(5.5);
    glBegin(GL_LINES);            // middle line
	glColor3f(1.0f, 1.0f, 1.0f); // Yellow
	glVertex2f(0.0f, -0.7f);
	glVertex2f(0.1, -0.7f);

	glEnd();

	glLineWidth(5.5);
    glBegin(GL_LINES);            // middle line
	glColor3f(1.0f, 1.0f, 1.0f); // Yellow
	glVertex2f(0.2f, -0.7f);
	glVertex2f(0.3, -0.7f);

	glEnd();

	glLineWidth(5.5);
    glBegin(GL_LINES);            // middle line
	glColor3f(1.0f, 1.0f, 1.0f); // Yellow
	glVertex2f(0.4f, -0.7f);
	glVertex2f(0.5, -0.7f);

	glEnd();

	glLineWidth(5.5);
    glBegin(GL_LINES);            // middle line
	glColor3f(1.0f, 1.0f, 1.0f); // Yellow
	glVertex2f(0.6f, -0.7f);
	glVertex2f(0.7, -0.7f);

	glEnd();

	glLineWidth(5.5);
    glBegin(GL_LINES);            // middle line
	glColor3f(1.0f, 1.0f, 1.0f); // Yellow
	glVertex2f(0.8f, -0.7f);
	glVertex2f(0.9, -0.7f);

	glEnd();

	//road light 1

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.9f, -1.0f);
	glVertex2f(-0.9f, -0.95f);
	glVertex2f(-0.8f, -0.95f);
	glVertex2f(-0.8f, -1.0f);


	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.84f, -0.95f);
	glVertex2f(-0.84f, -0.75f);
	glVertex2f(-0.86f, -0.75f);
	glVertex2f(-0.86f, -0.95f);


	glEnd();

	glBegin(GL_LINES);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.75f);
	glVertex2f(-0.85f, -0.4f);

	glEnd();

	glBegin(GL_LINES);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.85f, -0.41f);
	glVertex2f(-0.75f, -0.41f);

	glEnd();

	glBegin(GL_LINES);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(-0.79f, -0.42f);
	glVertex2f(-0.75f, -0.42f);

	glEnd();
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	    for(int i=0;i<200;i++)
        {
            glColor3ub(247,242,66);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.01;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-0.77,y-0.44 );
        }


	glEnd();

	//road light 2
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.3f, -1.0f);
	glVertex2f(0.3f, -0.95f);
	glVertex2f(0.4f, -0.95f);
	glVertex2f(0.4f, -1.0f);


	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.34f, -0.95f);
	glVertex2f(0.34f, -0.75f);
	glVertex2f(0.36f, -0.75f);
	glVertex2f(0.36f, -0.95f);


	glEnd();

	glBegin(GL_LINES);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.75f);
	glVertex2f(0.35f, -0.4f);

	glEnd();

	glBegin(GL_LINES);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.35f, -0.41f);
	glVertex2f(0.45f, -0.41f);

	glEnd();

	glBegin(GL_LINES);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(0.45f, -0.42f);
	glVertex2f(0.41f, -0.42f);

	glEnd();
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	    for(int i=0;i<200;i++)
        {
            glColor3ub(247,242,66);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.01;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+0.43,y-0.44 );
        }


	glEnd();


}

void moon()
	{
	    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	    for(int i=0;i<200;i++)
        {
            glColor3f(1.0f, 1.0f, 1.0f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.045;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+0.0,y+0.8 );
        }


	glEnd();



	}

void tree()
{
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(117,8,8);
	glVertex2f(-0.9f, -0.2f);
	glVertex2f(-0.9f, 0.2f);
	glVertex2f(-0.8f, 0.2f);
	glVertex2f(-0.8f, -0.2f);


	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(117,8,8);
	glVertex2f(-0.9f, -0.2f);
	glVertex2f(-0.8f, -0.2f);
	glVertex2f(-0.7f, -0.3f);
	glVertex2f(-1.0f, -0.3f);


	glEnd();

	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	 for(int i=0;i<200;i++)
        {
            glColor3ub(57,229,14);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.08;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-0.95,y+0.2);
        }


	glEnd();

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	 for(int i=0;i<200;i++)
        {
            glColor3ub(57,229,14);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.08;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-0.8,y+0.2);
        }


	glEnd();

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	 for(int i=0;i<200;i++)
        {
            glColor3ub(57,229,14);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-0.7,y+0.3);
        }


	glEnd();

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	 for(int i=0;i<200;i++)
        {
            glColor3ub(57,229,14);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-0.95,y+0.35);
        }


	glEnd();

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	 for(int i=0;i<200;i++)
        {
            glColor3ub(57,229,14);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.08;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-0.85,y+0.3);
        }


	glEnd();

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	 for(int i=0;i<200;i++)
        {
            glColor3ub(57,229,14);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-0.95,y+0.47);
        }


	glEnd();

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	 for(int i=0;i<200;i++)
        {
            glColor3ub(57,229,14);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.18;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-0.8,y+0.5);
        }


	glEnd();

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	 for(int i=0;i<200;i++)
        {
            glColor3ub(57,229,14);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.08;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-0.95,y+0.63);
        }


	glEnd();

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	 for(int i=0;i<200;i++)
        {
            glColor3ub(57,229,14);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.08;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-0.85,y+0.7);
        }


	glEnd();


}
void brench()
{
    glLineWidth(7.5);
    glBegin(GL_LINES);            // These vertices form a closed polygon
	glColor3ub(219,142,19);
	glVertex2f(-0.1f, 0.0f);
	glVertex2f(-0.1f, -0.3f);

	glEnd();

	glLineWidth(7.5);
    glBegin(GL_LINES);            // These vertices form a closed polygon
	glColor3ub(219,142,19);
	glVertex2f(0.1f, 0.0f);
	glVertex2f(0.1f, -0.3f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(134,47,16); // Yellow
	glVertex2f(-0.12f, -0.01f);
	glVertex2f(-0.12f, -0.07f);
	glVertex2f(0.12f, -0.07f);
	glVertex2f(0.12f, -0.01f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(134,47,16); // Yellow
	glVertex2f(-0.12f, -0.1f);
	glVertex2f(-0.12f, -0.16f);
	glVertex2f(0.12f, -0.16f);
	glVertex2f(0.12f, -0.1f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3ub(134,47,16); // Yellow
	glVertex2f(-0.12f, -0.18f);
	glVertex2f(-0.15f, -0.22f);
	glVertex2f(0.15f, -0.22f);
	glVertex2f(0.12f, -0.18f);

	glEnd();

	glLineWidth(7.5);
    glBegin(GL_LINES);            // These vertices form a closed polygon
	glColor3ub(219,142,19);
	glVertex2f(-0.13f, -0.22f);
	glVertex2f(-0.13f, -0.3f);

	glEnd();

	glLineWidth(7.5);
    glBegin(GL_LINES);            // These vertices form a closed polygon
	glColor3ub(219,142,19);
	glVertex2f(0.13f, -0.22f);
	glVertex2f(0.13f, -0.3f);

	glEnd();

}



void update(int value) {

_move += .02;
if(_move > 1)
{
_move = -1.0;
}
_angle1+=2.0f;
if(_angle1 > 360.0)
{
_angle1-=360;
}
glutPostRedisplay(); //Notify GLUT that the display has changed


glutTimerFunc(20, update, 0); //Notify GLUT to call update again in 25 milliseconds
}

void display3() {
    //glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glClearColor(1.0f, 1.1f, 1.0f, 0.0f); // Set background color to black and opaque

    glPushMatrix();
    //glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-1.f, -1.0f);
    glVertex2f( 1.0f, -1.0f);
    glVertex2f( 1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glEnd();
    glPopMatrix();
    building1();
    building2();
    road();
    moon();
    tree();
    brench();
    //glutTimerFunc(1220,disback,0);
	glFlush();  // Render now
}
void display2(int val) {

 glutDisplayFunc(display3);

}
void display() {
    //glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque


    glPushMatrix();
    //glTranslatef(position,0.0f, 0.0f);
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-1.f, -1.0f);
    glVertex2f( 1.0f, -1.0f);
    glVertex2f( 1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glEnd();
    glPopMatrix();
    building1();
    building2();
    road();
    tree();
    brench();
    glutTimerFunc(1220,display2,0);
	glFlush();  // Render now
}
void dis()
{
glutDisplayFunc(display);
}
/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutInitWindowSize(1320, 680);   // Set the window's initial width & height
	glutCreateWindow("Task1"); // Create a window with the given title
	glutDisplayFunc(dis); // Register display callback handler for window re-paint
	initGL();
	glutTimerFunc(20, update, 0); //Add a timer
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
