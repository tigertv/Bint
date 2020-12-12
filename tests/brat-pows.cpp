#include <iostream>
#include <string>
#include <cassert>
#include <map>
#include <BeeNum/Brat.h>
#include <BeeNum/Math.h>

using namespace TigerTV;


int main() {
	Brat a;
	int b;
	Brat c;

	std::vector<std::vector<std::string>> data = {
		{"-5/23", "334" , "285746847820568745553945887076335239862977498705699665303781460806908158976684548918862005465043007412295763588343507058055135340570979687781510573352510310491378504344021315252113959925738006541406921456882628262974321842193603515625/65629218059151821783361066374230705132484876048854031364279109080760000432549452817323157819336406081525296568668713099971626516034722654896387618155178603081327877047438815730857894400750808295634321357126661155038480159766714286970178265202351119940657886462335013967533238982725161694721534974960914781713905854639939552518927584726107453798646114783787779979965748010815548352462018323575289721202724893333330184001516901514121741731791414098158218609"},
	};

	///////////////////////////////////////////////////////////
	std::cout << "pows:" << std::endl;

	for (auto& s : data) {
		a = s[0];
		std::cout << "a = " << a << std::endl;
		b = std::stoi(s[1]);
		std::cout << "b = " << b << std::endl;

		Brat t = s[2];
		std::cout << "t = " << t << std::endl;
		c = Math::pow(a,  b);
		std::cout << "c = " << c << std::endl;
		assert(t.toString() == c.toString());
		std::cout << std::endl;
	}

}
