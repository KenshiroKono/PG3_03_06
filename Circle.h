#pragma once
#include "IShape.h"
class Circle :public IShape {
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
	float radius = 5;
	float area = 0;
};
