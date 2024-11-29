#pragma once
#include <raylib.h>
struct buttons {
  Rectangle rec;
  float thick;
  float roundness;
  int segments;
  Color color;
  char text[50];
  int screen;
  buttons() = default;
};

struct backbuttons {
  Rectangle rec;
  float thick;
  float roundness;
  int segments;
  Color color;
  char text[50];
  int screen;
  backbuttons() = default;
};

extern int screen;
void DrawMenu(buttons *button, int len);
void MenuButtonCollision(buttons *button, Vector2 rec, int len);
