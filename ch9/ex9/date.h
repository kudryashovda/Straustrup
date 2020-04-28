#ifndef DATE_H
#define DATE_H

#include<string>
#include<vector>

using namespace std;

class Date
{
private:
	int day;
	int month;
	int year;
public:
	void setDate(string str);
	string getDate() const;
	vector<string> tokenizer(string str, string delim) const;
	bool isNum(const string& str) const;
};

bool operator==(const Date& l, const Date& r);
bool operator!=(const Date& l, const Date& r);

#endif /* DATE_H */
