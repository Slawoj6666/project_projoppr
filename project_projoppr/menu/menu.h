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

	buttons() = default;
};

void renderMenu(buttons* button);

namespace{
	buttons MenuButtons[4] = {
	{350,350,100,100,1,0.7,1,{GRAY},"text"},
	{250,250,100,100,1,0.7,1,{GRAY},"text"},
	{150,150,100,100,1,0.7,1,{GRAY},"text"},
	{50 ,50 ,100,100,1,0.7,1,{GRAY},"text4"},
	};
}
