#include <raylib.h>
#include <chrono>
#include <thread>
#include <random>

int main(){
    InitWindow(512, 416, "Bomb Guess");
    SetTargetFPS(60);

    int screen = 0;

    Texture2D bground1 = LoadTexture("assets/bg1.png");
    Texture2D pButton1 = LoadTexture("assets/PlayButton1.png");
    Texture2D pButton1Hover = LoadTexture("assets/PlayButton2.png");
    Texture2D qButton1 = LoadTexture("assets/quitbutton2.png");
    Texture2D qButton1Hover = LoadTexture("assets/quitbutton1.png");
    Texture2D guideButton1 = LoadTexture("assets/guide2.png");
    Texture2D guideButton1Hover = LoadTexture("assets/guide1.png");
    Texture2D guidePage = LoadTexture("assets/guidepage.png");
    Texture2D guidePageExit = LoadTexture("assets/guidepageExit.png");
    Texture2D guidePageExithover = LoadTexture("assets/guidepageExitHover.png");
    Texture2D screen2 = LoadTexture("assets/screen2.png");
    Texture2D normalmode1 = LoadTexture("assets/normal1.png");
    Texture2D normalmode1hover = LoadTexture("assets/normal1hover.png");
    Texture2D customMode1 = LoadTexture("assets/custom.png");
    Texture2D customMode1Hover = LoadTexture("assets/customhover.png");
    Texture2D backbutton = LoadTexture("assets/backbuttonhover.png");
    Texture2D backbuttonhover = LoadTexture("assets/backbutton.png");
    Texture2D normalpage = LoadTexture("assets/background3.png");
    Texture2D bomb = LoadTexture("assets/bomb.png");
    Texture2D ezmodebutton1 = LoadTexture("assets/choice1.png");
    Texture2D ezmodebutton1hover = LoadTexture("assets/choice1hover.png");
    Texture2D ezmodebutton2 = LoadTexture("assets/choice2.png");
    Texture2D ezmodebutton2hover = LoadTexture("assets/choice2hover.png");
    Texture2D ezmodebutton3 = LoadTexture("assets/choice3.png");
    Texture2D ezmodebutton3hover = LoadTexture("assets/choice3hover.png");
    Texture2D displaybox = LoadTexture("assets/displaybox.png");
    
    //normal mode choices
    //yellow
    Texture2D c1 = LoadTexture("assets/c1.png");
    Texture2D c4 = LoadTexture("assets/c4.png");
    Texture2D c7 = LoadTexture("assets/c7.png");
    SetTextureFilter(c1, TEXTURE_FILTER_POINT);
    SetTextureFilter(c4, TEXTURE_FILTER_POINT);
    SetTextureFilter(c7, TEXTURE_FILTER_POINT);
    //blue
    Texture2D c2 = LoadTexture("assets/c2.png");
    Texture2D c5 = LoadTexture("assets/c5.png");
    Texture2D c8 = LoadTexture("assets/c8.png");
    SetTextureFilter(c2, TEXTURE_FILTER_POINT);
    SetTextureFilter(c5, TEXTURE_FILTER_POINT);
    SetTextureFilter(c8, TEXTURE_FILTER_POINT);
    //green
    Texture2D c3 = LoadTexture("assets/c3.png");
    Texture2D c6 = LoadTexture("assets/c6.png");
    Texture2D c9 = LoadTexture("assets/c9.png");
    SetTextureFilter(c3, TEXTURE_FILTER_POINT);
    SetTextureFilter(c6, TEXTURE_FILTER_POINT);
    SetTextureFilter(c9, TEXTURE_FILTER_POINT);

    //make images sharp.
    SetTextureFilter(bground1, TEXTURE_FILTER_POINT);
    SetTextureFilter(pButton1, TEXTURE_FILTER_POINT);
    SetTextureFilter(pButton1Hover, TEXTURE_FILTER_POINT);
    SetTextureFilter(qButton1, TEXTURE_FILTER_POINT);
    SetTextureFilter(qButton1Hover, TEXTURE_FILTER_POINT);
    SetTextureFilter(guideButton1, TEXTURE_FILTER_POINT);
    SetTextureFilter(guideButton1Hover, TEXTURE_FILTER_POINT);
    SetTextureFilter(guidePage, TEXTURE_FILTER_POINT);
    SetTextureFilter(guidePageExit, TEXTURE_FILTER_POINT);
    SetTextureFilter(guidePageExithover, TEXTURE_FILTER_POINT);
    SetTextureFilter(screen2, TEXTURE_FILTER_POINT);
    SetTextureFilter(normalmode1, TEXTURE_FILTER_POINT);
    SetTextureFilter(normalmode1hover, TEXTURE_FILTER_POINT);
    SetTextureFilter(customMode1, TEXTURE_FILTER_POINT);
    SetTextureFilter(customMode1Hover, TEXTURE_FILTER_POINT);
    SetTextureFilter(backbutton, TEXTURE_FILTER_POINT);
    SetTextureFilter(backbuttonhover, TEXTURE_FILTER_POINT);
    SetTextureFilter(normalpage, TEXTURE_FILTER_POINT);
    SetTextureFilter(bomb, TEXTURE_FILTER_POINT);
    SetTextureFilter(ezmodebutton1, TEXTURE_FILTER_POINT);
    SetTextureFilter(ezmodebutton1hover, TEXTURE_FILTER_POINT);
    SetTextureFilter(ezmodebutton2, TEXTURE_FILTER_POINT);
    SetTextureFilter(ezmodebutton2hover, TEXTURE_FILTER_POINT);
    SetTextureFilter(ezmodebutton3, TEXTURE_FILTER_POINT);
    SetTextureFilter(ezmodebutton3hover, TEXTURE_FILTER_POINT);
    SetTextureFilter(displaybox, TEXTURE_FILTER_POINT);

    //guide screen bool
    bool guideScreen = false;
    srand(time(NULL));
    
    while(!WindowShouldClose()){
        

        BeginDrawing();
        
        Vector2 cursor = GetMousePosition();

        // menu screen
        if(screen == 0){
            bool playhover = CheckCollisionPointRec(cursor, {141, 161, 228, 48});
            bool quithover = CheckCollisionPointRec(cursor, {141, 241, 228, 48});
            bool guidehover = CheckCollisionPointRec(cursor, {180, 320, 148, 44});
            bool guideExithover = CheckCollisionPointRec(cursor, {392, 92, 20, 20});

            //start of screen 0 code
            ClearBackground(RAYWHITE);
            
            DrawTexture(bground1, 0, 0, WHITE);
            if(playhover){
                DrawTexture(pButton1, 0, 0, WHITE);
                if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                    screen = 1;
                }
            }
            else{
                DrawTexture(pButton1Hover, 0, 0, WHITE);
            }
            if(quithover){
                DrawTexture(qButton1, 0, 0, WHITE);
                if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                    CloseWindow();
                }
            }
            else{
                DrawTexture(qButton1Hover, 0, 0, WHITE);
            }
            if(guidehover){
                DrawTexture(guideButton1, 0, 0, WHITE);
                if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                    guideScreen = true;
                }
            }
            else{
                DrawTexture(guideButton1Hover, 0, 0, WHITE);
            }

            //guide screen code
            if(guideScreen == true){
                DrawTexture(guidePage, 0, 0, WHITE);
                DrawText("On the bomb, you will have three different", 141, 130, 10, WHITE);
                DrawText("shaped buttons with three different colors.", 141, 150, 10, WHITE);
                DrawText("You will then be given a random shape with", 141, 190, 10, WHITE);
                DrawText("with a random color...", 141, 210, 10, WHITE);
                DrawText("Your GOAL is to match the color or the shape", 141, 250, 10, WHITE);
                DrawText("depending on what the screen tells you.", 141, 270, 10, WHITE);

                if(guideExithover){
                    DrawTexture(guidePageExithover, 0, 0, WHITE);
                    if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                        guideScreen = false;
                    }
                }
                else{
                    DrawTexture(guidePageExit, 0, 0, WHITE);
                }
            }
        }
        else if(screen == 1){
            bool normalmodehover = CheckCollisionPointRec(cursor, {156, 144, 196, 40});            
            bool customhover = CheckCollisionPointRec(cursor, {156, 212, 196, 40});
            bool backhover = CheckCollisionPointRec(cursor, {156, 280, 196, 40});

            //start of screen 1 code
            ClearBackground(RAYWHITE);
            
            DrawTexture(screen2, 0, 0, WHITE);

            if(normalmodehover){
                DrawTexture(normalmode1hover, 0, 0, WHITE);
                if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                    screen = 2;
                }
            }
            else{
                DrawTexture(normalmode1, 0, 0, WHITE);
            }
            if(customhover){
                DrawTexture(customMode1Hover, 0, 0, WHITE);
            }
            else{
                DrawTexture(customMode1, 0, 0, WHITE);
            }
            if(backhover){
                DrawTexture(backbuttonhover, 0, 0, WHITE);
                if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                    screen = 0;
                }
            }
            else{
                DrawTexture(backbutton, 0, 0, WHITE);
            }
        }
        else if(screen == 2){

            bool choice1hover = CheckCollisionPointRec(cursor, {191, 284, 32, 32});
            bool choice2hover = CheckCollisionPointRec(cursor, {240, 284, 32, 32});
            bool choice3hover = CheckCollisionPointRec(cursor, {288, 284, 32, 32});


            int normaldisplays = 0;
            int correctans;
            int normalrand1 = rand() % 9 + 1;
            int normalrand2 = rand() % 9 + 1;
            int normalrand3 = rand() % 9 + 1;
            int score = 0;
            int answer;
            int x;

            ClearBackground(RAYWHITE);

            DrawTexture(normalpage, 0, 0, WHITE);

            DrawTexture(bomb, 0, 0, WHITE);
            DrawTexture(displaybox, 0, 0, WHITE);

            // display random logic

            if(normaldisplays == 0){
                x = normalrand1;
            }
            else if(normaldisplays == 1){
                x = normalrand2;
            }
            else if(normaldisplays == 2){
                x = normalrand3;
            }

            if(x == 1){
                DrawTexture(c1, 0, 0, WHITE);
                correctans = 0;
            }
            else if(x == 2){
                DrawTexture(c2, 0, 0, WHITE);
                correctans = 0;
            }
            else if(x == 3){
                DrawTexture(c3, 0, 0, WHITE);
                correctans = 0;
            }
            else if(x == 4){
                DrawTexture(c4, 0, 0, WHITE);
                correctans = 1;
            }
            else if(x == 5){
                DrawTexture(c5, 0, 0, WHITE);
                correctans = 1;
            }
            else if(x == 6){
                DrawTexture(c6, 0, 0, WHITE);
                correctans = 1;
            }
            else if(x == 7){
                DrawTexture(c7, 0, 0, WHITE);
                correctans = 2;
            }
            else if(x == 8){
                DrawTexture(c8, 0, 0, WHITE);
                correctans = 2;
            }
            else if(x == 9){
                DrawTexture(c9, 0, 0, WHITE);
                correctans = 2;
            }

            //choices logic

            if(choice1hover){
                DrawTexture(ezmodebutton1hover, 0, 0, WHITE);
                if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                    answer = 0;
                }
            }
            else{
                DrawTexture(ezmodebutton1, 0, 0, WHITE);
            }
            if(choice2hover){
                DrawTexture(ezmodebutton2hover, 0, 0, WHITE);
                if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                    answer = 1;
                }
            }
            else{
                DrawTexture(ezmodebutton2, 0, 0, WHITE);
            }
            if(choice3hover){
                DrawTexture(ezmodebutton3hover, 0, 0, WHITE);
                if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                    answer = 2;
                }
            }
            else{
                DrawTexture(ezmodebutton3, 0, 0, WHITE);
            }

            // check answer

            if(correctans == answer){
                DrawText("RIGHT", 140, 140, 50, GREEN);
            }

            answer = 4;
        }

        EndDrawing();
    }
    CloseWindow();
    return 0;
}