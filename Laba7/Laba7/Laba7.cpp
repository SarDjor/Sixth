// Laba7.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "Template.h"
using namespace std;


template<typename X>
X min(Vector<X> buf){
	if (buf.Xc > buf.Yc)
		return (buf.Xc);
	else return (buf.Yc);
}


int _tmain(int argc, _TCHAR* argv[])
{
	
	Vector<double> v1(2, 2);
	Vector<int> v2(-6, -5);
	cout << min(v2);
	return 0;
}





