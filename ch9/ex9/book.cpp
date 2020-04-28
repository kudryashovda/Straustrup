#include "book.h"
#include "error.h"

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

string Book::getGenre() const
{
	string str = "";
	switch(genre) {
	case fantastic:
		str = "fantastic";
		break;
	case prosa:
		str = "prosa";
		break;
	case periodic:
		str = "periodic";
		break;
	case biographia:
		str = "biographia";
		break;
	case kids:
		str = "kids";
		break;
	default:
		str = "";
		break;
	}

	return str;
}

string Book::getAdate() const
{
	string date = aDate.getDate();
	return date;
}

bool Book::checkOut() const
{
	return isOut;
}

void Book::setISBN(string str)
{
	//n-n-n-x , где n — целое число; x — цифра или буква
	vector<string> v = tokenizer(str, "-");
	if (v.size() != 4)  error("wrong ISBN format");

	for(size_t i = 0; i < 3; ++i)
		if ( !isNum(v[i]) ) error("wrong ISBN format");

	isbn = str;
}

bool Book::isNum(const string& str) const
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
	} while(pos != string::npos);

	return vs;
}

bool Book::setName(string str)
{
	if (str == "") {
		error("wrong book name format");
		return false;
	}

	name = str;
	return true;
}

bool Book::setAuthor(string str)
{
	if (str == "") {
		error("wrong author name format");
		return false;
	}

	author = str;
	return true;
}

bool Book::setGenre(Book::Genre g)
{
	genre = g;

	return true;
}

void Book::setAdate(string str)
{
	aDate.setDate(str);
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

bool operator==(const Book& l, const Book& r)
{
	bool res = l.getISBN() == r.getISBN();

	return res;
}

bool operator!=(const Book& l, const Book& r)
{
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

ostream& operator<<(ostream& os, const Book& b)
{
	os << endl;
	os << b.getName() << endl;
	os << b.getAuthor() << endl;
	os << b.getISBN() << endl;
	os << b.getGenre() << endl;

	return os;
}
