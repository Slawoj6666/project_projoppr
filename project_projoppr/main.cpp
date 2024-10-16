#include "menu/menu.h"
#include <raylib.h>

int screen = 1;

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
      DrawRectangleRoundedLines({50, 50, 100, 100}, 1, 0.5, 1, {GRAY});
      DrawText("play", 30, 30, 2, {GOLD});

      DrawRectangleRoundedLines({50, 175, 100, 100}, 1, 0.5, 1, {GRAY});
      DrawText("autor", 30, 155, 2, {GOLD});

      DrawRectangleRoundedLines({50, 300, 100, 100}, 1, 0.5, 1, {GRAY});
      DrawText("quit", 30, 280, 2, {GOLD});
      break;
    case 2:
      // game here
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
