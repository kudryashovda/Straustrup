#ifndef BOOK_H
#define BOOK_H

#include<iostream>
#include<vector>
#include "date.h"

using namespace std;

class Book
{
private:
	string isbn;
	string name;
	string author;
	Date aDate;
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

	void setISBN(string str);
	bool setName(string str);
	bool setAuthor(string str);
	void setAdate(string str);
	bool setGenre(Genre g);
	bool setOut();
	bool setIn();

	bool checkISBN(string str) const;
	bool checkAdate(string str) const;
	vector<string> tokenizer(string str, string delim) const;
	bool isNum(const string& str) const;

};

bool operator==(const Book& l, const Book& r);
bool operator!=(const Book& l, const Book& r);

ostream& operator<<(ostream& os, const Book& np);

#endif /* BOOK_H */
