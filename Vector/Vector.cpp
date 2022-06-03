#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    Vector3D v1(1, 2, 3), v2(4, 5, 6);
    Vector3D v3 = v1 + v2;
    v1 += v2;
    v3 = v1 - v2;
    v2 -= v1;
    v3 = v1 * v2;
    v2 *= 5;
    v3 = v1 * 10;
    v2 /= 7;
    v3 = v1 / 4;
    cout << v1.dot(v2);
    v3 = v1.cross(v2);
    v2 %= v1;
    v2 = v1 % v3;
    cout << v2.magnitude();
    v1.normalize();
}

