#include "Circle.h"

void Circle::Size() {
	area = radius * radius * 3.14;
}

void Circle::Draw() {

	printf("\n�~�̔��a��%0.2fcm\n�ʐς�%0.2f����cm\n", radius, area);
}
