#include <GL/glut.h>

void draw() {
	glClear(GL_COLOR_BUFFER_BIT);
	//set background color black

	glutSwapBuffers();
}
int main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(512, 512);
	glutCreateWindow("snake game");

	glutDisplayFunc(draw);
	glutMainLoop();
	return 0;
}