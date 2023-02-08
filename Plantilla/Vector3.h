#pragma once
#include <iostream>
#include <sstream>

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

	Vector3(T _x, T _y, T _z) {
		x = _x;
		y = _y;
		z = _z;
	}

	T sqrMagnitude() {
		return x * x + y * y + z * z;
	}

	T suma(Vector3 <T> vec2) {
		//return  "(" << x + vec2.x << "," y + vec2.y "," + z + vec2.z << ")";
	}

	T dot(Vector3 <T> vec2) {
		return x * vec2.x + y * vec2.y + z * vec2.z;
	}

	T cruz(Vector3<T> vec2) {
		vec2 b;
		b.x = x * 2;
		b.y = y * 2;
		b.z = z * 2;
	}

	std::string ToString() {
		std::ostringstream ss;
		ss << "(" << x << "," << y << "," << z << ")";
		return ss.str();
	}
};


