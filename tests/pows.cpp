#include <iostream>
#include <string>
#include <cassert>
#include <vector>
#include <Bint/Bint.h>
#include <Bint/Math.h>

using namespace TigerTV;


int main() {
	Bint a;
	Bint b;
	Bint c;
	Bint d;

	std::vector<std::vector<std::string>> data = {
		{"54", "1000", "24760523525153779042306425129042269170653438632102989289544245144217598697196575585336370332945691516639356072848874341645755486127625134772026649610191898106418756222669348253814776455903046107875082937588780155141525869928519863596975366561706902385571900178496766399051533059979166948946650263969858538012166978770580387290596392969401930284582083127664574596100564834836845736883764033170698790188606728287186224833520012928247649705039562028741362770580247617032117021446662063508230628442076159292266562480926397575844212221244076481075152300762457397378510962422563672091530864296251823324452297940669976141519582053969670065633449517596064824560841429396987086467452540316672467861223805386560597408246976035124640630810815234975296683743350880439812030120104242464216194346217965060628596783121731670534182531712933262289278504575558302053816914901606780865442923829250668836788355341952692755089540425038300445641524422473735862739990663552433013291551496492967051494757169825684396578977386073958461460103421505112691017948083246639724179435791540048976394141209183397099150761658509034123001250516397655195412171623659751971193920443642011422388466334476642785719106425015081569535889715959774643496150478244690158679571595727649427050906746186791288802545662233466465555460786901661811525320391946268888379748388806427656128328034318862979075814243060548498608633009786619957089897230197538201991904051751480925061108356607540115011204530435494291485511821941549634370046574708674513664628847894905309481477991728283983668928353134342859814856284338446898254753315151574922478357491503003401133419295362125784165116496005315702829423003010087199888510946399845971137259733871724301253338863833453089612420126532096229376", "4444", "1112"},
		{"-54", "5", "-459165024", "4344", "-4224"},
		{"-54", "6", "24794911296", "7447", "5644"},
		{"10", "0", "1", "7", "1"},
	};

	///////////////////////////////////////////////////////////

	std::cout << "Pow:" << std::endl;

	for (auto& s : data) {
		a = s[0];
		std::cout << "a = " << a << std::endl;
		std::cout << "a = " << a.bin() << std::endl;
		b = s[1];
		std::cout << "b = " << b << std::endl;
		std::cout << "b = " << b.bin() << std::endl;
		c = Math::pow(a, std::stoi(b));
		std::cout << "c = " << c << std::endl;
		std::cout << "s = " << s[2] << std::endl;
		assert(c.toString()==s[2]);
		std::cout << std::endl;
	}

	std::cout << "ModPow:" << std::endl;

	for (auto& s : data) {
		a = s[0];
		std::cout << "a = " << a << std::endl;
		std::cout << "a = " << a.bin() << std::endl;
		b = s[1];
		std::cout << "b = " << b << std::endl;
		std::cout << "b = " << b.bin() << std::endl;
		d = s[3];
		std::cout << "d = " << d << std::endl;
		std::cout << "d = " << d.bin() << std::endl;
		c = Math::modPow(a, std::stoi(b), std::stoi(d));
		std::cout << "c = " << c << std::endl;
		std::cout << "s = " << s[4] << std::endl;
		assert(c.toString()==s[4]);
		std::cout << std::endl;
	}

}
