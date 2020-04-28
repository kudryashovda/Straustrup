#include "date.h"
#include "error.h"

using namespace std;

string Date::getDate() const
{
	string res = to_string(day) + "." + to_string(month) + "." + to_string(year);

	return res;
}

void Date::setDate(string str)
{
	//dd.mm.yyyy
	vector<string> v = tokenizer(str, ".");
	if (v.size() != 3) {
		error("wrong date format");
		return;
	}

	for(auto it: v) if ( !isNum(it) ) {
			error("wrong date format");
			return;
		}
	size_t d = stoi(v[0]);
	size_t m = stoi(v[1]);
	size_t y = stoi(v[2]);

	if (  y < 1) {
		error("wrong date format");
		return;
	}
	if ( (m < 1) or (m > 12) ) {
		error("wrong date format");
		return;
	}
	if ( (d < 1) or (d > 31) ) {
		error("wrong date format");
		return;
	}

	const vector<size_t> lm = {4, 6, 9, 11};
	for(auto it: lm)
		if ( (d == 31) and (m == it) ) {
			error("wrong date format");
			return;
		}

	bool isLeep = (y % 4) == 0 ;
	if ( isLeep and (m == 2) and (d > 29) ) {
		error("wrong date format");
		return;
	}
	if ( !isLeep and (m == 2) and (d > 28) ) {
		error("wrong date format");
		return;
	}

	day = d;
	month = m;
	year = y;
}

bool Date::isNum(const string& str) const
{
	for(auto it: str)
		if ( !isdigit(it) ) return false;

	return true;
}

vector<string> Date::tokenizer(string str, string delim) const
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

bool operator==(const Date& l, const Date& r)
{
	bool res = l.getDate() == r.getDate();

	return res;
}

bool operator!=(const Date& l, const Date& r)
{
	bool res = (l != r);

	return res;
}
