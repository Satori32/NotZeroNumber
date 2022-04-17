#include <iostream>
#include <cstdint>
#include <exception>
#include <limits>

#include "UnsignedOldNumberSystem.h"
#include "OldNumberSystem.h"

/// <summary>
/// Old Histry. Zero is finded by India.
/// are you know before find zero.to noting zero object.
/// zero is special item. it great.
/// </summary>

class NumberSystem{
public:
	typedef std::intmax_t Number;

	NumberSystem() {}
	NumberSystem(const Number& In) :N(In) { Crash(); }

	bool Crash() const{
		if (N == 0) { throw  std::logic_error("What Is 0."); }
		return false;
	}

	operator const Number& (){
		Crash();
		return N;
	}
	NumberSystem operator =(const NumberSystem& In) {
		In.Crash();
		this->Crash();
		N = In.N;
		return *this;
	}

protected:
	Number N=1;
};

class UnsignedNumberSystem {
public:
	typedef std::uintmax_t Number;

	UnsignedNumberSystem() {}
	UnsignedNumberSystem(const Number& In) :N(In) { Crash(); }

	bool Crash() const{
		if (N == 0) {throw  std::logic_error("What Is 0."); }
		return false;
	}

	operator const Number& (){
		Crash();
		return N;
	}
	UnsignedNumberSystem operator =(const UnsignedNumberSystem& In) {
		In.Crash();
		this->Crash();
		N = In.N;
		return *this;
	}

protected:
	Number N=1;
};
int main() {
	//UnsignedNumberSystem O=0;
	NumberSystem O=0;
	O = O -1 ;

	return 0;
}