#include<string>

using namespace std;

class Patron {
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

    string getName();
    string getCardNum();
    int getCharge();
    bool isPaid();    
};
