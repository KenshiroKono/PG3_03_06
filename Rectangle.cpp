#include "Rectangle.h"

void Rectangle::Size() {
	area = height * width ;
}

void Rectangle::Draw() {

		printf("\n‚‚³‚Í%dcmA•‚Í%dcm\n–ÊÏ‚Í%d•½•ûcm\n", height, width, area);
	}
