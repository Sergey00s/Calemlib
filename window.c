#include "calemlib.h"


int init_window(int x, int y, int width, int height, char *title) {

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(width, height);
    glutInitWindowPosition(x, y);
    glutCreateWindow(title);
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);
        glMatrixMode(GL_PROJECTION);
        gluOrtho2D(-1.0, 1.0, -1.0, 1.0);

    glLoadIdentity();
    return 0;
}

void display(void) {
}


int loop_window(void) {
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}