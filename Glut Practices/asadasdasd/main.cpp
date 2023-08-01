#include<cstdio>
#include<stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

GLfloat position = 0.0f;
GLfloat position1 = 0.0f;
GLfloat speed = 0.1f;

void update(int value) {

    if(position <-1.5)
        {
             position = 1.5f;
        }
    else if(position > 1.5)
    {
        position = - 1.5f ;
    }

    position -= speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}

void update1(int value) {
    if(position1 >1.5){
        position1 = -1.5f;

    }
    position1 += speed;
    glutPostRedisplay();
    glutTimerFunc(100,update1,0);
}



void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
   glClear(GL_COLOR_BUFFER_BIT);


    glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glRotatef(90, 0.0f, 0.0f,1.0f);
    glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.9f, 0.3f);
	glVertex2f(-0.5f, 0.3f);
	glVertex2f(-.7f,  0.6f);
    glEnd();
     glPopMatrix();

	glutSwapBuffers();
glFlush();

  glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);
    glTranslatef(0.0f,0.4f, 0.0f);
    glRotatef(90, 0.0f, 0.0f,1.0f);
    glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.9f, 0.3f);
	glVertex2f(-0.5f, 0.3f);
	glVertex2f(-.7f,  0.6f);
    glEnd();
     glPopMatrix();

	glutSwapBuffers();
glFlush();

glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    glRotatef(-90, 0.0f, 0.0f,1.0f);
    glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.9f, 0.3f);
	glVertex2f(-0.5f, 0.3f);
	glVertex2f(-.7f,  0.6f);
    glEnd();
     glPopMatrix();

	glutSwapBuffers();
glFlush();

glPushMatrix();
    glTranslatef(position1,0.0f, 0.0f);
    glTranslatef(0.0f,-0.4f, 0.0f);
    glRotatef(-90, 0.0f, 0.0f,1.0f);
    glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.9f, 0.3f);
	glVertex2f(-0.5f, 0.3f);
	glVertex2f(-.7f,  0.6f);
    glEnd();
     glPopMatrix();

	glutSwapBuffers();
glFlush();



}



void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{	speed += 0.1f;
			}
if (button == GLUT_RIGHT_BUTTON)
	{speed -= 0.1f;   }
glutPostRedisplay();}

int main(int argc, char** argv)
{

   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Keyboard Interaction Animation");
   glutDisplayFunc(display);


   glutTimerFunc(100, update, 0);
   glutTimerFunc(100, update1, 0);
   glutMouseFunc(handleMouse);

   glutMainLoop();
   return 0;
}
