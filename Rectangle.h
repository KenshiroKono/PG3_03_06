#pragma once
#include "IShape.h"
class Rectangle :public IShape {
public:
	/// <summary>
	/// �ʐς����߂�
	/// </summary>
	void Size()override;
	/// <summary>
	/// �`�悷��
	/// </summary>
	void Draw()override;

private:
	int height = 8;
	int width = 12;
	int area = 0;

};

