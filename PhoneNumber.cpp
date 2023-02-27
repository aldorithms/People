#include "PhoneNumber.h"
#include <iostream>

PhoneNumber::PhoneNumber(unsigned short int cc, unsigned short int ac, unsigned short int p, unsigned short int ln) {

    this->setCountryCode(cc);
    this->setAreaCode(ac);
    this->setPrefix(p);
    this->setLineNumber(ln);

}

PhoneNumber::PhoneNumber(unsigned short int ac, unsigned short int p, unsigned short int ln) {

    this->setAreaCode(ac);
    this->setPrefix(p);
    this->setLineNumber(ln);

}

PhoneNumber::PhoneNumber(unsigned short int p, unsigned short int ln) {

    this->setPrefix(p);
    this->setLineNumber(ln);

}

void PhoneNumber::setCountryCode(unsigned short int cc){
    this->CountryCode = cc;
}

void PhoneNumber::setAreaCode(unsigned short int ac){
    this->AreaCode = ac;
}

void PhoneNumber::setPrefix(unsigned short int p){
    this->Prefix = p;
}

void PhoneNumber::setLineNumber(unsigned short int ln){
    this->LineNumber = ln;
}

unsigned short int PhoneNumber::getCountryCode(){
    return this->CountryCode;
}

unsigned short int PhoneNumber::getAreaCode(){
    return this->AreaCode;
}

unsigned short int PhoneNumber::getPrefix(){
    return this->Prefix;
}

unsigned short int PhoneNumber::getLineNumer(){
    return this->LineNumber;
}

void PhoneNumber::printPhoneNumber(){
    cout << "+" << this->CountryCode << ' (' << this->AreaCode << ') ' << this->Prefix << '-' << this->LineNumber;
}
