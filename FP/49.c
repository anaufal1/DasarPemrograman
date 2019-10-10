
#include <stdio.h>
#include <stdbool.h>

#define WIDTH (8)
#define HEIGHT (8)

void printMaze(char maze[WIDTH][HEIGHT]) {
	int i, j;
	
	//print maze dengan jalan yang sudah ditandai
    for (i = 0; i < WIDTH; i++) {
            for ( j = 0; j < HEIGHT; j++) {
                    printf("%c ", maze[i][j]);
        }
        putchar('\n');
    }
    printf("\n");
}

bool findPath(char maze[WIDTH][HEIGHT], int x, int y) {

    maze[x][y] = 'h';

    if (x == WIDTH - 1 && y == HEIGHT - 1) {
        return true;
    }

    if (x + 1 < WIDTH && maze[x + 1][y] == ' ') {
        if (findPath(maze, x + 1, y)) {
            return true;
        }
    }

    if (x - 1 >= 0 && maze[x - 1][y] == ' ') {
        if (findPath(maze, x - 1, y)) {
            return true;
        }
    }

    if (y + 1 < HEIGHT && maze[x][y + 1] == ' ') {
        if (findPath(maze, x, y + 1)) {
            return true;
        }
    }

    if (y - 1 >= 0 && maze[x][y - 1] == ' ') {
        if (findPath(maze, x, y - 1)) {
            return true;
        }
    }

    maze[x][y] = ' ';

    return false;
}

int main(void) {
int i,j,x,y;
    char maze[WIDTH][HEIGHT];
    
    //buat labirin
    printf("Gambarlah labirin dimana titik (0,1) adalah pintu masuk dan (0,7) adalah pintu keluar\n");
    for(x=0;x<8;x++){
    	for(y=0;y<8;y++){
    		maze[x][y]=getchar();
		}
		getchar();
	}
	
	//output program
    if (findPath(maze, 0, 1)) {
        printf("\nMaze completed!\n\n");
        printMaze(maze);
    } else {
        printf("\nNo path found!");
    }

    return 0;
}

