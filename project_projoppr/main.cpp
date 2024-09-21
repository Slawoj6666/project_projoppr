#include <raylib.h>
#include "menu/menu.h"
buttons button[4] = {
	{350,150,100,100,1,0.7,1,{GRAY},"text1"},
	{250,150,100,100,1,0.7,1,{GRAY},"text2"},
	{150,150,100,100,1,0.7,1,{GRAY},"text3"},
	{50,150,100,100,1,0.7,1,{GRAY},"text4"},
};


int main() {
	InitWindow(1080, 1000, "test");

	while (!WindowShouldClose()) {
		//update here



		//draw elemnts here
		BeginDrawing();
		ClearBackground(RAYWHITE);
		renderMenu(button);

				
		//end of drawing
		EndDrawing();
	}
	return 0;
}