#include "raylib.h"
#include "dice.h"
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
    srand(time(0));

    InitWindow(800, 600, "Dice Roller");
    SetTargetFPS(60);
    Texture2D dices[7];
    for(int i=0; i < 7; i++){
        string imagename = "dice" + to_string(i) + ".png";
        dices[i] = LoadTexture(imagename.c_str());
    }
    
    Dice dice(6);
    int result = 0;


    while (!WindowShouldClose())
    {

        if (IsKeyPressed(KEY_SPACE))
        {
            result = dice.roll();
        }


        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawTexture(dices[result], 100, 100, WHITE);

        DrawText("Press SPACE to roll the dice", 10, 10, 20, DARKGRAY);

        EndDrawing();
    }

    for(int i=0; i < 7; i++){
        UnloadTexture(dices[i]);
    }
    CloseWindow();

    return 0;
}

