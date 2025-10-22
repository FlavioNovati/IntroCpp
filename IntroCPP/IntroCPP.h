//Garantisce che questo file sia incluso solo una volta
#pragma once

class Rectangle
{
public:
	Rectangle(int width, int height)
	{
		Width = width;
		Height = height;
	}

	int GetArea() const;

private:
	int Width = 0;
	int Height = 0;
};