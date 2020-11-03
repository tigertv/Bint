 /*
 * This file is part of the big-integer (https://github.com/tigertv/big-integer).
 * Copyright (c) 2020 Max Vetrov(tigertv).
 * 
 * This program is free software: you can redistribute it and/or modify  
 * it under the terms of the GNU General Public License as published by  
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef BIG_INTEGER_H
#define BIG_INTEGER_H

#include <string>
#include <vector>

class BigInteger {
private:
	std::vector<uint32_t> number;
	void addBinary(const std::vector<uint32_t>&bin); 
	BigInteger add(const BigInteger& a, const BigInteger& b); 
	void shiftLeft(std::vector<uint32_t>&bin, int places);
	void mult10();
	void addDigit(char c);
	bool takeCarry(uint32_t& num);

public:
	BigInteger();
	void setDecimal(const std::string& s);
	BigInteger operator + (const BigInteger& a);
	BigInteger& operator += (const BigInteger& a);
	BigInteger& operator &= (const BigInteger& a);
	operator std::string();
	std::string toBinString();
	std::string toString();
};

#endif