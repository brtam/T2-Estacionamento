#include "Carro.h"
#include <iostream>

ostream& operator<<(ostream& c, Carro& car) {
	list<int>::iterator iter;

	s << "[";
	iter = lst.valores.begin();
	if (iter != lst.valores.end() ) {
		s << *iter;
		iter++;
	}
	for(  ; iter != lst.valores.end() ; iter++ )
		s << ", " << *iter ;
	s << "]";

	return s;
}
