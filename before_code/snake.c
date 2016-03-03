#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>
#define WIDTH 64
#define HEIGHT 32
char map[HEIGHT][WIDTH] ;
bool gameOver = false;
// counter: for test
int counter = 0;
void init(){
	// memset(map,0,sizeof(map));
	for (int i = 0; i < HEIGHT; ++i)
	{
		for (int j = 0; j < WIDTH; ++j)
		{
			if(i == 0 || i ==(HEIGHT -1) || j == 0 || j == (WIDTH-1))
				map[i][j] = 'W';
			else
				map[i][j] = (char) 0;
		}
	}
}
void draw(){
	system("clear");
	for (int i = 0; i < HEIGHT; ++i)
	{
		for (int j = 0; j < WIDTH; ++j)
		{
			if (map[i][j]== (char) 0)
			{
				printf(" ");
			}else if (map[i][j]== 'W')
			{
				printf("W");
			}
		}
		printf("\n");
	}
	printf("%d\n",counter++ );
}
// void handleMessage(){
// }
int main(){
	init();
	while(!gameOver){
		draw();
		// handleMessage();
		sleep(1);
	}
	printf("Game Over\n");
	return 0;
}