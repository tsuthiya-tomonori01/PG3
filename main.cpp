#include <stdio.h>
#include "Template.h"

template<typename Type>

class Template {

public:
	Type a;
	Type b;

	Type Template(Type a, Type b) : a(a), b(b){};

	Type Min(Type a, Type b) {

		if (a < b)
		{
			return static_cast<Type>(a);
		} 
		else 
		{
			return static_cast<Type>(b);
		}
	}
};
int main()
{
	Template<int> a();
	Template<float> b();

	return 0;
}
