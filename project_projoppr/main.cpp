#include <raylib.h>
int main() {
	InitWindow(450, 450, "test");
	while (!WindowShouldClose()) {


		BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawText("test",10,50,100,LIGHTGRAY);
		EndDrawing();
	}
	return 0;
}