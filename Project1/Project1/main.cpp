#include <iostream>
#include "vec3.h"

int main()
{
	cout << "First vector is" << endl;
	vec3<int> v1 (1, 2, 3);
	v1.print;
	cout << "First vector is" << endl;
	vec3<int> v2(v1);
	v2.operator+(2);
	v2.print;

}

