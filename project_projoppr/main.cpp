#include <raylib.h>
#include "menu/menu.h"
#include <iostream>

int screen = 1;

int main() {
	InitWindow(1080, 1000, "Projekt");
	Vector2 MousePoint = { 0.0f,0.0f };


	while (!WindowShouldClose()) {
		//update here
		
		std::cout << screen << std::endl;

		MousePoint = GetMousePosition();

		//draw elements here
		BeginDrawing();
		switch (screen)
		{
		case 1:
			
			renderMenu(MenuButtons);
			Menucollision(MenuButtons, MousePoint);
			std::cout << "1" << std::endl;
		break;
		}
		ClearBackground(RAYWHITE);
		EndDrawing();
	}
	return 0;
}