#pragma once

template <class T>

class Vector3
{
public:
	T x;
	T y;
	T z;

	Vector3()
	{
		x = 0;
		y = 0;
		z = 0;
	}
	Vector3(T _x, T _y, T _z, )
	{
		x = _x;
		y = _y;
		z = _z;
	}

	//retorna la longitud del vetor sin sacar raiz cuadrada
	T sqrMagnitude() {
		return x * x + y * y + z * z;
	}

	T suma() {
		return (x, y, z) + (x, y, z);
	}

	T punto() {
		return x * x + y * y + z * z;
	}

	T cruz() {
		return ((y * z) - (z * y)) - ((x * z) - (z * x)) - ((y * z) - (z * y));
	}
};


