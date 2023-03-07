#include "MainWindow.h"
#include <cstdio>
#include <raylib.h>

int main(int argc, char* argv[])
{
    InitWindow(windowWidth,windowHeight,"DapperDasher");
    SetTargetFPS(60);
    while(!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(BLACK);
            DrawRectangle(rectPosX, rectPosY, rectWidth, rectHeight, RED);
            rectPosX += velocity;
            if (rectPosX > windowWidth || rectPosX < 0)
            {
                velocity = -velocity;
            }
            rectPosY += jump;
            if (rectPosY > windowHeight || rectPosY < 0)
            {
                jump = -jump;
            }
        EndDrawing();
    }
    CloseWindow();
}

