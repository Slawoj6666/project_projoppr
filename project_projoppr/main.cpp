#include "CLucene.h"
#include "menu/menu.h"
#include <raylib.h>

int screen = 1;

buttons MenuButtons[4] = {
    {50, 050, 100, 100, 1, 0.5, 1, {GRAY}, "play", 2},
    {50, 175, 100, 100, 1, 0.5, 1, {GRAY}, "author", 3},
    {50, 300, 100, 100, 1, 0.5, 1, {GRAY}, "quit", 4},
};

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
      renderMenu(MenuButtons);
      Menucollision(MenuButtons, MousePoint);
      break;
    case 2:

      break;
    case 3:

      break;
    case 4:
      CloseWindow();
      break;
    }
    ClearBackground(RAYWHITE);
    EndDrawing();
  }
  return 0;
}
