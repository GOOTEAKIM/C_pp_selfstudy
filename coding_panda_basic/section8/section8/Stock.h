
#ifdef STOCK
#define STOCK
#include <iostream>

using namespace std;

class Stock {

private:
	string name;
	int shares;
	float share_val;
	double total_val;
	void set_total() { total_val = share * share_val; }

public:
	void acquire(string&, int, float);
	void buy(int, float);
	void sell(int, float);
	void update(float);
	void show();

	Stock();
	~Stock();
};  

#endif