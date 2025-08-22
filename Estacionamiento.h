#pragma once
#include <iomanip>
using namespace std;
class Estacionamiento {
	string tipo;
	string color;
	float saldo;
	bool pagado;
	int x, y;
public:
	Estacionamiento();
	~Estacionamiento();
	void pagar();
	char representacion();
	void IngresarCarro();
	void RetirarCarro();
};

