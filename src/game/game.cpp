#include "game.h"
#include "raylib.h"
#include <cstdio>

#define G 400
#define PLAYER_JUMP_SPD 500.0f
#define PLAYER_HOR_SPD 200.0f

void renderPlayer(Player player) {
  DrawRectangle(player.Playerpos.x, player.Playerpos.y, player.Player.x,
                player.Player.y, {BLACK});
}

void PlayerPhysics(Player *player, EnvItem *envitem, float delta, int len) {
  bool hitobsticle = false;

  if (IsKeyDown(KEY_LEFT)) {
    player->Playerpos.x -= PLAYER_HOR_SPD * delta;
  }
  if (IsKeyDown(KEY_RIGHT)) {
    player->Playerpos.x += PLAYER_HOR_SPD * delta;
  }
  if (IsKeyDown(KEY_SPACE) && player->canjump == true) {
    player->speed = -PLAYER_JUMP_SPD;
  }
  for (int i = 0; i < len; i++) {
    DrawRectangleRec(envitem[i].rec, {BLACK});
  }
  for (int i = 0; i < len; i++) {

    if (envitem[i].rec.x - 50 <= player->Playerpos.x &&
        envitem[i].rec.x + envitem[i].rec.width >= player->Playerpos.x &&
        envitem[i].rec.y - 50 >= player->Playerpos.y &&
        envitem[i].rec.y - 50 <= player->Playerpos.y + player->speed * delta) {
      hitobsticle = true;
      player->speed = 0.0f;
      player->Playerpos.y = envitem[i].rec.y - 50;
      break;
    }
  }
  if (!hitobsticle) {
    player->Playerpos.y += player->speed * delta;
    player->speed += G * delta;
    player->canjump = false;
  } else {
    player->canjump = true;
  }
};
