#include <iostream>
#include "vec3.h"

using namespace std;

template <class temp>
vec3<temp>::vec3(temp x, temp y, temp z) : x(x), y(y), z(z) {}

template <class temp>
vec3<temp>::vec3(const vec3& param)
{
	this->x = param.x;
	this->y = param.y;
	this->z = param.z;
}

template<class temp>
void vec3<temp>::setx(temp x)
{
	this->x = x;
}

template<class temp>
void vec3<temp>::sety(temp y)
{
	this->y = y;
}

template<class temp>
void vec3<temp>::setz(temp z)
{
	this->z = z;
}

template<class temp>
temp vec3<temp>::getx()
{
	return x;
}

template<class temp>
temp vec3<temp>::gety()
{
	return y;
}

template<class temp>
temp vec3<temp>::getz()
{
	return z;
}

template<class temp>
void vec3<temp>::print()
{
	cout << x << "" << y << "" << z << endl;
}

template<class temp>
bool vec3<temp>::operator==(const vec3 & other) const
{
	return this->x == other.x && this->y == other.y && this->z == other.z;
}

template<class temp>
bool vec3<temp>::operator!=(const vec3 & other) const
{
	return this->x != other.x || this->y != other.y || this->z != other.z;
}

template<class temp>
const vec3<temp> vec3<temp>::operator+(const vec3 & other)
{
	return vec3<temp>(x + other.x, y + other.y, z + other.z);
}

template<class temp>
const vec3<temp> vec3<temp>::operator+(const temp val)
{
	return vec3<temp>(x + val, y + val, z + val);
}

template<class temp>
const vec3<temp> vec3<temp>::operator-(const vec3 & other)
{
	return vec3<temp>(x - other.x, y - other.y, z - other.z);
}

template<class temp>
const vec3<temp> vec3<temp>::operator-(const temp val)
{
	return vec3<temp>(x - val, y - val, z - val);
}

template<class temp>
const vec3<temp> vec3<temp>::operator+=(const vec3 & other)
{
	return vec3<temp>(x += other.x, y += other.y, z += other.z);
}

template<class temp>
const vec3<temp> vec3<temp>::operator+=(const temp val)
{
	return vec3<temp>(x += val, y += val, z += val);
}

template<class temp>
const vec3<temp> vec3<temp>::operator-=(const vec3 & other)
{
	return vec3<temp>(x -= other.x, y -= other.y, z -= other.z);
}

template<class temp>
const vec3<temp> vec3<temp>::operator-=(const temp val)
{
	return vec3<temp>(x -= val, y -= val, z -= val);
}

template<class temp>
void vec3<temp>::operator++()
{
	this->x = x++;
	this->y = y++;
	this->z = z++;
}

template<class temp>
void vec3<temp>::operator--()
{
	this->x = x--;
	this->y = z--;
	this->z = y--;
}

template<class temp>
temp vec3<temp>::normalize(temp x, temp y, temp z)
{
	temp modul = sqrt(x ^ 2, y ^ 2, z ^ 2);

	return vec3<temp>(x/modul, y/modul, z/modul);
}

template<class temp>
vec3<temp> vec3<temp>::zero()
{
	return vec3<temp>(x=0,y=0,z=0);
}

template<class temp>
bool vec3<temp>::is_zero()
{
	return this->x == 0 && this->y == 0 && this->z == 0;
}

template<class temp>
temp vec3<temp>::distance_to(const vec3 & other)
{
	temp distance = sqrt((other.x - this->x) ^ 2 + (other.y - this->y) ^ 2 + (other.z - this->z));
	return distance;
}
