#include "game.h"
#include "raylib.h"

void renderPlayer(Player player) {
  DrawRectangle(player.playerPos.x, player.playerPos.y, player.player.x,
                player.player.x, {BLACK});
}

void PlayerPhysics(Player player) {}
