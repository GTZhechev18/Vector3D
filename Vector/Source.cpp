#include"header.h"
#include <iostream>
using namespace std;

Vector3D::Vector3D(float a, float b, float c)
{
	x = a;
	y = b;
	z = c;
}

Vector3D::~Vector3D()
{ 
	cout << "Vector shut down";
}

Vector3D::Vector3D(const Vector3D& v)
{
	x = v.x;
	y = v.y;
	z = v.z;
}

Vector3D Vector3D::operator+(const Vector3D& v) const
{
	Vector3D rs(x + v.x, y + v.y, z + v.z);
	return rs;
}

Vector3D Vector3D::operator-(const Vector3D& v) const
{
	Vector3D rs(x - v.x, y - v.y, z - v.z);
	return rs;
}

Vector3D Vector3D::operator+=(const Vector3D& v) 
{
	x += v.x;
	y += v.y;
	z += v.z;
	return *this;
}

Vector3D Vector3D::operator-=(const Vector3D& v)
{
	x -= v.x;
	y -= v.y;
	z -= v.z;
	return *this;
}

Vector3D Vector3D::operator*=(const float v)
{
	x *= v;
	y *= v;
	z *= v;
	return *this;
}

float Vector3D::operator*(const Vector3D& v) const
{
	return x * v.x + y * v.y + z * v.z;
}

Vector3D Vector3D::operator*(const float v) const
{
	return Vector3D(x*v,y*v,z*v);
}

Vector3D Vector3D::operator/(const float v) const
{
	return Vector3D(x/v,y/v,z/v);
}

Vector3D Vector3D::operator/=(const float v)
{
	x /= v;
	y /= v;
	z /= v;
	return *this;
}

float Vector3D::dot(const Vector3D& v) const
{
	return x * v.x + y * v.y + z * v.z;
}

Vector3D Vector3D::cross(const Vector3D& v) const
{
	return Vector3D(y * v.z - z * v.y,
		z * v.x - x * v.z,
		x * v.y - y * v.x);
}

void Vector3D::operator%=(const Vector3D& v)
{
	*this = cross(v);
}

Vector3D Vector3D::operator%(const Vector3D& v) const
{
	return Vector3D(y * v.z - z * v.y,
		z * v.x - x * v.z,
		x * v.y - y * v.x);
}

float Vector3D::magnitude()
{
	float magnitude = sqrt(x * x + y * y + z * z);

	return magnitude;
}

void Vector3D::normalize()
{
	float mag = sqrt(x * x + y * y + z * z);

	if (mag > 0.0f) {

		float oneOverMag = 1.0f / mag;

		x = x * oneOverMag;
		y = y * oneOverMag;
		z = z * oneOverMag;
	}
}
