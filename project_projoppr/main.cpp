#include <raylib.h>
#include "menu/menu.h"

int main() {
	InitWindow(1080, 1000, "Projekt");

	while (!WindowShouldClose()) {
		//update here
		//draw elemnts here
		BeginDrawing();
		ClearBackground(RAYWHITE);
		renderMenu(MenuButtons);
		//end of drawing
		EndDrawing();
	}
	return 0;
}