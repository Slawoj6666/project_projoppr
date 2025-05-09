#include "menu.h"
#include <raylib.h>
void DrawMenu(buttons *button, int len) {
  for (int i = 0; i < len; i++) {
    DrawRectangleRoundedLines(button[i].rec, button[i].roundness,
                              button[i].segments, button[i].color);
    Vector2 textspac = MeasureTextEx(GetFontDefault(), button[i].text, 2, 2);
    DrawText(
        button[i].text, button[i].rec.x + button[i].rec.width / 2 - textspac.x,
        button[i].rec.y + button[i].rec.height / 2 - textspac.y - 5, 2, {GOLD});
  }
};

void MenuButtonCollision(buttons *button, Vector2 rec, int len) {
  for (int i = 0; i < len; i++) {
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) &&
        CheckCollisionPointRec(rec, button[i].rec)) {
      screen = button[i].screen;
    }
  }
};
