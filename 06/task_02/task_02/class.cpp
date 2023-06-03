#include "class.h"

Counter::Counter (int number_default) {
	this->number = number_default;
}
void Counter:: increment() {
	++number;
}
void Counter::decrement() {
	--number;
}
int Counter::get() {
	return number;
}