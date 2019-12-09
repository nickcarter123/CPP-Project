#include "stdafx.h"
#include <iostream>


using namespace std;

class RGBA
{
	int m_red;
	int m_green;
	int m_blue;
	int m_alpha;

public:

	RGBA(int red = 0, int green = 0, int blue = 0, int alpha = 255) : m_red(red), m_green(green), m_blue(blue), m_alpha(alpha)
	{

	}

	void print(){
		cout << "Value is " << m_red << ", " << m_green << ", " << m_blue << ", " << m_alpha << endl;
	}
};
int main()
{
	RGBA color(0, 2, 9);
	color.print();

	cin.clear();
	cin.ignore(32767, '\n');
	cin.get();
	return 0;
}
