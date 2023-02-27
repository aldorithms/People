#ifndef DATE_CLASS
#define DATE_CLASS

#include "Date.cpp"

class Date {

private:

	unsigned short int 			day;
	unsigned short int			month;
	unsigned short int			year;
	bool                        isBCE;

public:

    Date();

    Date(int d = 1, int m = 1, int y = 2000);

    void resetDate();

    void setDate(int d, int m, int y);

    unsigned short int getDay();

    unsigned short int getMonth();

    unsigned short int getYear();

    void printDate();

};

#endif
