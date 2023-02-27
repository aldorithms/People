class PhoneNumber {

private:

    unsigned short int CountryCode;
    unsigned short int AreaCode;
    unsigned short int Prefix;
    unsigned short int LineNumber;

public:

    PhoneNumber(unsigned short int, unsigned short int, unsigned short int, unsigned short int);
    PhoneNumber(unsigned short int, unsigned short int, unsigned short int);
    PhoneNumber(unsigned short int, unsigned short int);

    void setCountryCode(unsigned short int);
    void setAreaCode(unsigned short int);
    void setPrefix(unsigned short int);
    void setLineNumber(unsigned short int);

    unsigned short int getCountryCode();
    unsigned short int getAreaCode();
    unsigned short int setPrefix();
    unsigned short int getLineNumer();

    void printPhoneNumber();

};
