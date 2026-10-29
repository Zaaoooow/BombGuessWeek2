#include <raylib.h>

int main(){
    InitWindow(512, 416, "Bomb Guess");
    SetTargetFPS(60);
    
    int screen = 0;

    Texture2D bground1 = LoadTexture("assets/bg1.png");
    Texture2D pButton1 = LoadTexture("assets/PlayButton1.png");
    Texture2D pButton1Hover = LoadTexture("assets/PlayButton2.png");
    Texture2D qButton1 = LoadTexture("assets/quitbutton2.png");
    Texture2D qButton1Hover = LoadTexture("assets/quitbutton1.png");


    SetTextureFilter(bground1, TEXTURE_FILTER_POINT);
    SetTextureFilter(pButton1, TEXTURE_FILTER_POINT);
    SetTextureFilter(pButton1Hover, TEXTURE_FILTER_POINT);
    SetTextureFilter(qButton1, TEXTURE_FILTER_POINT);
    SetTextureFilter(qButton1Hover, TEXTURE_FILTER_POINT);

    while(!WindowShouldClose()){
        BeginDrawing();
        
        Vector2 cursor = GetMousePosition();

        // menu screen
        if(screen == 0){
            bool hover1 = CheckCollisionPointRec(cursor, {141, 161, 228, 48});
            bool hover2 = CheckCollisionPointRec(cursor, {141, 241, 228, 48});
            ClearBackground(RAYWHITE);
            
            DrawTexture(bground1, 0, 0, WHITE);
            if(hover1){
                DrawTexture(pButton1, 0, 0, WHITE);
                if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                    screen = 1;
                }
            }
            else{
                DrawTexture(pButton1Hover, 0, 0, WHITE);
            }
            if(hover2){
                DrawTexture(qButton1, 0, 0, WHITE);
                if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                    CloseWindow();
                }
            }
            else{
                DrawTexture(qButton1Hover, 0, 0, WHITE);
            }
        }
        // gamemode page
        if(screen == 1){
            ClearBackground(RAYWHITE);
        }

        EndDrawing();
    }
    CloseWindow();
    return 0;
}