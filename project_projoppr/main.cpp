#include <raylib.h>

int main() {
	InitWindow(1920, 1080, "test");
	Image img = LoadImage("data/Image.png");
	Texture2D tex = LoadTextureFromImage(img);
	while (!WindowShouldClose()) {
		//update here
		



		//draw elemnts here
		BeginDrawing();
		ClearBackground(RAYWHITE);
		DrawTexture(tex,0,0,RAYWHITE);
		DrawText("test",10,50,100,LIGHTGRAY);

		//end of drawing
		EndDrawing();
	}
	return 0;
}