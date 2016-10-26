#pragma once
template<typename X>
class Vector final {
private:
	
	X length;
	static unsigned short int k;
public:
	Vector(X, X);
	Vector(){};
	~Vector();

	void setX(X);
	void setY(X);
	void show();

	X Xc;
	X Yc;

	friend Vector<X> operator + (const Vector<X> &one, const Vector<X> &two);
	friend bool operator > (const Vector<X> &one, const Vector<X> &two);
	friend bool operator == (const Vector<X> &one, const Vector<X> &two);
	Vector<X> operator () (int num);
};

template<typename X>
unsigned short int Vector<X>::k = 0;


template<typename X>
Vector<X>::Vector(X x, X y) : Xc(x), Yc(y){
	length = sqrt(pow(x, 2) + pow(y, 2));
	k++;
}

//template<typename X>
//Vector<X>::Vector() : Vector<X>(NULL, NULL){}

template<typename X>
Vector<X>::~Vector(){
	k--;
}
//----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------


//METHODS OF VECTOR
template<typename X>
void Vector<X>::setX(X x){
	Xc = x;
}

template<typename X>
void Vector<X>::setY(X y){
	Yc = y;
}

template<typename X>
void Vector<X>::show(){
	std::cout << "(" << Xc << "," << Yc << ")" << std::endl;
}
//-----------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------




//OVERFLOW
template<typename X>
Vector<X> operator + (const Vector<X> &one, const Vector<X> &two){
	return Vector<X>(one.Xc + two.Xc, one.Yc + two.Yc);
}

template<typename X>
bool operator > (const Vector<X> &one, const Vector<X> &two){
	return one.length > two.length;
}

template<typename X>
bool operator == (const Vector<X> &one, const Vector<X> &two){
	return one.length == two.length;
}

template<typename X>
Vector<X> Vector<X>::operator () (int num){
	return *Mass[num];
}

