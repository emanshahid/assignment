#include <iostream>

using namespace std;
struct node
{
	double data;
	node  *next;
};
class list
{
private:
	node *head, *tail;
public:
	list();
	void createnode(double vaue);
	void display();
	void insert_at_first(double value);
	void insert_at_position(int pos, double value);
	void delete_first();
	void delete_last();
	void delete_at_position(int pos);
};

