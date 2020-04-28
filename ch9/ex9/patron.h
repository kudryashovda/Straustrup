#ifndef PATRON_H
#define PATRON_H

#include<string>

using namespace std;

class Patron
{
private:
	string name;
	string cardnum;
	int charge;
	bool paid;

public:
	void setName(string str);
	void setCardNum(string str);
	void setCharge(int ch);
	void setPaid(bool b);

	string getName() const;
	string getCardNum() const;
	int getCharge() const;
	bool isPaid() const;
};

bool operator==(const Patron& l, const Patron& r);
bool operator!=(const Patron& l, const Patron& r);

#endif /* PATRON_H */
