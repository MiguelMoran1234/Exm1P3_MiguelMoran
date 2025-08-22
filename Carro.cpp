#include "Carro.h"
static char estacionamiento[100][100];
static int altura;
static int anchura;
Carro::Carro(string tipo, string color, float saldo) {
	this->tipo = tipo;
	this->color = color;
	this->saldo = saldo;
	this->pagado = false;
	this->x = -1;
	this->y = -1;
}
Carro::~Carro() {

}
void Carro::pagar() {
	if (saldo > 0) {
		pagado = true;
	}
}
char Carro::representacion() {
	return tipo.at(0);
}
void Carro::IngresarCarro() {
	estacionamiento[x][y] = representacion();
}
void Carro::RetirarCarro() {
	estacionamiento[x][y] = '_';
}
void Carro::Printcarro() {
	cout << tipo << " - Color: " << color << " - Saldo: " << saldo << " - Pago: " << pagado << endl;
}
void Carro::Tipo(string tipo) {
	this->tipo = tipo;
}
void Carro::Color(string color) {
	this->color = color;
}
void Carro::Saldo(float saldo) {
	this->saldo = saldo;
}