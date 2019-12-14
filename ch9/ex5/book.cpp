#include "book.h"

using namespace std;

string Book::getISBN()
{
    return isbn;
}

string Book::getName()
{
    return name;
}

string Book::getAuthor()
{
    return author;
}

string Book::getAdate()
{
    return adate;
}

bool Book::checkOut()
{
    return isOut;
}

bool Book::setISBN(string str)
{
    bool chk = checkISBN(str);
    if (chk) isbn = str;
    
    return chk;
}

bool Book::checkISBN(string str)
{
    //n-n-n-x , где n — целое число; x — цифра или буква
    vector<string> v;

    size_t s = tokenizer(str, v, "-");
    if (s != 4) return false;

    for(size_t i = 0; i < 3; ++i)
        if ( !isNum(v[i]) ) return false;

    return true;
}

bool Book::isNum(string str)
{
    for(auto it: str)
        if ( !isdigit(it) ) return false;

    return true;
}

size_t Book::tokenizer(string str, vector<string>& vs, string delim)
{
    size_t pos;
    string token;
    
    do {
        pos = str.find_first_of(delim);
        token = str.substr(0,pos);
        vs.push_back(token);
        str = str.substr(pos+1);
    }
    while(pos != string::npos);

    return vs.size();
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

bool Book::checkAdate(string str)
{
   //dd.mm.yyyy
    vector<string> v;

    size_t s = tokenizer(str, v, ".");
    if (s != 3) return false;

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
