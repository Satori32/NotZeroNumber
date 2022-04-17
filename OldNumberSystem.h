#pragma once
#include <iostream>
#include <cstdint>
#include <exception>
#include <limits>

class OldNumberSystem {
public:
	typedef std::intmax_t Number;

	OldNumberSystem() {	}
	OldNumberSystem(const Number& N_):N(N_){}

	bool Crash() const{
		if (N == 0) { throw std::logic_error("what is 0."); }
		return false;
	}
	/** /
	operator const Number&() {
		return N;

	}
	/**/

	OldNumberSystem operator+(const OldNumberSystem& In) {
		In.Crash();
		this->Crash();
		OldNumberSystem Out(N + In.N);
		Out.Crash();
		return Out;
	}
	OldNumberSystem operator-(const OldNumberSystem& In) {
		In.Crash();
		this->Crash();
		OldNumberSystem Out(N - In.N);
		Out.Crash();
		return Out;
	}
	OldNumberSystem operator*(const OldNumberSystem& In) {
		In.Crash();
		this->Crash();
		OldNumberSystem Out(N *In.N);
		Out.Crash();
		return Out;
	}
	OldNumberSystem operator/(const OldNumberSystem& In) {
		In.Crash();
		this->Crash();
		OldNumberSystem Out(N / In.N);
		Out.Crash();
		return Out;
	}

	OldNumberSystem operator%(const OldNumberSystem& In) {
		In.Crash();
		this->Crash();
		OldNumberSystem Out(N % In.N);
		Out.Crash();
		return Out;
	}
	OldNumberSystem operator+(const Number& In) {
		this->Crash();
		OldNumberSystem Out(N + In);
		Out.Crash();
		return Out;
	}
	OldNumberSystem operator-(const Number& In) {

		this->Crash();
		OldNumberSystem Out(N - In);
		Out.Crash();
		return Out;
	}
	OldNumberSystem operator*(const Number& In) {
		this->Crash();
		OldNumberSystem Out(N *In);
		Out.Crash();
		return Out;
	}
	OldNumberSystem operator/(const Number& In) {
		this->Crash();
		OldNumberSystem Out(N / In);
		Out.Crash();
		return Out;
	}

	OldNumberSystem operator%(const Number& In) {
		this->Crash();
		OldNumberSystem Out(N % In);
		Out.Crash();
		return Out;
	}
protected:
	Number N = 1;
};