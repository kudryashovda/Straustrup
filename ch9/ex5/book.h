#include<iostream>
#include<vector>

using namespace std;

class Book
{
private:
    string isbn;
    string name;
    string author;
    string adate;
    bool isOut;
public:
    string getISBN();
    string getName();
    string getAuthor();
    string getAdate();
    bool checkOut();

    bool setISBN(string str);
    bool setName(string str);
    bool setAuthor(string str);
    bool setAdate(string str);
    bool setOut();
    bool setIn();

    bool checkISBN(string str);
    bool checkAdate(string str);
    size_t tokenizer(string str, vector<string>& vs, string delim);
    bool isNum(string str);
};
