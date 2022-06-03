#pragma once
class Vector3D
{
	private:
		float x,y,z;
		
	public:
		Vector3D(float = 0, float = 0, float = 0);
		~Vector3D();
		Vector3D(const Vector3D& v);

		Vector3D operator+(const Vector3D& v)const;
		Vector3D operator-(const Vector3D& v)const;
		Vector3D operator+=(const Vector3D& v);
		Vector3D operator-=(const Vector3D& v);
		Vector3D operator*=(const float v);
		float operator*(const Vector3D& v)const;
		Vector3D operator*(const float v)const;
		Vector3D operator/(const float v)const;
		Vector3D operator/=(const float v);
		float dot(const Vector3D& v)const;
		Vector3D cross(const Vector3D& v) const;
		void operator %=(const Vector3D& v);
		Vector3D operator %(const Vector3D& v) const;
		float magnitude();
		void normalize();
};