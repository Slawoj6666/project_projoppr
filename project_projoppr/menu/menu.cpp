#include "menu.h"
// Funkcja rysuje przyciski z podanego structa buttons
// Nie podawać pointera ponieważ wtedy Funkcja nie działa
void DrawMenu(buttons *button) {

  for (int i = 0; i < sizeof(button); i++) {
    DrawRectangleRoundedLines(button[i].rec, button[i].roundness,
                              button[i].segments, button[i].thick,
                              button[i].color);

    Vector2 textspac = MeasureTextEx(GetFontDefault(), button[i].text, 1, 1);

    DrawText(button[i].text,
             button[i].rec.x + button[i].rec.width / 2 - textspac.x - 6,
             button[i].rec.y + button[i].rec.width / 2 - textspac.y - 5, 2,
             {GOLD});
  }
};

// Funkcja sprawdza czy uzytkownik nacisnal przyciski pryjmuje struct buttons i
// Vector2 MousePoint
void MenuButtonCollison(buttons *button, Vector2 rec) {
  for (int i = 0; i < sizeof(button); i++) {
    if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT) &&
        CheckCollisionPointRec(rec, button[i].rec)) {
      screen = button[i].screen;
    }
  }
};
