#include <windows.h>
#include <GL/glut.h>

void display() {
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glOrtho(-4, 4, -4, 4, -4, 4);
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_TRIANGLES);
    // Change color to red
    glColor3f(1.0f, 0.0f, 0.0f);
    // Move the triangle to a new position
    glVertex2f(-3.0f, -3.0f);
    glVertex2f(3.0f, -3.0f);
    glVertex2f(0.0f, 3.0f); // Change the position of the top vertex
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("Simple Triangle");
    glutInitWindowSize(320, 320);
    glutInitWindowPosition(50, 50);
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
