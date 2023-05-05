#include "log_elem.h"
void LogElement::setIn1(bool a) {
	In1 = a;
	calc();
}
void LogElement::setIn2(bool a) {
	In2 = a;
	calc();
}