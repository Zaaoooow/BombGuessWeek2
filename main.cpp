//bomb guess game using raylibs.
#include <raylib.h>

int main(){
    InitAudioDevice();
    InitWindow(512, 416, "Bomb Guess");
    SetTargetFPS(60);

    int screen = 0;
    
    //screen0
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
    //screen1
    Texture2D screen2 = LoadTexture("assets/screen2.png");
    Texture2D normalmode1 = LoadTexture("assets/normal1.png");
    Texture2D normalmode1hover = LoadTexture("assets/normal1hover.png");
    Texture2D customMode1 = LoadTexture("assets/custom.png");
    Texture2D customMode1Hover = LoadTexture("assets/customhover.png");
    Texture2D backbutton = LoadTexture("assets/backbuttonhover.png");
    Texture2D backbuttonhover = LoadTexture("assets/backbutton.png");
    //screen2
    Texture2D normalpage = LoadTexture("assets/background3.png");
    Texture2D bomb = LoadTexture("assets/bomb.png");
    Texture2D ezmodebutton1 = LoadTexture("assets/choice1.png");
    Texture2D ezmodebutton1hover = LoadTexture("assets/choice1hover.png");
    Texture2D ezmodebutton2 = LoadTexture("assets/choice2.png");
    Texture2D ezmodebutton2hover = LoadTexture("assets/choice2hover.png");
    Texture2D ezmodebutton3 = LoadTexture("assets/choice3.png");
    Texture2D ezmodebutton3hover = LoadTexture("assets/choice3hover.png");
    Texture2D displaybox = LoadTexture("assets/displaybox.png");
    Texture2D boom = LoadTexture("assets/boom.png");
    Texture2D boompa = LoadTexture("assets/boompa.png");
    Texture2D boompahover = LoadTexture("assets/boompahover.png");
    Texture2D winscreen = LoadTexture("assets/winscreen.png");
    Texture2D winpa = LoadTexture("assets/winpa.png");
    Texture2D winpahover = LoadTexture("assets/winpahover.png");
    Texture2D correct = LoadTexture("assets/correct.png");
    Texture2D screen3 = LoadTexture("assets/screen3.png");
    Texture2D customscreen = LoadTexture("assets/customscreen.png");
    
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

    //screen 3
    Texture2D customback = LoadTexture("assets/customback.png");
    Texture2D custombackhover = LoadTexture("assets/custombackhover.png");
    Texture2D customsettingsbox = LoadTexture("assets/customsettings.png");
    Texture2D stminus = LoadTexture("assets/stminus.png");
    Texture2D stplus = LoadTexture("assets/stplus.png");
    Texture2D btminus = LoadTexture("assets/btminus.png");
    Texture2D btplus = LoadTexture("assets/btplus.png");
    Texture2D wsminus = LoadTexture("assets/wsmins.png");
    Texture2D wsplus = LoadTexture("assets/wsplus.png");
    Texture2D stminusho = LoadTexture("assets/stminusho.png");
    Texture2D stplusho = LoadTexture("assets/stplusho.png");
    Texture2D btminusho = LoadTexture("assets/btminusho.png");
    Texture2D btplusho = LoadTexture("assets/btplusho.png");
    Texture2D wsminusho = LoadTexture("assets/wsminusho.png");
    Texture2D wsplusho = LoadTexture("assets/wsplusho.png");
    Texture2D cstart = LoadTexture("assets/customstart.png");
    Texture2D cstarthover = LoadTexture("assets/customstarthover.png");

    // statistics page
    Texture2D stats = LoadTexture("assets/stats.png");
    Texture2D statshover = LoadTexture("assets/statshover.png");
    Texture2D statsbutton = LoadTexture("assets/statsbutton.png");
    Texture2D statsexit = LoadTexture("assets/statsexit.png");
    Texture2D statsexithover = LoadTexture("assets/statsexithover.png");

    //make images sharp.
    //screen1
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
    //screen2
    SetTextureFilter(screen2, TEXTURE_FILTER_POINT);
    SetTextureFilter(normalmode1, TEXTURE_FILTER_POINT);
    SetTextureFilter(normalmode1hover, TEXTURE_FILTER_POINT);
    SetTextureFilter(customMode1, TEXTURE_FILTER_POINT);
    SetTextureFilter(customMode1Hover, TEXTURE_FILTER_POINT);
    SetTextureFilter(backbutton, TEXTURE_FILTER_POINT);
    SetTextureFilter(backbuttonhover, TEXTURE_FILTER_POINT);
    //screen3
    SetTextureFilter(normalpage, TEXTURE_FILTER_POINT);
    SetTextureFilter(bomb, TEXTURE_FILTER_POINT);
    SetTextureFilter(ezmodebutton1, TEXTURE_FILTER_POINT);
    SetTextureFilter(ezmodebutton1hover, TEXTURE_FILTER_POINT);
    SetTextureFilter(ezmodebutton2, TEXTURE_FILTER_POINT);
    SetTextureFilter(ezmodebutton2hover, TEXTURE_FILTER_POINT);
    SetTextureFilter(ezmodebutton3, TEXTURE_FILTER_POINT);
    SetTextureFilter(ezmodebutton3hover, TEXTURE_FILTER_POINT);
    SetTextureFilter(displaybox, TEXTURE_FILTER_POINT);
    SetTextureFilter(boom, TEXTURE_FILTER_POINT);
    SetTextureFilter(boompa, TEXTURE_FILTER_POINT);
    SetTextureFilter(boompahover, TEXTURE_FILTER_POINT);
    SetTextureFilter(winscreen, TEXTURE_FILTER_POINT);
    SetTextureFilter(winpa, TEXTURE_FILTER_POINT);
    SetTextureFilter(winpahover, TEXTURE_FILTER_POINT);
    SetTextureFilter(correct, TEXTURE_FILTER_POINT);
    //customs creen
    SetTextureFilter(screen3, TEXTURE_FILTER_POINT);
    SetTextureFilter(customscreen, TEXTURE_FILTER_POINT);
    SetTextureFilter(customback, TEXTURE_FILTER_POINT);
    SetTextureFilter(custombackhover, TEXTURE_FILTER_POINT);
    SetTextureFilter(customsettingsbox, TEXTURE_FILTER_POINT);
    SetTextureFilter(stminus, TEXTURE_FILTER_POINT);
    SetTextureFilter(stplus, TEXTURE_FILTER_POINT);
    SetTextureFilter(btminus, TEXTURE_FILTER_POINT);
    SetTextureFilter(btplus, TEXTURE_FILTER_POINT);
    SetTextureFilter(wsminus, TEXTURE_FILTER_POINT);
    SetTextureFilter(wsplus, TEXTURE_FILTER_POINT);
    SetTextureFilter(stminusho, TEXTURE_FILTER_POINT);
    SetTextureFilter(stplusho, TEXTURE_FILTER_POINT);
    SetTextureFilter(btminusho, TEXTURE_FILTER_POINT);
    SetTextureFilter(btplusho, TEXTURE_FILTER_POINT);
    SetTextureFilter(wsminusho, TEXTURE_FILTER_POINT);
    SetTextureFilter(wsplusho, TEXTURE_FILTER_POINT);
    SetTextureFilter(cstart, TEXTURE_FILTER_POINT);
    SetTextureFilter(cstarthover, TEXTURE_FILTER_POINT);
    //statistics page
    SetTextureFilter(stats, TEXTURE_FILTER_POINT);
    SetTextureFilter(statsbutton, TEXTURE_FILTER_POINT);
    SetTextureFilter(statshover, TEXTURE_FILTER_POINT);
    SetTextureFilter(statsexit, TEXTURE_FILTER_POINT);
    SetTextureFilter(statsexithover, TEXTURE_FILTER_POINT);

    //sound/audio
    Sound clicksound = LoadSound("sound/clicksound.wav");
    Sound minusplus = LoadSound("sound/minusplus.wav");
    Sound screensound = LoadSound("sound/screen.wav");
    Sound back = LoadSound("sound/back.wav");
    Music lobbymusic = LoadMusicStream("sound/lobby.mp3");
    Sound explosion = LoadSound("sound/explosion.mp3");
    Sound winning = LoadSound("sound/winning.mp3");
    Sound correctsound = LoadSound("sound/correct.mp3");
    Sound bombtick = LoadSound("sound/bombtimer.wav");
    Sound countend = LoadSound("sound/countdownend.wav");
    Sound countdowntimer = LoadSound("sound/countdown.wav");
    Music winmusic = LoadMusicStream("sound/winningscreenmusic.mp3");
    Music losemusic = LoadMusicStream("sound/losingscreen.mp3");
    Music screen2music = LoadMusicStream("sound/screen2music.mp3");
    Music custommusic = LoadMusicStream("sound/customscreen.mp3");

    //settings
    Texture2D settingpage = LoadTexture("assets/settingspage.png");
    Texture2D settingbutton = LoadTexture("assets/settingsbutton.png");
    Texture2D settinghover = LoadTexture("assets/settingsbuttonhover.png");
    SetTextureFilter(settingpage, TEXTURE_FILTER_POINT);
    SetTextureFilter(settingbutton, TEXTURE_FILTER_POINT);
    SetTextureFilter(settinghover, TEXTURE_FILTER_POINT);
    Texture2D settingexit = LoadTexture("assets/settingexit.png");
    Texture2D settingexithover = LoadTexture("assets/settingexithover.png");
    SetTextureFilter(settingexit, TEXTURE_FILTER_POINT);
    SetTextureFilter(settingexithover, TEXTURE_FILTER_POINT);
    Texture2D musicOn = LoadTexture("assets/musicOn.png");
    Texture2D musicOff = LoadTexture("assets/musicOff.png");
    SetTextureFilter(musicOff, TEXTURE_FILTER_POINT);
    SetTextureFilter(musicOn, TEXTURE_FILTER_POINT);
    Texture2D audioOn = LoadTexture("assets/audiosetting.png");
    Texture2D audioOff = LoadTexture("assets/audiosettingoff.png");
    SetTextureFilter(audioOn, TEXTURE_FILTER_POINT);
    SetTextureFilter(audioOff, TEXTURE_FILTER_POINT);


    //guide screen bool
    bool guideScreen = false;

    //normal mode random logic
    int normaldisplays = 0;
    int correctans;
    int normalrand1 = GetRandomValue(1, 9);
    int normalrand2 = GetRandomValue(1, 9);
    int normalrand3 = GetRandomValue(1, 9);
    bool gameover = false;
    int score = 0;
    int answer = -1;
    int x;
    //coutdown
    bool countdownstart = false;
    float startTime;
    int countdown;
    //bomb coutdown
    bool gamestarted = false;
    float bombstartTime;
    int bombcountdown ;
    //screen 3
    int starttimespeed = 1;
    int bombtimespeed = 1;
    int winscore = 1;
    //screen 4
    int customrandom;
    //highscore
    int highscore = 0;
    //sound
    bool correctsoundplayed = false;
    float lastTickTime = 0;
    float countdownsound = 0;
    int audioOffOn = 0;
    bool music = true;
    bool audio = true;
    //streak
    int streak = 0;
    int beststreak = 0;
    bool streakCount = false;
    //stats
    bool statscreen = false;
    int totalgames = 0;
    int totalwins = 0;
    int totallosses = 0;
    int winpercent = 0;
    int totalcorrect = 0;

    //screen shake

    SetMusicVolume(lobbymusic, 0.4f);
    bool lobbymusicplaying = true;
    PlayMusicStream(lobbymusic);
    SetMusicVolume(screen2music, 0.4f);
    SetMusicVolume(custommusic, 0.4f);
    SetMusicVolume(winmusic, 0.06f);
    SetMusicVolume(losemusic, 0.06f);

    //settings
    bool setting = false;


    while(!WindowShouldClose()){
        //stats 
        if(totalgames > 0){
            winpercent = (totalwins * 100) / totalgames;
        }
        else{
            winpercent = 0;
        }
        
        UpdateMusicStream(custommusic);
        UpdateMusicStream(screen2music);
        UpdateMusicStream(lobbymusic);
        UpdateMusicStream(winmusic);
        UpdateMusicStream(losemusic);
        if((screen == 2 || screen == 4) && lobbymusicplaying){
            StopMusicStream(lobbymusic);
            lobbymusicplaying = false;
        }
        if((screen != 2 && screen != 4) && !lobbymusicplaying){
            SeekMusicStream(lobbymusic, 0.0f);
            PlayMusicStream(lobbymusic);
            lobbymusicplaying = true;
        }
        BeginDrawing();
        
        Vector2 cursor = GetMousePosition();

        bool settingsOn = false;

        // menu screen
        if(screen == 0){
            bool playhover = CheckCollisionPointRec(cursor, {141, 161, 228, 48});
            bool quithover = CheckCollisionPointRec(cursor, {141, 241, 228, 48});
            bool guidehover = CheckCollisionPointRec(cursor, {180, 320, 148, 44});
            bool guideExithover = CheckCollisionPointRec(cursor, {392, 92, 20, 20});
            bool statbool = CheckCollisionPointRec(cursor, {36, 40, 48, 24});
            bool statback = CheckCollisionPointRec(cursor, {415, 60, 28, 28});
            bool settingbool = CheckCollisionPointRec(cursor, {412, 340, 56, 32});
            bool settingback = CheckCollisionPointRec(cursor, {424, 64, 25, 25});
            bool musicset = CheckCollisionPointRec(cursor, {124, 128, 100, 40});
            bool audioset = CheckCollisionPointRec(cursor, {124, 188, 100, 40});


            //start of screen 0 code
            ClearBackground(RAYWHITE);
            
            DrawTexture(bground1, 0, 0, WHITE);
            if(playhover){
                DrawTexture(pButton1, 0, 0, WHITE);
                if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && !setting){
                    screen = 1;
                    PlaySound(screensound);
                }
            }
            else{
                DrawTexture(pButton1Hover, 0, 0, WHITE);
            }
            if(quithover){
                DrawTexture(qButton1, 0, 0, WHITE);
                if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && !setting){
                    PlaySound(clicksound);
                    CloseWindow();
                }
            }
            else{
                DrawTexture(qButton1Hover, 0, 0, WHITE);
            }
            if(guidehover){
                DrawTexture(guideButton1, 0, 0, WHITE);
                if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && !setting){
                    PlaySound(clicksound);
                    guideScreen = true;
                }
            }
            else{
                DrawTexture(guideButton1Hover, 0, 0, WHITE);
            }
            // audio
            if(music){
                SetMusicVolume(lobbymusic, 0.4f);
                SetMusicVolume(screen2music, 0.4f);
                SetMusicVolume(custommusic, 0.04f);
                SetMusicVolume(winmusic, 0.8f);
                SetMusicVolume(losemusic, 0.6f);
            }
            else if(!music){
                SetMusicVolume(lobbymusic, 0.0f);
                SetMusicVolume(screen2music, 0.0f);
                SetMusicPan(custommusic, 0.0f);
                SetMusicVolume(winmusic, 0.0f);
                SetMusicVolume(losemusic, 0.0f);
            }
            if(audio){
                SetSoundVolume(back, 0.4f);
                SetSoundVolume(bombtick, 0.4f);
                SetSoundVolume(clicksound, 0.5f);
                SetSoundVolume(correctsound, 0.5f);
                SetSoundVolume(countdowntimer, 0.5f);
                SetSoundVolume(countend, 0.5f);
                SetSoundVolume(explosion, 0.5f);
                SetSoundVolume(minusplus, 0.5f);
                SetSoundVolume(screensound, 0.5f);
                SetSoundVolume(winning, 0.5f);
            }
            else if(!audio){
                SetSoundVolume(back, 0.0f);
                SetSoundVolume(bombtick, 0.0f);
                SetSoundVolume(clicksound, 0.0f);
                SetSoundVolume(correctsound, 0.0f);
                SetSoundVolume(countdowntimer, 0.0f);
                SetSoundVolume(countend, 0.0f);
                SetSoundVolume(explosion, 0.0f);
                SetSoundVolume(minusplus, 0.0f);
                SetSoundVolume(screensound, 0.0f);
                SetSoundVolume(winning, 0.0f);
                music = false;
            }
            //settings
            if(settingbool){
                DrawText("Settings", 419, 351, 10, WHITE);
                DrawTexture(settinghover, 0, 0, WHITE);
                if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && !statscreen){
                    PlaySound(clicksound);
                    setting = true;
                }
            }
            else{
                DrawText("Settings", 419, 351, 10, WHITE);
                DrawTexture(settingbutton, 0, 0, WHITE);
            }
            //stats
            if(statbool){
                DrawText("STATS", 42, 48, 10, WHITE);
                DrawTexture(statshover, 0, 0, WHITE);
                if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT) && setting != true){
                    statscreen = true;
                    PlaySound(clicksound);
                }
            }
            else{
                DrawText("STATS", 42, 48, 10, WHITE);
                DrawTexture(statsbutton, 0, 0, WHITE);
            }
            if(statscreen == true && setting == false){
                DrawTexture(stats, 0, 0, WHITE);
                DrawText(TextFormat("Total Games: %i", totalgames), 50, 125, 25, WHITE);
                DrawText(TextFormat("Total Wins: %i", totalwins), 50, 175, 25, WHITE);
                DrawText(TextFormat("Total Losses: %i", totallosses), 50, 225, 25, WHITE);
                DrawText(TextFormat("Total Correct: %i", totalcorrect), 50, 275, 25, WHITE);
                DrawText(TextFormat("Winrate: %i%%", winpercent), 300, 125, 25, WHITE);
                DrawText(TextFormat("Streak: %i", streak), 300, 175, 25, WHITE);
                DrawText(TextFormat("/Highest: %i", beststreak), 300, 200, 25, WHITE);
                if(statback){
                    DrawTexture(statsexithover, 0, 0, WHITE);
                    if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                        PlaySound(clicksound);
                        statscreen = false;
                    }
                }
                else{
                    DrawTexture(statsexit, 0, 0, WHITE);
                }
            }
            //settings
            if(setting && !statscreen){
                DrawTexture(settingpage, 0, 0, WHITE);
                if(music){
                    DrawTexture(musicOn, 0, 0, WHITE);
                    if(musicset){
                        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                            music = false;
                        }
                    }
                }
                else if(!music){
                    DrawTexture(musicOff, 0, 0, WHITE);
                    if(musicset){
                        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                            music = true;
                        }
                    }
                }
                else{
                    DrawTexture(musicOn, 0, 0, WHITE);
                }
                if(audio){
                    DrawTexture(audioOn, 0, 0, WHITE);
                    if(audioset){
                        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                            audio = false;
                        }
                    }
                }
                else if(!audio){
                    DrawTexture(audioOff, 0, 0, WHITE);
                    if(audioset){
                        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                            audio = true;
                        }
                    }
                }

                if(settingback){
                    DrawTexture(settingexithover, 0, 0, WHITE);
                    if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                        PlaySound(clicksound);
                        setting = false;
                    }
                }
                else{
                    DrawTexture(settingexit, 0, 0, WHITE);
                }
                
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
                        PlaySound(clicksound);
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

            DrawText(TextFormat("STREAK: %i", streak), 15, 45, 15, GREEN);
            DrawText(TextFormat("HIGHEST: %i", beststreak), 15, 65, 15, RED);

            if(normalmodehover){
                DrawTexture(normalmode1hover, 0, 0, WHITE);
                if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                    PlaySound(screensound);
                    screen = 2;
                    streakCount = false;
                    PlayMusicStream(screen2music);
                    countdownstart = true;
                    startTime = GetTime();
                    countdownsound = GetTime() - 1;
                }
            }
            else{
                DrawTexture(normalmode1, 0, 0, WHITE);
            }
            if(customhover){
                DrawTexture(customMode1Hover, 0, 0, WHITE);
                if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                    PlaySound(screensound);
                    screen = 3;
                }
            }
            else{
                DrawTexture(customMode1, 0, 0, WHITE);
            }
            if(backhover){
                DrawTexture(backbuttonhover, 0, 0, WHITE);
                if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                    PlaySound(back);
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
            bool boompa1hover = CheckCollisionPointRec(cursor, {204, 236, 144, 16});
            bool winplay = CheckCollisionPointRec(cursor, {292, 120, 56, 24});
            bool winagain = CheckCollisionPointRec(cursor, {332, 148, 80, 24});

            // normal countdown

            if(countdownstart && !gamestarted){
                countdown = 4 - (GetTime() - startTime);
                if(countdown > 0 && GetTime() - countdownsound >= 1){
                    PlaySound(countdowntimer);
                    countdownsound = GetTime();
                }
                if(countdown <= 0){
                    countdown = 0;
                    PlaySound(countend);
                    gamestarted = true;
                    bombstartTime = GetTime();
                    lastTickTime = GetTime();
                }
            }
            if(gamestarted){
                bombcountdown = 5 - (GetTime() - bombstartTime);
                if(GetTime() - lastTickTime >= 1){
                    PlaySound(bombtick);
                    lastTickTime = GetTime();
                }
            }


            ClearBackground(RAYWHITE);

            DrawTexture(normalpage, 0, 0, WHITE);

            DrawTexture(bomb, 0, 0, WHITE);
            DrawTexture(displaybox, 0, 0, WHITE);

            //countdown
            if(countdownstart && countdown > 0){
                if(countdown == 3){
                    DrawText("3", 243, 68, 60, GREEN);
                }
                else if(countdown == 2){
                    DrawText("2", 243, 68, 60, GREEN);
                }
                else if(countdown == 1){
                    DrawText("1", 251, 68, 60, GREEN);
                }
            }
            else if(countdownstart && countdown <= 0){
                countdownstart = false;
            }

            // display random logic
            if(countdown == 0){
                //bomb timer
                if(bombcountdown == 3){
                    DrawText("3", 247, 180, 40, BLACK);
                }
                else if(bombcountdown == 2){
                    DrawText("2", 247, 180, 40, BLACK);
                }
                else if(bombcountdown == 1){
                    DrawText("1", 252, 180, 40, BLACK);
                }
                else if(gamestarted && bombcountdown <= 0){
                    if(answer != correctans){
                        streak = 0;
                        totalgames++;
                        totallosses++;
                        PlayMusicStream(losemusic);
                        PlaySound(explosion);
                        StopMusicStream(screen2music);
                        gameover = true;
                        gamestarted = false;
                    }
                    else{
                        score++;
                    }
                    if(score >= 3){
                        PlaySound(winning);
                        PlayMusicStream(winmusic);
                        StopMusicStream(screen2music);
                        gamestarted = false;
                        countdownstart = false;
                    }
                    else{
                    startTime = GetTime();
                    countdownstart = true;
                    gamestarted = false;
                    answer = -1;
                    correctsoundplayed = false;
                    }
                }
                
                if(normaldisplays == 0){
                    x = normalrand1;
                }
                else if(normaldisplays == 1){
                    x = normalrand2;
                }
                else if(normaldisplays == 2){
                    x = normalrand3;
                }

                if(score == 0){
                    normaldisplays = 0;
                }
                else if(score == 1){
                    normaldisplays = 1;
                }
                else if(score == 2){
                    normaldisplays = 2;
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
            }
            //choices logic
            if(choice1hover){
                DrawTexture(ezmodebutton1hover, 0, 0, WHITE);
                if(gamestarted){
                    if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                        PlaySound(clicksound);
                        answer = 0;
                    }
                }
            }
            else{
                DrawTexture(ezmodebutton1, 0, 0, WHITE);
            }
            if(choice2hover){
                DrawTexture(ezmodebutton2hover, 0, 0, WHITE);
                if(gamestarted){
                    if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                        PlaySound(clicksound);
                        answer = 1;
                    }
                }
            }
            else{
                DrawTexture(ezmodebutton2, 0, 0, WHITE);
            }
            if(choice3hover){
                DrawTexture(ezmodebutton3hover, 0, 0, WHITE);
                if(gamestarted){
                    if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                        PlaySound(clicksound);
                        answer = 2;
                    }
                }
            }
            else{
                DrawTexture(ezmodebutton3, 0, 0, WHITE);
            }


            // check answer
            if(gamestarted && answer != -1){
                if(correctans == answer){
                    if(!correctsoundplayed){
                        PlaySound(correctsound);
                        totalcorrect++;
                        correctsoundplayed = true;
                    }
                    DrawTexture(correct, 0, 0, WHITE);
                }
                else{
                    streak = 0;
                    totalgames++;
                    totallosses++;
                    PlayMusicStream(losemusic);
                    PlaySound(explosion);
                    StopMusicStream(screen2music);
                    gameover = true;
                    gamestarted = false;
                }
            }
            if(score >= 3 && !gameover){
                if(!streakCount){
                    streak++;
                    totalgames++;
                    totalwins++;
                    if(streak >= beststreak){
                        beststreak = streak;
                    }
                    streakCount = true;
                }
                DrawTexture(winscreen, 0, 0, WHITE);
                gamestarted = false;
                countdownstart = false;
                if(winplay || winagain){
                    DrawTexture(winpahover, 0, 0, WHITE);
                    if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                        StopMusicStream(screen2music);
                        StopMusicStream(losemusic);
                        StopMusicStream(winmusic);
                        PlaySound(clicksound);
                        screen = 1;

                        gameover = false;
                        gamestarted = false;
                        countdownstart = false;
                        answer = -1;
                        score = 0;
                        normaldisplays = 0;
                        countdown = 4;
                        bombcountdown = 4;
                        correctsoundplayed = false;

                        normalrand1 = GetRandomValue(1, 9);
                        normalrand2 = GetRandomValue(1, 9);
                        normalrand3 = GetRandomValue(1, 9);
                    }
                }
                else{
                    DrawTexture(winpa, 0, 0, WHITE);
                }

            }
            if(gameover){
                DrawTexture(boom, 0, 0, WHITE);
                gamestarted = false;
                countdownstart = false;
                if(boompa1hover){
                    DrawTexture(boompahover, 0, 0, WHITE);
                    if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                        StopMusicStream(screen2music);
                        StopMusicStream(losemusic);
                        StopMusicStream(winmusic);
                        PlaySound(clicksound);
                        screen = 1;
                        
                        gameover = false;
                        gamestarted = false;
                        countdownstart = false;
                        answer = -1;
                        score = 0;
                        normaldisplays = 0;

                        countdown = 4;
                        bombcountdown = 4;

                        normalrand1 = GetRandomValue(1, 9);
                        normalrand2 = GetRandomValue(1, 9);
                        normalrand3 = GetRandomValue(1, 9);

                    }
                }
                else{
                    DrawTexture(boompa, 0, 0, WHITE);
                }

            }
        }
        else if(screen == 3){
            //start of screen 3 code
            bool customback1hover = CheckCollisionPointRec(cursor, {424, 24, 60, 60});
            bool stminushover = CheckCollisionPointRec(cursor, {268, 128, 32, 8});
            bool stplushover = CheckCollisionPointRec(cursor, {312, 116, 32, 32});
            bool btminushover = CheckCollisionPointRec(cursor, {268, 204, 32, 8});
            bool btplushover = CheckCollisionPointRec(cursor, {312, 192, 32, 32});
            bool wsminushover = CheckCollisionPointRec(cursor, {268, 284, 32, 8});
            bool wsplushover = CheckCollisionPointRec(cursor, {312, 272, 32, 32});
            bool customstarthover = CheckCollisionPointRec(cursor, {248, 24, 168, 56});

            ClearBackground(RAYWHITE);
            DrawTexture(customscreen, 0, 0, WHITE);
            DrawTexture(customsettingsbox, 0, 0, WHITE);
            //custom start button
            if(customstarthover){
                DrawTexture(cstarthover, 0, 0, WHITE);
                if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                    PlayMusicStream(custommusic);
                    PlaySound(screensound);
                    screen = 4;
                    countdownstart = true;
                    gamestarted = false;
                    startTime = GetTime();
                    countdownsound = GetTime() -1;
                    score = 0;
                    answer = -1;
                    gameover = false;

                    customrandom = GetRandomValue(1, 9);

                }
            }
            else{
                DrawTexture(cstart, 0, 0, WHITE);
            }
            //start time minus and plus
            if(stminushover){
                DrawTexture(stminusho, 0, 0, WHITE);
                if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                    PlaySound(minusplus);
                    starttimespeed--;
                }
            }
            else{
                DrawTexture(stminus, 0, 0, WHITE);
            }
            if(stplushover){
                DrawTexture(stplusho, 0, 0, WHITE);
                if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                    PlaySound(minusplus);
                    starttimespeed++;
                }
            }
            else{
                DrawTexture(stplus, 0, 0, WHITE);
            }
            if(starttimespeed <= 1){
                starttimespeed = 1;
            }
            else if(starttimespeed >= 7){
                starttimespeed = 7;
            }
            //bomb time minus and plus
            if(btminushover){
                DrawTexture(btminusho, 0, 0, WHITE);
                if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                    PlaySound(minusplus);
                    bombtimespeed--;
                }
            }
            else{
                DrawTexture(btminus, 0, 0, WHITE);
            }
            if(btplushover){
                DrawTexture(btplusho, 0, 0, WHITE);
                if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                    PlaySound(minusplus);
                    bombtimespeed++;
                }
            }
            else{
                DrawTexture(btplus, 0, 0, WHITE);
            }
            if(bombtimespeed <= 1){
                bombtimespeed = 1;
            }
            else if(bombtimespeed >= 7){
                bombtimespeed = 7;
            }
            //winscore minus and plus
            if(wsminushover){
                DrawTexture(wsminusho, 0, 0, WHITE);
                if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                    PlaySound(minusplus);
                    winscore--;
                }
            }
            else{
                DrawTexture(wsminus, 0, 0, WHITE);
            }
            if(wsplushover){
                DrawTexture(wsplusho, 0, 0, WHITE);
                if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                    PlaySound(minusplus);
                    winscore++;
                }
            }
            else{
                DrawTexture(wsplus, 0, 0, WHITE);
            }
            if(winscore <= 3){
                winscore = 3;
            }
            else if(winscore >= 25){
                winscore = 25;
            }



            DrawText(TextFormat("Starting Timer: %i", starttimespeed), 34, 125, 20, BROWN);
            DrawText(TextFormat("Bomb Countdown: %i", bombtimespeed), 34, 201, 20, BROWN);
            DrawText(TextFormat("Winning Score: %i", winscore), 34, 280, 20, BROWN);

            // back button
            if(customback1hover){
                DrawTexture(custombackhover, 0, 0, WHITE);
                if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                    PlaySound(back);
                    screen = 1;
                }
            }
            else{
                DrawTexture(customback, 0, 0, WHITE);
            }



        }
        else if(screen == 4){

            bool choice1hover = CheckCollisionPointRec(cursor, {191, 284, 32, 32});
            bool choice2hover = CheckCollisionPointRec(cursor, {240, 284, 32, 32});
            bool choice3hover = CheckCollisionPointRec(cursor, {288, 284, 32, 32});
            bool boompa1hover = CheckCollisionPointRec(cursor, {204, 236, 244, 16});
            bool winplay = CheckCollisionPointRec(cursor, {292, 120, 56, 24});
            bool winagain = CheckCollisionPointRec(cursor, {332, 148, 80, 24});

            //start of screen 4 code
            ClearBackground(RAYWHITE);
            DrawTexture(screen3, 0, 0, WHITE);

            DrawTexture(bomb, 0, 0, WHITE);
            DrawTexture(displaybox, 0, 0, WHITE);

            //custom countdown
            if(countdownstart && !gamestarted){
                countdown = starttimespeed + 1 - (GetTime() - startTime);
                if(countdown > 0 && GetTime() - countdownsound >= 1){
                    PlaySound(countdowntimer);
                    countdownsound = GetTime();
                    countdownsound = GetTime();
                }
                if(countdown <= 0){
                    countdown = 0;
                    PlaySound(countend);
                    gamestarted = true;
                    bombstartTime = GetTime();
                    lastTickTime = GetTime();
                }
            }

            if(gamestarted){
                bombcountdown = bombtimespeed + 1 - (GetTime() - bombstartTime);
                if(GetTime() - lastTickTime >= 1.0){
                    PlaySound(bombtick);
                    lastTickTime = GetTime();
                }
            }

            if(score >= winscore){
                gamestarted = false;
                countdownstart = false;
            }

            if(countdownstart && countdown > 0){
                DrawText(TextFormat("%i", countdown), 242, 68, 60, GREEN);
            }

            if(gamestarted){
                //bomb timer
                if(bombcountdown > 0){
                    DrawText(TextFormat("%i", bombcountdown), 247, 180, 40, BLACK);
                }
                else if(bombcountdown <= 0){
                    gamestarted = false;
                    if(answer != correctans){
                        StopMusicStream(custommusic);
                        PlaySound(explosion);
                        PlayMusicStream(losemusic);
                        gameover = true;
                        countdownstart = false;
                    }
                    else{
                        score++;
                    }
                    if(score >= winscore){
                        PlaySound(winning);
                        StopMusicStream(custommusic);
                        PlayMusicStream(winmusic);
                        StopMusicStream(screen2music);
                        gamestarted = false;
                        countdownstart = false;
                    }
                    else{
                        startTime = GetTime();
                        countdownstart = true;
                        gamestarted = false;
                        answer = -1;
                        correctsoundplayed = false;
                        customrandom = GetRandomValue(1, 9);
                    }
                }
                
                x = customrandom;


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
            }
            if(choice1hover){
                DrawTexture(ezmodebutton1hover, 0, 0, WHITE);
                if(gamestarted && IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                    PlaySound(clicksound);
                    answer = 0;
                }
            }
            else{
                DrawTexture(ezmodebutton1, 0, 0, WHITE);
            }
            if(choice2hover){
                DrawTexture(ezmodebutton2hover, 0, 0, WHITE);
                if(gamestarted && IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                    PlaySound(clicksound);
                    answer = 1;
                }
            }
            else{
                DrawTexture(ezmodebutton2, 0, 0, WHITE);
            }
            if(choice3hover){
                DrawTexture(ezmodebutton3hover, 0, 0, WHITE);
                if(gamestarted && IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                    PlaySound(clicksound);
                    answer = 2;
                }
            }
            else{
                DrawTexture(ezmodebutton3, 0, 0, WHITE);
            }

            if(gamestarted && answer != -1){
                if(answer == correctans){
                    if(!correctsoundplayed){
                        totalcorrect++;
                        PlaySound(correctsound);
                        correctsoundplayed = true;
                    }
                    DrawTexture(correct, 0, 0, WHITE);
                }
                else{
                    PlayMusicStream(losemusic);
                    PlaySound(explosion);
                    StopMusicStream(custommusic);
                    StopMusicStream(screen2music);
                    gameover = true;
                    gamestarted = false;
                    countdownstart = false;
                }
            }

            if(gameover){
                DrawTexture(boom , 0, 0, WHITE);
                gamestarted = false;
                countdownstart = false;

                if(boompa1hover){
                    DrawTexture(boompahover, 0, 0, WHITE);
                    if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                        StopMusicStream(losemusic);
                        StopMusicStream(winmusic);
                        PlaySound(clicksound);
                        screen = 1;
                        score = 0;
                        answer = -1;
                        gameover = false;
                        gamestarted = false;
                        countdownstart = false;
                    }
                }
                else{
                    DrawTexture(boompa, 0, 0, WHITE);
                }

            }
            if(score >= winscore && !gameover){
                DrawTexture(winscreen, 0, 0, WHITE);
                gamestarted = false;
                countdownstart = false;

                if(winplay || winagain){
                    DrawTexture(winpahover, 0, 0, WHITE);
                    if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){
                        StopMusicStream(losemusic);
                        StopMusicStream(winmusic);
                        PlaySound(clicksound);
                        screen = 1;
                        score = 0;
                        answer = -1;
                        gameover = false;
                        gamestarted = false;
                        countdownstart = false;
                        correctsoundplayed = false;
                    }
                }
                else{
                    DrawTexture(winpa, 0, 0, WHITE);
                }
            }


            
        }
        EndDrawing();
    }
    UnloadMusicStream(custommusic);
    UnloadMusicStream(screen2music);
    UnloadMusicStream(winmusic);
    UnloadMusicStream(losemusic);
    UnloadMusicStream(lobbymusic);
    CloseAudioDevice();
    CloseWindow();
    return 0;
}