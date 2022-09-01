#include <stdlib.h>
#include <GL/glut.h>
#include <cstdlib>
void drawhex()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	glBegin(GL_TRIANGLES);
	glVertex2f(50.0, 0.0);
	glVertex2f(0.0, 50.0);
	glVertex2f(100.0, 50.0);

	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(50.0, 0.0);
	glVertex2f(50.0, 100.0);
	glVertex2f(100.0, 0.0);

	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(50.0, 100.0);
	glVertex2f(0.0, 100.0);
	glVertex2f(100.0, 100.0);

	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(0.0, 100.0);
	glVertex2f(100.0, 100.0);
	glVertex2f(50.0, 150.0);

	glEnd();
	glFlush();
}


// Initialize OpenGL
void init(void) {
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 300.0, 0.0, 300.0);
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(10, 10);
	glutInitWindowSize(1500, 1000);
	glutCreateWindow("S. Gasket");
	init();
	glutDisplayFunc(drawhex);
	glutMainLoop();
}