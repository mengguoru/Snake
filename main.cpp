#include <GL/glut.h>
#include "Snake.hpp"

Fruit fruit1;

void init() {
}
void display() {
	glClear(GL_COLOR_BUFFER_BIT);
	//set background color black
	fruit1.grow();
	fruit1.draw();

	const char *c = "text";
	glRasterPos2i(200, 200);
	glColor3f(0.0f, 1.0f, 1.0f);
	glDisable(GL_TEXTURE_2D);
	for (c ; *c != '\0'; c++) {
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, *c);
	}
	glEnable(GL_TEXTURE_2D);
	/*glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,);*/
	glutSwapBuffers();
}
int main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(512, 512);
	glutCreateWindow("snake game");

	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}