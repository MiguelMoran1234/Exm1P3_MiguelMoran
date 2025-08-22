#include "Carro.h"
int** triangulo = nullptr;
int triangulo1[100][100];
static vector<Carro> carros;
void reservarEspacioDelTriangulo(int size) {
	int* altura = new int[size];
	int** anchura = new int*[size*2];
	triangulo = anchura;
}
void generarTrianguloPascal(int size) {	
	int* a = triangulo1[1];
	int** t = &a;
	triangulo = t;
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			triangulo1[i][j] = 0;
		}
	}
	triangulo1[0][size] = 1;
	for (int i = 1; i < size; i++) {
		for (int j = 1; j < size * 2 + 1; j++) {
			triangulo1[i][j] = triangulo1[i - 1][j + 1] + triangulo1[i - 1][j - 1];
		}
	}
}
void imprimirTrianguloPascal(int** triangulo, int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size * 2; j++) {
			if (triangulo1[i][j] == 0) {
				cout << " ";
			}
			else {
				cout << triangulo1[i][j];
			}
		}
		cout << endl;
	}
}
void liberarMemoria(int** triangulo, int size) {
	delete[] triangulo;
}
void TrianguloDePascal() {
	cout << "Ingrese el numero de filas del Triangulo de Pascal: ";
	int size;
	cin >> size;
	cout << endl;
	if (size < 3 || size > 5) {
		cout << "Numero no valido." << endl;
	}
	else {
		reservarEspacioDelTriangulo(size);
		generarTrianguloPascal(size);
		imprimirTrianguloPascal(triangulo, size);		
	}
	cout << endl;
}
void Estacionamiento() {
	int opcion;
	do {
		cout << "---Opciones---" << endl;
		cout << "1. Nuevo Carro" << endl;
		cout << "2. Ingresar Carro al estacionamiento" << endl;
		cout << "3. Sacar Carro del estacionamiento" << endl;
		cout << "4. Ver carros sin ingresar" << endl;
		cout << "5. Salir" << endl;
		cout << "Ingrese una opcion: ";
		cin >> opcion;
		string tipo = "";
		string color = "";
		float saldo = 0;
		int x, y;
		Carro carro(tipo, color, saldo);
		switch (opcion) {
		case 1:
			cout << "Ingrese el nombre del carro: ";
			cin >> tipo;
			cout << "Ingrese el color del carro: ";
			cin >> color;
			cout << "Ingrese el saldo del carro: ";
			cin >> saldo;
			carro.Tipo(tipo);
			carro.Color(color);
			carro.Saldo(saldo);
			carros.push_back(carro);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			for (int i = 0; i < carros.size(); i++) {
				carros.at(i).Printcarro();
			}
			break;
		case 5:
			break;
		default:
			cout << "Opcion ingresada no es valida.";
		}
		cout << endl;
	} while (opcion != 5);
}
int main() {
	int opcion;
	do {
		cout << "-------Menu-------" << endl;
		cout << "1. Triangulo de Pascal" << endl;
		cout << "2. Estacionamiento" << endl;
		cout << "3. Salir" << endl;
		cout << "Elija una opcion: ";
		cin >> opcion;
		switch (opcion) {
		case 1:
			TrianguloDePascal();
			break;
		case 2:
			Estacionamiento();
			break;
		case 3:
			break;
		default:
			cout << "Opcion ingresada no es valida." << endl;
		}
		cout << endl;
	} while (opcion != 3);
}
