#pragma once

#ifndef _VEC3_H_
#define _VEC3_H_

using namespace std;

template <class temp>

class vec3
{
private:
	temp x, y, z;

public:
	//Constructors
	vec3() {} //has to be here if we add constructors (is automatic if there's any constructor)

	vec3(temp& x, temp& y, temp& z) : x(x), y(y), z(z) {}


	vec3(const vec3& param) 
	{
		this->x = param.x;
		this->y = param.y;
		this->z = param.z;
	}
	//Destructor
	~vec3() {}
	
	//Modifiers
	void setx(temp x) 
	{
		this->x = x;
	}
	void sety(temp y)
	{
		this->y = y;
	}
	void setz(temp z) 
	{
		this->z = z;
	}
	
	//Query
	temp getx()
	{
		return x;
	}
	temp gety() 
	{
		return y;
	}
	temp getz() 
	{
		return z;
	}

	
	//Printer
	void print() 
	{
		cout << x << "" << y << "" << z << endl;
	}

	//OPERATORS
	bool operator == (const vec3& other)const 
	{
		return this->x == other.x && this->y == other.y && this->z == other.z;
	}
	bool operator != (const vec3& other)const
	{
		return this->x != other.x || this->y != other.y || this->z != other.z;
	}


	const vec3<temp>operator +(const vec3& other)const
	{
		return vec3<temp>(x + other.x, y + other.y, z + other.z);
	}

	const vec3<temp>operator +(const temp& val)const 
	{
		return vec3<temp>(x + val, y + val, z + val);
	}
	const vec3<temp>operator -(const vec3& other)const 
	{
		return vec3<temp>(x - other.x, y - other.y, z - other.z);
	}
	const vec3<temp>operator -(const temp& val)const
	{
		return vec3<temp>(x - val, y - val, z - val);
	}
	const vec3<temp>operator +=(const vec3& other)const
	{
		return vec3<temp>(x += other.x, y += other.y, z += other.z);
	}

	const vec3<temp>operator +=(const temp& val)const 
	{
		return vec3<temp>(x += val, y += val, z += val);
	}

	const vec3<temp>operator -=(const vec3& other)const
	{
		return vec3<temp>(x -= other.x, y -= other.y, z -= other.z);
	}

	const vec3<temp>operator -=(const temp& val)const
	{
		return vec3<temp>(x -= val, y -= val, z -= val);
	}

	//METHODS
	temp normalize(temp& x, temp& y, temp& z) 
	{
		temp modul = sqrtf<temp>(x ^ 2, y ^ 2, z ^ 2);

		return vec3<temp>(x / modul, y / modul, z / modul);
	}

	vec3 <temp> zero() 
	{
		return vec3<temp>(x = 0, y = 0, z = 0);
	}

	bool is_zero() 
	{
		return this->x == 0 && this->y == 0 && this->z == 0;
	}

	temp distance_to(const vec3& other) 
	{
		temp distance = sqrtf<temp>((other.x - this->x) ^ 2 + (other.y - this->y) ^ 2 + (other.z - this->z));
		return distance;
	}


};

#endif !_VEC3_H_

