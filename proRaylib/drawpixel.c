#include <stdio.h>
#include<raylib.h>

int main(void)
{
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 800;
    const int screenHeight = 450;
    const int posX=100;
    const int posY=10;
    const int centerX=50;
    const int centerY=50;
    const int radius=20;
    Vector2 pixelPos = {posX, posY}; // Change these values to adjust position
    // Vector4 pixelColor = {1.0f, 0.0f, 0.0f, 1.0f}; // Red color

    InitWindow(screenWidth, screenHeight, "raylib [core] example - basic window");

    SetTargetFPS(60);               
       while (!WindowShouldClose())    
    {
        BeginDrawing();

            ClearBackground(RAYWHITE);


            DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
            // DrawPixel(posX,posY,LIGHTGRAY);   
            DrawPixelV(pixelPos, DARKBLUE);
            DrawCircle(centerX, centerY, radius, DARKBLUE);    

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    CloseWindow();       
    return 0;
}
