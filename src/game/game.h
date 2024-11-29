#pragma once
#include "raylib.h"

struct Player {
  Vector2 player;
  Vector2 playerPos;
  int speed;
  bool canjump;
};

void renderPlayer(Player player);
void PlayerPhysics(Player player);
