#pragma once

#ifndef _VEC_H_
#define _VEC_H_

using namespace std;

template <class temp>

class vec3
{
private:
	temp x, y, z;

public:
	//Constructors
	vec3() {} //has to be here if we add constructors (is automatic if there's any constructor)

	vec3(temp& x, temp& y, temp& z);

	vec3(const vec3& param);

	//Destructor
	~vec3() {}
	
	//Modifiers
	void setx(temp x);
	void sety(temp y);
	void setz(temp z);
	
	//Query
	temp getx();
	temp gety();
	temp getz();
	
	//Printer
	void print();

	//OPERATORS
	bool operator == (const vec3& other)const;
	bool operator != (const vec3& other)const;

	const vec3<temp>operator +(const vec3& other)const;
	const vec3<temp>operator +(const temp& val)const;
	const vec3<temp>operator -(const vec3& other)const;
	const vec3<temp>operator -(const temp& val)const;
	const vec3<temp>operator +=(const vec3& other)const;
	const vec3<temp>operator +=(const temp& val)const;
	const vec3<temp>operator -=(const vec3& other)const;
	const vec3<temp>operator -=(const temp& val)const;
	
	void operator ++ ();
	void operator -- ();

	//METHODS
	temp normalize(temp& x, temp& y, temp& z);
	vec3 <temp> zero();
	bool is_zero();
	temp distance_to(const vec3& other);

};

#endif !_VEC3_H_

