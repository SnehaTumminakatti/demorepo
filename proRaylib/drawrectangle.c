#include "raylib.h"

int main(void){
    
    InitWindow(500,500,"my window");
    SetTargetFPS(60);
    while(!WindowShouldClose()){
        BeginDrawing();
        for(int j=0;j<=500;j+=50){
            for(int i=0;i<=500;i+=50){
                DrawRectangleLines(j,i,50,50,BEIGE);
            }

        }
            ClearBackground(WHITE);
        EndDrawing();
    }
    // CloseWindow();
    return 0;
}