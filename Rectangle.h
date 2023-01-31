#pragma once
#include "IShape.h"
class Rectangle :public IShape {
public:
	/// <summary>
	/// –ÊÏ‚ğ‹‚ß‚é
	/// </summary>
	void Size()override;
	/// <summary>
	/// •`‰æ‚·‚é
	/// </summary>
	void Draw()override;

private:
	int height = 8;
	int width = 12;
	int area = 0;

};

