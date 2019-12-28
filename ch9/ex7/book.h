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
    enum Genre {
        fantastic,
        prosa,
        periodic,
        biographia,
        kids
    };
    Genre genre;

    string getISBN() const;
    string getName() const;
    string getAuthor() const;
    string getAdate() const;
    string getGenre() const;
    bool checkOut() const;

    bool setISBN(string str);
    bool setName(string str);
    bool setAuthor(string str);
    bool setAdate(string str);
    bool setGenre(Genre g);
    bool setOut();
    bool setIn();

    bool checkISBN(string str) const;
    bool checkAdate(string str) const;
    vector<string> tokenizer(string str, string delim) const;
    bool isNum(string str) const;

};

bool operator==(const Book& l, const Book& r);
bool operator!=(const Book& l, const Book& r);

ostream& operator<<(ostream& os, const Book& np);
