hour 1: 
- planned out the game on a notebook
- drew pixel art for menu, play button, quit button on a software called libresprite.
- learned how to use a library for 2d graphics called raylibs
- then I displayed the background, play and quit button; made it functional so it can
  close the window when quit and go to next screen when play.
- using Texture2d to load sprites and SetTextureFilter to make the sprites sharp
- also made button hover animations using a getmouseposition functio.
hour 2:
- made pixel art for guide button, guide page that explains the game, second screen for gamemodes,
  made normal mode mode button.
- made the guide button functional
- made the background a different color scheme so the game doesn't lookt he same and boring
- alot of time debugging and learning how to get inputs and mostly drawing.
hour 3:
- went on libresprite to draw custom/back button, screen, bomb, timer, display box on top.
- the custom button is so they can choose custom settings but I wont be making it functional
  til after I make normal mode functional
- added a back button so they can go back to homepage and quit the game if they want
- alot of repeats and displaying sprites, tried implementing time but failed.
hour 4:
- drew 3 choices for the bomb and 9 individual outcomes for the matches because there are
  3 colors and three shapes.
- displayed it into the game and when clicked, will return a value to check for correct answers,
  included random library to make randomized matching choices.
- alot of debugging for the correction logic, still debugging
hour 5:
- did more research, instead of installing random or time library, raylibs had their own functions which
  made it so much easier which was GetTime() and GetRandomValue(), timer was a bit tricky to understand
  but now it works.
- made the timer countdown and display the timer countdown in the display box.
- along of debugging because of loops and logic error
hour 6:
- ALOT of logic errors, couldnt get timer to restart because my code is in the wrong place or something.
- finally figured it out, messy code, removed the correct answers logic to make it more easier to read
  and check the code and debug
- figuring out how to make rounds and make timer continue after round ends, and after each round,
  displayed shape with color on top will be replaced with a new one
hour 7:
- Finally added the correct answers and normal mode almost complete, adding the lose logic.
- drew and created pixel art for the bomb explosion which I think looks amazing.
- if timer goes past without correct answers it explodes and if wrong button clicked, explodes.
- and right answer is clicked, a new display will come.
hour 8:
- finishing normal mode, finished lose and win logic, since the previous hour didn't fully get it right
  I had to do some debugging.
- made the winning screen for if the player wins after 3 rounds
- created pixel art for winning screen, play again and play again hover for both winning and losing
- made it so if play again is pressed, score is reset and everything is reset so you can play again the same.
hour 9/10:
- first hour after I made normal mode functional, started working on next mode (custom mode), so you can
  customize settings and play a game with those settings.
- created pixel art for settings screen and back button to go back if you want to play other modes or want
  to go back to main menu.
- created three variables and settings for custom settings starting time, bomb time, and winscore
- created pixel art for box around settings, and minus and plus signs for increasing or decreasing settings
- making displays not functional game for custom mode yet
server went down
- second hour: I made all the custom settings functional and you can finally use the buttons, also added a hover
  version for back button, and I also made a limit of how much or how little you can have your settings.
- game still not made yet, created a pixel art for start button and made it functional to a new screen
  with currently only bomb, display box, and currently working on custom mode timer.
hour 11:
- finished entire game basically
- reused sprites made for normal mode and put it into custom mode
- used almost the same codes but changed some numbers so it is using the custom settings.
- added winning losing screen after it reaches winning score and timers should be the same time you customize
- alot of replacing code with to custom settings inputs and
- going to add more things because I want to either reach 16 hours at least, goal is 22 to stack up on more coins and hopefully uggrade
  to diy framework by next week.
hour 12:
- was thinking about what else to add when I thought of sounds and background music.
- learned how to use sound functions and made sounds click, screen sound, back, lobbymusic, explosion.
- I initially put click into all button pressed, then changed moving on to next screens to use screens,
  back buttons use back music and a lobby music when the game opens but it stops when real game starts
  and come back when I play again.
- added explosion to when you lose it plays an explosion,
- after this I realized how important sound is, it made the game feel more alive.

