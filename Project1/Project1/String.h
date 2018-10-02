#ifndef _STRING_H_
#define _STRING_H_

#include <string.h>

using namespace std;

class String
{

private:
	char* str = nullptr;
	unsigned int mem_allocated;
	
	//Constructors
	String() {}; //default

	String(const char* string) 
	{
		if (string != nullptr)
		{
			mem_allocated = strlen(string) + 1;
			str = new char[mem_allocated];
			strncpy(str, string, mem_allocated);
		}
	}

	String(String &string) //copy
	{
		if (string.str != nullptr)
		{
			mem_allocated = string.mem_allocated;
			str = new char[mem_allocated];
			strncpy(str, string.str, mem_allocated);
		}
	}

	//Destructor
	~String() 
	{
		if (str != nullptr)
		{
			delete[] str;
		}
	}
public:
	//Modifiers

	bool empty()
	{
		return str != nullptr;
	}

	unsigned int length()
	{
		if (str != nullptr)
		{
			return strlen(str);
		}
	}

	void clear()
	{
		if (str != nullptr)
		{
			str[0] = '\0';
		}
	}

	String operator= (const String &string)
	{
		clear();

		if (string.length != 0)
		{
			if (this->mem_allocated >= string.mem_allocated)
			{
				this->mem_allocated = string.mem_allocated;
				this->str = new char[string.mem_allocated];
				strncpy(this->str, string.str, string.mem_allocated);
				return this->str;
			}
		}
	}
};

#endif !_STRING_H_
