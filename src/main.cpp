#include "game/game.h"
#include "menu/menu.h"
#include <cstdio>
#include <raylib.h>
int screen = 1;

buttons MenuButtons[3] = {{50, 050, 100, 100, 1, 0.5, 1, {GRAY}, "play", 2},
                          {50, 175, 100, 100, 1, 0.5, 1, {GRAY}, "author", 3},
                          {50, 300, 100, 100, 1, 0.5, 1, {GRAY}, "quit", 4}};

Player player = {50, 50, 150, 700, 0, true};
EnvItem envitems[5] = {{
                           0,
                           750,
                           800,
                           50,
                       },
                       {000, 500, 100, 20},
                       {500, 500, 100, 20},
                       {200, 300, 100, 20},
                       {400, 300, 100, 20}};

int main() {
  InitWindow(600, 800, "Projekt");
  Vector2 MousePoint = {0.0f, 0.0f};

  SetTargetFPS(60);
  while (!WindowShouldClose()) {
    // update here
    MousePoint = GetMousePosition();
    float deltatime = GetFrameTime();
    // draw elements here
    BeginDrawing();
    switch (screen) {
    case 1:
      DrawMenu(MenuButtons, 3);
      MenuButtonCollision(MenuButtons, MousePoint, 3);
      break;
    case 2:
      // game here
      PlayerPhysics(&player, envitems, deltatime, 5);
      renderPlayer(player);
      break;
    case 3:
      // author
      DrawText("autor Slawomir Pawlus 2bp",
               390 - MeasureText("autor Slawomir Pawlus 2bp", 16), 50, 16,
               {GRAY});
      break;
    case 4:
      // quit
      CloseWindow();
      break;
    }
    ClearBackground(RAYWHITE);
    EndDrawing();
  }
  return 0;
}