#pragma once
#include <iomanip>
#include <vector>
#include <iostream>
using namespace std;
class Carro {
	string tipo;
	string color;
	float saldo;
	bool pagado;
	int x, y;
public:
	Carro(string tipo, string color, float saldo);
	~Carro();
	void pagar();
	char representacion();
	void IngresarCarro();
	void RetirarCarro();
	void Printcarro();
	void Tipo(string tipo);
	void Color(string color);
	void Saldo(float saldo);
};

