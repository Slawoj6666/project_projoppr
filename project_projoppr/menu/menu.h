#pragma once
#include <raylib.h>
#include <string.h>
typedef struct buttons
{
	Rectangle rec;
	float thick;
	float roundness;
	int segments;
	Color color;
	char text[50];
	int sn;
	buttons() = default;
};
extern int screen;


void renderMenu(buttons* button);
void Menucollision(buttons* button,Vector2 rec);

namespace{
	buttons MenuButtons[4] = {
	{350,350,100,100,1,0.7,1,{GRAY},"text1",2},
	{250,250,100,100,1,0.7,1,{GRAY},"text2",3},
	{150,150,100,100,1,0.7,1,{GRAY},"text3",4},
	{50 ,50 ,100,100,1,0.7,1,{GRAY},"text4",5},
	};
}
