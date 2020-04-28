#include "patron.h"

void Patron::setName(string str)
{
	name = str;
}

void Patron::setCardNum(string str)
{
	cardnum = str;

}

void Patron::setCharge(int ch)
{
	charge = ch;
}

void Patron::setPaid(bool b)
{
	paid = b;
}

string Patron::getName() const
{
	return name;
}

string Patron::getCardNum() const
{
	return cardnum;
}

int Patron::getCharge() const
{
	return charge;
}

bool Patron::isPaid() const
{
	return paid;
}


bool operator==(const Patron& l, const Patron& r)
{
	bool res = l.getCardNum() == r.getCardNum();

	return res;
}

bool operator!=(const Patron& l, const Patron& r)
{
	bool res = (l != r);

	return res;
}
