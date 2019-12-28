#include<iostream>
#include "patron.h"

using namespace std;

int main()
{
    Patron p1;

    p1.setName("Alex");
    p1.setCardNum("628495726");
    p1.setCharge(200);
    p1.setPaid(true);

    cout << p1.getName() << endl;
    cout << p1.getCardNum() << endl;
    cout << p1.getCharge() << endl;
    cout << "is paid ( 0 - No, 1 - Yes ) : " << p1.isPaid() << endl;
}
