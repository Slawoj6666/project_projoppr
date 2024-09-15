#include <raylib.h>

int main() {
	InitWindow(450, 450, "test");
	while (!WindowShouldClose()) {
		//update here




		//draw elemnts here
		BeginDrawing();

		ClearBackground(RAYWHITE);
		DrawText("test",10,50,100,LIGHTGRAY);

		//end of drawing
		EndDrawing();
	}
	return 0;
}