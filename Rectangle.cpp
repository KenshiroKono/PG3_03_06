#include "Rectangle.h"

void Rectangle::Size() {
	area = height * width ;
}

void Rectangle::Draw() {

		printf("\n高さは%dcm、幅は%dcm\n面積は%d平方cm\n", height, width, area);
	}
