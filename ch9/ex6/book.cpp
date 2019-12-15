#include "book.h"

using namespace std;

string Book::getISBN () const
{
    return isbn;
}

string Book::getName() const
{
    return name;
}

string Book::getAuthor() const
{
    return author;
}

string Book::getAdate() const
{
    return adate;
}

bool Book::checkOut() const
{
    return isOut;
}

bool Book::setISBN(string str)
{
    bool chk = checkISBN(str);
    if (chk) isbn = str;
    
    return chk;
}

bool Book::checkISBN(string str) const
{
    //n-n-n-x , где n — целое число; x — цифра или буква
    vector<string> v = tokenizer(str, "-");
    if (v.size() != 4) return false;

    for(size_t i = 0; i < 3; ++i)
        if ( !isNum(v[i]) ) return false;

    return true;
}

bool Book::isNum(string str) const
{
    for(auto it: str)
        if ( !isdigit(it) ) return false;

    return true;
}

vector<string> Book::tokenizer(string str, string delim) const
{
    vector<string> vs;
    size_t pos;
    string token;
    
    do {
        pos = str.find_first_of(delim);
        token = str.substr(0,pos);
        vs.push_back(token);
        str = str.substr(pos+1);
    }
    while(pos != string::npos);

    return vs;
}

bool Book::setName(string str)
{
    if (str == "") return false;

    name = str;
    return true;
}

bool Book::setAuthor(string str)
{
    if (str == "") return false;

    author = str;
    return true;
}

bool Book::setAdate(string str)
{
    bool chk = checkAdate(str);
    if (!chk) return false;

    adate = str;
    return true;    
}

bool Book::checkAdate(string str) const
{
   //dd.mm.yyyy
    vector<string> v = tokenizer(str, ".");
    if (v.size() != 3) return false;

    for(auto it: v) if ( !isNum(it) ) return false;
    size_t d = stoi(v[0]);
    size_t m = stoi(v[1]);
    size_t y = stoi(v[2]);

    if (y < 1) return false;
    if ( (m < 1) or (m > 12) ) return false;
    if ( (d < 1) or (d > 31) ) return false;

    const vector<size_t> lm = {4, 6, 9, 11};
    for(auto it: lm)
        if ( (d == 31) and (m == it) ) return false;
        
    bool isLeep = (y % 4) == 0 ;    
    if ( isLeep and (m == 2) and (d > 29) ) return false;
    if ( !isLeep and (m == 2) and (d > 28) ) return false;
    
    return true;
}

bool Book::setOut()
{
    isOut = true;

    return true;
}

bool Book::setIn()
{
    isOut = false;

    return true;
}

bool operator==(const Book& l, const Book& r) {
    bool res = l.getISBN() == r.getISBN();
    
    return res;
}

bool operator!=(const Book& l, const Book& r) {
    string isbn_l = l.getISBN();
    string isbn_r = r.getISBN();
    
    //n-n-n-x , где n — целое число; x — цифра или буква
    vector<string> vl, vr;

    vl = l.tokenizer(isbn_l, "-");
    vr = r.tokenizer(isbn_r, "-");

    for(size_t i = 0; i < 2; ++i)
        if ( stoi(vl[i]) != stoi(vr[i]) ) return true;

    return false;    
}

ostream& operator<<(ostream& os, const Book& b) {
    os << endl;
    os << b.getName() << endl;
    os << b.getAuthor() << endl;
    os << b.getISBN() << endl;

    return os;
}
