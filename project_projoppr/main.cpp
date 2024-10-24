#include "game/game.h"
#include "menu/menu.h"
#include <raylib.h>

int screen = 1;

buttons MenuButtons[3] = {{50, 050, 100, 100, 1, 0.5, 1, {GRAY}, "play", 2},
                          {50, 175, 100, 100, 1, 0.5, 1, {GRAY}, "author", 3},
                          {50, 300, 100, 100, 1, 0.5, 1, {GRAY}, "quit", 4}};

Player player = {100, 200, 100, 200, 0, true};
int main() {
  InitWindow(600, 800, "Projekt");
  Vector2 MousePoint = {0.0f, 0.0f};

  while (!WindowShouldClose()) {
    // update here
    MousePoint = GetMousePosition();

    // draw elements here
    BeginDrawing();
    switch (screen) {
    case 1:
      DrawMenu(MenuButtons);
      MenuButtonCollision(MenuButtons, MousePoint);
      break;
    case 2:
      // game here
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
