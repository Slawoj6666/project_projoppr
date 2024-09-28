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
	int screen;
	buttons() = default;
};

typedef struct backbuttons 
{
	Rectangle rec;
	float thick;
	float roundness;
	int segments;
	Color color;
	char text[50];
	int screen;
	backbuttons() = default;

};

extern int screen;
void renderMenu(buttons * button);
void Menucollision(buttons* button,Vector2 rec);

