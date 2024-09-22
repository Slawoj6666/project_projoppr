#include <raylib.h>
#include "menu/menu.h"



int main() {
	InitWindow(1080, 1000, "Projekt");
	Vector2 MousePoint = { 0.0f,0.0f };


	while (!WindowShouldClose()) {
		//update here
		
		MousePoint = GetMousePosition();



		//draw elements here
		BeginDrawing();
		ClearBackground(RAYWHITE);
		renderMenu(MenuButtons);
		Menucollision(MenuButtons, MousePoint);
		//end of drawing
		EndDrawing();
	}
	return 0;
}