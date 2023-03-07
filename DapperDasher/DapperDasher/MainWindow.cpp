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
            DrawText("Hello World", textPosX, textPosY,16, WHITE);
        textPosY += textDirection;
        if (textPosY > windowHeight || textPosY < 0)
        {
            textDirection = -textDirection ;
        }
        EndDrawing();
    }
    CloseWindow();
}

