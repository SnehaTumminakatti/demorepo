#include <raylib.h>

int main() {
    InitWindow(800, 600, "Line Drawing");

    Vector2 startPoint = {100, 100};
    Vector2 endPoint = {650, 300};

    while (!WindowShouldClose()) {
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawLineEx(startPoint, endPoint, 5.0f, BLACK); // 5.0f is the line width

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
