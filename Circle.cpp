#include "Circle.h"

void Circle::Size() {
	area = radius * radius * 3.14;
}

void Circle::Draw() {

	printf("\n‰~‚Ì”¼Œa‚Í%0.2fcm\n–ÊÏ‚Í%0.2f•½•ûcm\n", radius, area);
}
