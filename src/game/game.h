
#include "raylib.h"

struct Player {
  Vector2 Player;
  Vector2 Playerpos;
  float speed;
  bool canjump;
};

struct EnvItem {
  Rectangle rec;
};

void renderPlayer(Player player);
void PlayerPhysics(Player *player, EnvItem *envitem, float delta, int len);
