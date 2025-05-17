
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

void renderPlayer(Texture2D player, Player Playerpos);
void PlayerPhysics(Player *player, EnvItem *envitem, float delta, int len,
                   Texture2D platex, Texture2D startex, Sound jump,
                   Sound landing);
