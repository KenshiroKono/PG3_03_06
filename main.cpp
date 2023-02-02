#include "Circle.h"
#include "Rectangle.h"

int main() {
	Circle* circle = new Circle;
	Rectangle* rectangle = new Rectangle;

	circle->Size();
	circle->Draw();

	rectangle->Size();
	rectangle->Draw();


	delete circle,rectangle;

	return 0;
}