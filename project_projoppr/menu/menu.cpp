#include "menu.h"

void renderMenu(buttons* button){

	for (int i = 0; i < sizeof(button); i++)
	{
		DrawRectangleRoundedLines(button[i].rec, button[i].roundness, button[i].segments, button[i].thick, button[i].color);
		DrawText(button[i].text, button[i].rec.x+button[i].rec.width/2-11, button[i].rec.y+button[i].rec.width/2-9, 1, {GOLD});
	}
};




