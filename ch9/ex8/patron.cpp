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

string Patron::getName()
{
    return name;
}

string Patron::getCardNum()
{
    return cardnum;
}

int Patron::getCharge()
{
    return charge;
}

bool Patron::isPaid()
{
    return paid;
}
