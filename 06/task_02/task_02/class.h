#pragma once

class Counter {
private:
	int number;
public: 
	Counter(int number_default = 1);
	void increment();
	void decrement();
	int get();
};