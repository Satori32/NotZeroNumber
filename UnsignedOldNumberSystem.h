#pragma once
#include <iostream>
#include <cstdint>
#include <exception>
#include <limits>

class UnsigendOldNumberSystem {
public:
	typedef std::uintmax_t Number;

	UnsigendOldNumberSystem() {	}
	UnsigendOldNumberSystem(const Number& In) :N(In) {}

	bool Crash() const {
		if (N == 0) { throw std::logic_error("what is 0."); }
		return false;
	}
	/** /
	operator const Number&() {
		return N;

	}
	/**/
	UnsigendOldNumberSystem operator+(const UnsigendOldNumberSystem& In) {
		In.Crash();
		this->Crash();
		UnsigendOldNumberSystem Out(this->N + In.N);
		Out.Crash();
		return Out;
	}
	UnsigendOldNumberSystem operator-(const UnsigendOldNumberSystem& In) {
		In.Crash();
		this->Crash();
		UnsigendOldNumberSystem Out(N - In.N);
		Out.Crash();
		return Out;
	}
	UnsigendOldNumberSystem operator*(const UnsigendOldNumberSystem& In) {
		In.Crash();
		this->Crash();
		UnsigendOldNumberSystem Out(N * In.N);
		Out.Crash();
		return Out;
	}
	UnsigendOldNumberSystem operator/(const UnsigendOldNumberSystem& In) {
		In.Crash();
		this->Crash();
		UnsigendOldNumberSystem Out(N / In.N);
		Out.Crash();
		return Out;
	}

	UnsigendOldNumberSystem operator%(const UnsigendOldNumberSystem& In) {
		In.Crash();
		this->Crash();
		UnsigendOldNumberSystem Out(N % In.N);
		Out.Crash();
		return Out;
	}

	UnsigendOldNumberSystem operator+(const Number& In) {
		this->Crash();
		UnsigendOldNumberSystem Out(N + In);
		Out.Crash();
		return Out;
	}
	UnsigendOldNumberSystem operator-(const Number& In) {

		this->Crash();
		UnsigendOldNumberSystem Out(N - In);
		Out.Crash();
		return Out;
	}
	UnsigendOldNumberSystem operator*(const Number& In) {
		this->Crash();
		UnsigendOldNumberSystem Out(N * In);
		Out.Crash();
		return Out;
	}
	UnsigendOldNumberSystem operator/(const Number& In) {
		this->Crash();
		UnsigendOldNumberSystem Out(N / In);
		Out.Crash();
		return Out;
	}

	UnsigendOldNumberSystem operator%(const Number& In) {
		this->Crash();
		UnsigendOldNumberSystem Out(N % In);
		Out.Crash();
		return Out;
	}
	
protected:

	Number N = 1;
};