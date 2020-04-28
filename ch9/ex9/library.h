#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include "book.h"
#include "patron.h"
#include "date.h"

class Library
{
private:
	vector<Book> bookRecords;
	vector<Patron> patronRecords;

	struct Transaction {
		Book book;
		Patron patron;
		Date date;
		Transaction(Book b, Patron p, Date d)
		{
			book = b;
			patron = p;
			date = d;
		};
	};

	vector<Transaction> transactionRecords;
public:
	void addBookRecord(Book b);
	void addPatronRecord(Patron p);
	bool isBookInRecords(Book b);
	bool isPatronInRecords(Patron p);

	void addTransactionRecord(Date date, Book b, Patron p);
	vector<string> getAllPatronsNotPaid();
};

#endif /* LIBRARY_H */
