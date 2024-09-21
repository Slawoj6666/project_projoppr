#pragma once
#include <raylib.h>

typedef struct buttons
{
	Rectangle rec;
	float thick;
	float roundness;
	int segments;
	Color color;
	char text[50];

	buttons() = default;
};

void renderMenu(buttons* button);


