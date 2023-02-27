#include <iostream>
#include <cmath>

template<class ofType> class Complex {
private:
    ofType Real;
    ofType Imaginary;
public:
    Complex(ofType r = 0, ofType i = 0);
    ~Complex();

    void setReal(ofType r);
    void setImaginary(ofType i);

	ofType getReal();
	ofType getImaginary();
	ofType getAbsoluteValue();

	Complex<ofType> operator+(const Complex<ofType>&);
	Complex<ofType> operator-(const Complex<ofType>&);
	Complex<ofType> operator*(const Complex<ofType>&);
	Complex<ofType> operator/(const Complex<ofType>&);
	Complex<ofType> operator%(const Complex<ofType>&);

    Complex<ofType> operator=(const Complex<ofType>&);
	Complex<ofType> operator+=(const Complex<ofType>&);
	Complex<ofType> operator-=(const Complex<ofType>&);

	Complex<ofType>operator++(const Complex<ofType>&);
	Complex<ofType>operator--(const Complex<ofType>&);

    bool operator<(const Complex<ofType>&);
    bool operator>(const Complex<ofType>&);

    bool operator&&(const Complex<ofType>&);
    bool operator||(const Complex<ofType>&);

    bool operator==(const Complex<ofType>&);
    bool operator!=(const Complex<ofType>&);
    bool operator<=(const Complex<ofType>&);
    bool operator>=(const Complex<ofType>&);

    friend std::ostream& operator<<(std::ostream& output, const Complex<ofType>& obj);
    friend std::istream& operator>>(std::istream& input, const Complex<ofType>& obj);
};

template<class ofType> Complex<ofType>::Complex(ofType r, ofType i) {
    this->setReal(r);
    this->setImaginary(i);
}

void template<class ofType> Complex<ofType>::setReal(ofType r) {
    this->Real = r;
}

void template<class ofType> Complex<ofType>::setImaginary(ofType r) {
    this->Imaginary = r;
}

ofType template<class ofType> Complex<ofType>::getReal() {
    return this->Real;
}

ofType template<class ofType> Complex<ofType>::getImaginary() {
    return this->Imaginary;
}

ofType template<class ofType> Complex<ofType>::getAbsoluteValue(){
    return std::sqrt( (this->Real * this->Real) + (this->Imaginary * this->Imaginary) );
}

template<class ofType> Complex<ofType> Complex<ofType>::operator+(const Complex<ofType> &obj) {
    this->Real += obj.Real;
    this->Imaginary += obj.Imaginary;
    return *this;
}

template<class ofType> Complex<ofType> Complex<ofType>::operator-(const Complex<ofType> &obj) {
    this->Real -= obj.Real;
    this->Imaginary -= obj.Imaginary;
    return *this;
}

template<class ofType> Complex<ofType> Complex<ofType>::operator*(const Complex<ofType> &obj){
    Complex<ofType> result;
    result.Real = (this->Real * obj.Real) - (this->Imaginary * obj.Imaginary);
    result.Imaginary = (this->Imaginary * obj.Real) + (obj.imaginary * this->Real);
    return result;
}

template<class ofType> Complex<ofType> Complex<ofType>::operator/(const Complex<ofType> &obj){
    Complex<ofType> Obj = obj;

}

template<class ofType> Complex<ofType> Complex<ofType>::operator%(const Complex<ofType> &obj){

}

template<class ofType> Complex<ofType> Complex<ofType>::operator=(const Complex<ofType> &obj){
    this->Real = obj.Real;
    this->Imaginary = obj.Imaginary;
    return *this;
}

template<class ofType> Complex<ofType> Complex<ofType>::operator+=(const Complex<ofType> &obj){
    return this + obj;
}

template<class ofType> Complex<ofType> Complex<ofType>::operator-=(const Complex<ofType> &obj){
    return this - obj;
}

bool Complex<ofType>::operator<(const Complex<ofType>& obj){
    return (this->getAbsoluteValue() < obj.getAbsoluteValue()) ? true : false;
}

bool Complex<ofType>::operator>(const Complex<ofType>& obj){
    return (this->getAbsoluteValue() > obj.getAbsoluteValue()) ? true : false;
}

bool Complex<ofType>::operator&&(const Complex<ofType>& obj){
    return (this->getAbsoluteValue() && obj.getAbsoluteValue()) ? true : false;
}

bool Complex<ofType>::operator||(const Complex<ofType>& obj){
    return (this->getAbsoluteValue() && obj.getAbsoluteValue()) ? true : false;
}

bool Complex<ofType>::operator==(const Complex<ofType>&){
    return (this->getAbsoluteValue() == obj.getAbsoluteValue()) ? true : false;
}

std::ostream& operator<<(std::ostream& output, const Complex<ofType>& obj){
    output << obj.Real << (obj.Imaginary >= 0) ? '+' : '' << obj.Imaginary << "i";
    return output;
}

std::istream& operator>>(std::istream& input, const Complex<ofType>& obj){
    input >> obj.Real >> obj.Imaginary;
    return input;
}

