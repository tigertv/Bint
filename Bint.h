/*
 * MIT License
 *
 * This file is part of the big-integer (https://github.com/tigertv/big-integer).
 * Copyright (c) 2020 Max Vetrov(tigertv).
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */


#ifndef TIGERTV_BIG_INTEGER_H
#define TIGERTV_BIG_INTEGER_H

#include <string>
#include <vector>
#include <functional>
#include <iostream>


namespace TigerTV {


class Bint {
private:
	std::vector<uint64_t> number;

	void addDigit(char c);
	void addUintWithCarry(uint64_t& operand1res, const uint64_t& operand2, bool& carry) const;
	void mult(uint64_t& operand1High, uint64_t& operand2Low) const;
	uint64_t div(const uint64_t& dividend, const uint64_t& divisor, uint64_t& prevRmd) const;
	Bint& bitOperation(const Bint& a, std::function<uint64_t(uint64_t& a,const uint64_t& b)>&& lambda);
	bool compare(const Bint& a, bool b, bool c, std::function<bool(const uint64_t&, const uint64_t&)>&& lambda); // not used now
	void eraseLeadingZeros();
	void div(Bint& c, Bint& res, const Bint& a) const;
	void setDecimal(const std::string& s);
	std::string toBaseString(uint64_t base) const;

public:
	Bint();
	Bint(const uint64_t num);
	Bint(const char* decimal);
	Bint(const std::string& decimal);

	std::string toBinString() const;
	std::string toHexString() const;
	std::string toString() const;
	operator std::string() const;

	// Bit
	Bint operator & (const Bint& a) const;
	Bint& operator &= (const Bint& a);
	Bint operator | (const Bint& a) const;
	Bint& operator |= (const Bint& a);
	Bint operator ^ (const Bint& a) const;
	Bint& operator ^= (const Bint& a);
	Bint operator ~ () const;

	// Arithmetic
	Bint operator + (const Bint& a) const;
	Bint& operator += (const Bint& a);
	Bint operator ++ (int); // postfix
	Bint& operator ++ (); // prefix
	Bint operator - (const Bint& a) const;
	Bint& operator -= (const Bint& a);
	Bint operator -- (int); // postfix
	Bint& operator -- (); // prefix
	Bint operator * (const Bint& a) const;
	Bint& operator *= (const Bint& a);
	Bint operator / (const Bint& a) const;
	Bint& operator /= (const Bint& a);
	Bint operator % (const Bint& a) const;
	Bint& operator %= (const Bint& a);

	// Shifts
	Bint operator << (const int shift) const;
	Bint& operator <<= (const int shift);
	Bint operator >> (const int shift) const;
	Bint& operator >>= (const int shift);

	// Comparison
	friend bool operator <= (const Bint& a, const Bint &b);
	friend bool operator >= (const Bint& a, const Bint &b);
	friend bool operator == (const Bint& a, const Bint &b);
	friend bool operator != (const Bint& a, const Bint &b);
	friend bool operator < (const Bint& a, const Bint &b);
	friend bool operator > (const Bint& a, const Bint &b);

	// Input-output
	friend std::ostream& operator << (std::ostream &strm, Bint &a);
	friend std::istream& operator >> (std::istream& strm, Bint& a); 
};

class Math {
private:
	Math();

public:
	static Bint pow(const Bint& a, uint64_t pow);
	static Bint modPow(const Bint& base, const Bint& exp, const Bint& mod);
};


} // namespace

#endif