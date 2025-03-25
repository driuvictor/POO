#include <iostream>
#include <string>
using namespace std;

class animal {
protected:
	string nume;
	int varsta;
	string mancare;
	float kg;
	string culoare;
public:
	animal(string nume, int varsta, string mancare, float kg, string culoare) : nume(nume), varsta(varsta), mancare(mancare), kg(kg), culoare(culoare) {}
	void inf_animal() {
		cout << "Animal: " << nume << endl << "Varsta: " << varsta << endl << "Mancare: " << mancare << endl << "Kilograme: " << kg << endl << "Culoare: " << culoare << endl;
	}
};

class mamifer : public animal {
protected:
	string tip_alimentar;
public:
	mamifer(string nume, int varsta, string mancare, float kg, string culoare, string tip_alimentar) : animal(nume, varsta, mancare, kg, culoare), tip_alimentar(tip_alimentar) {}
	void inf_mamifer() {
		cout << "Animal: " << nume << endl << "Varsta: " << varsta << endl << "Mancare: " << mancare << endl << "Kilograme: " << kg << endl << "Tip alimentar: " << tip_alimentar << endl << "Culoare: " << culoare << endl << endl;
	}
};

class fauna_marina : public animal {
protected:
	string tip_animal;
public:
	fauna_marina(string nume, int varsta, string mancare, float kg, string culoare, string tip_animal) : animal(nume, varsta, mancare, kg, culoare), tip_animal(tip_animal) {}
	void inf_fauna_marina() {
		cout << "Animal: " << nume << endl << "Varsta: " << varsta << endl << "Mancare: " << mancare << endl << "Kilograme: " << kg << endl << "Tip de animal: " << tip_animal << endl << "Culoare: " << culoare << endl << endl;
	}
};

class pasare : public animal {
protected:
	float lungime_aripi;
public:
	pasare(string nume, int varsta, string mancare, float kg, string culoare, float lungime_aripi) : animal(nume, varsta, mancare, kg, culoare), lungime_aripi(lungime_aripi) {}
	void inf_pasare() {
		cout << "Animal: " << nume << endl << "Varsta: " << varsta << endl << "Mancare: " << mancare << endl << "Kilograme: " << kg << endl << "Lungime aripi: " << lungime_aripi << endl << "Culoare: " << culoare << endl << endl;
	}
};

int main() {
	mamifer tigru("Tigru", 5, "Carne", 220.3, "Portocaliu cu dungi", "Carnivor");
	fauna_marina delfin("Delfin", 8, "Pesti", 150.0, "Gri", "Mamifer marin");
	pasare vultur("Vultur", 6, "Carne", 4.5, "Maro", 2.3);

	tigru.inf_mamifer();
	delfin.inf_fauna_marina();
	vultur.inf_pasare();

	return 0;
}
