#pragma once

template <class T>
class MiVector2
{
public:
	T x;
	T y;

	MiVector2()
	{
		x = 0;
		y = 0;
	}
	MiVector2(T _x, T _y)
	{
		x = _x;
		y = _y;
	}


	T sqrMagnitude()
	{
		return x * x + y * y;
	}

};

