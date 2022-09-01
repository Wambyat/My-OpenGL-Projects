#include <GL/glut.h>
#include <iostream>
#include <cstdlib>

void setlight() {

    float am[] = { 0.0,0.0,0.0,1.0 };
    float di[] = { 1.0,0.0,0.0,1.0 };
    float sp[] = { 1.0,0.0,1.0,1.0 };
    float pos[] = { 1.0,2.0,3.0,1.0 };
    glLightfv(GL_LIGHT0, GL_AMBIENT, am);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, di);
    glLightfv(GL_LIGHT0, GL_SPECULAR, sp);
    glLightfv(GL_LIGHT0, GL_POSITION, pos);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);

}

void display() {

    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0, 0.0, 1.0, 0.0);
    glutSolidTeapot(.5);
    setlight();
    glEnd();
    glFlush();

}


int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);
    glMatrixMode(GL_MODELVIEW);
    glEnable(GL_DEPTH_TEST);
    glutInitWindowPosition(10, 10);
    glutInitWindowSize(1500, 1000);
    glutCreateWindow("kawaii");
    glutDisplayFunc(display);
    glutMainLoop();
}