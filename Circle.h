#pragma once
#include "IShape.h"
class Circle :public IShape {
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
	float radius = 5;
	float area = 0;
};
