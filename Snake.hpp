#include <cstdlib>
#include <GL/glut.h>
#define GRID_X 20
#define GRID_Y 20
#define GRID_ELEMEMT 16
#define WINDOW_WIDTH (GRID_X*GRID_ELEMEMT)
#define WINDOW_HEIGHT (GRID_Y*GRID_ELEMEMT)

struct Point {
	int x, y;
};

//enum _direction { left, right, up, down }direction;
//int body_lenght = 2;
//Point arr[10];

class Fruit {
public:
	Point fruit;

	void grow() {
		fruit.x = rand() % GRID_X;
		fruit.y = rand() % GRID_Y;

		//// if fruit position conflict with snake,grow again 
		//for (int i = 0; i < body_lenght; ++i)
		//	if (arr[i].x == fruit.x&&arr[i].y == fruit.y)
		//		grow();
	}
	void draw() {
		glColor3f(1, 0, 0);
		glRecti(fruit.x*GRID_ELEMEMT-1, fruit.y*GRID_ELEMEMT, (fruit.x+1)*GRID_ELEMEMT, (fruit.y+1)*GRID_ELEMEMT+1);
	}
};