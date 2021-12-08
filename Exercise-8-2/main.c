//developed & programming by Faraz_Hmd;
//simple maze Game ((that Not completed yet))
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <unistd.h>
#define Size_Wall_Maze 20
int i, j, height = Size_Wall_Maze, width =Size_Wall_Maze;
int x, y,gameover,flag;
void func_restarter();
void setup()
{

    gameover = 0;
    // Stores height and width
    x = height / 20;
    y = width / 20;





}
void draw() {

    char Maze_wall[Size_Wall_Maze][Size_Wall_Maze] = {{'x', ' ', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},
                                                      {'x', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'x', 'x'},
                                                      {'x', ' ', ' ', ' ', ' ', 'x', ' ', 'x', 'x', 'x', 'x', 'x', ' ', ' ', ' ', ' ', ' ', ' ', 'x', 'x'},
                                                      {'x', ' ', 'x', 'x', ' ', ' ', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', ' ', 'x', 'x', ' ', 'x', 'x'},
                                                      {'x', ' ', 'x', 'x', 'x', ' ', ' ', ' ', ' ', 'x', 'x', 'x', 'x', 'x', ' ', 'x', 'x', ' ', 'x', 'x'},
                                                      {'x', ' ', 'x', 'x', 'x', 'x', 'x', 'x', ' ', 'x', 'x', 'x', 'x', 'x', ' ', ' ', 'x', ' ', 'x', 'x'},
                                                      {'x', ' ', 'x', 'x', 'x', 'x', 'x', 'x', ' ', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', ' ', 'x', 'x'},
                                                      {'x', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', ' ', 'x', 'x'},
                                                      {'x', ' ', 'x', 'x', 'x', 'x', 'x', 'x', ' ', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', ' ', 'x', 'x'},
                                                      {'x', ' ', 'x', 'x', 'x', 'x', 'x', 'x', ' ', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', ' ', 'x', 'x'},
                                                      {'x', ' ', 'x', 'x', 'x', 'x', 'x', 'x', ' ', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', ' ', 'x', 'x'},
                                                      {'x', ' ', ' ', ' ', 'x', ' ', 'x', 'x', ' ', 'x', 'x', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'x'},
                                                      {'x', ' ', 'x', ' ', 'x', ' ', 'x', 'x', ' ', 'x', 'x', ' ', 'x', 'x', 'x', 'x', 'x', ' ', ' ', 'x'},
                                                      {'x', ' ', 'x', ' ', ' ', ' ', 'x', 'x', ' ', 'x', 'x', ' ', 'x', 'x', 'x', 'x', 'x', ' ', ' ', 'x'},
                                                      {'x', ' ', 'x', 'x', 'x', 'x', 'x', 'x', ' ', 'x', 'x', ' ', 'x', 'x', 'x', 'x', 'x', ' ', ' ', 'x'},
                                                      {'x', ' ', 'x', 'x', 'x', 'x', 'x', 'x', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'x', ' ', ' ', 'x'},
                                                      {'x', ' ', ' ', ' ', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', ' ', 'x', ' ', 'x', ' ', 'x', 'x'},
                                                      {'x', 'x', 'x', ' ', 'x', 'x', 'x', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'x', ' ', 'x', ' ', 'x', 'x'},
                                                      {'x', 'x', 'x', ' ', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', ' ', ' ', ' ', 'T', 'x'},
                                                      {'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x'},};


    system("cls");
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            printf(" %c ", Maze_wall[i][j]);
            if (i == 0 || i == width - 1
                || j == 0
                || j == height - 1) {

            }
            else {
                if (i == x && j == y) {
                    printf("0");
                }
                else{
                    printf(" ");
            }
            }
        }
        printf("\n");
    }

}

void input()
{
    if (kbhit()) {
        switch (getch()) {
            case 'a':
                flag = 1;
                break;
            case 's':
                flag = 2;
                break;
            case 'd':
                flag = 3;
                break;
            case 'w':
                flag = 4;
                break;
            case 'x':
                gameover = 1;
                break;
        }
    }
}
void logic() {
    sleep(0.01);
    switch (flag) {
        case 1:
            y--;
            break;
        case 2:
            x++;
            break;
        case 3:
            y++;
            break;
        case 4:
            x--;
            break;
        default:
            break;
    }
    if (x < 0 || x > height
        || y < 0 || y > width)
        gameover = 1;

}

int main(){
    setup();
    func_restarter();

    return 0;
}
void func_restarter(){
    if(gameover){
        return;
    } else{
        draw();
        input();
        logic();
        func_restarter();
    }

}
