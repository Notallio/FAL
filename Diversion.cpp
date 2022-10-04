/*POSTCONDICION DE LA FUNCION:
Q: { resul = (  (PARATODO i:0<=i<n:(SUMA j:0<=j<=i:a[j])>=0) && ( (SUMA i:0<=i<n:a[i])=0 ) ) }
 */
/*
#include <iostream>

using namespace std;

const int TMAX = 1000000;  // No habrá vectores de más de un millón de elementos

bool divertida(const int a[], int n);

bool divertida(const int a[], int n) { //Con un while es una solucion mas optima
	bool es_cero = false;
	int suma = 0;

	for (int i = 0; i < n; i++) {
		suma += a[i];
	}
	if (suma == 0) {
		es_cero = true;
	}

	return es_cero;
}

void lee_vector(int a[], int& n) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
}

int main() {
	static int a[TMAX];
	int n;
	do {
		lee_vector(a, n);
		if (n >= 0) {
			if (divertida(a, n))
				cout << "SI" << endl;
			else
				cout << "NO" << endl;
		}
	} while (n != -1);
}*/