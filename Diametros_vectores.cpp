/*
El diámetro de un vector de enteros es el máximo de los valores absolutos de las diferencias entre cada
par de elementos del mismo. 
Por ejemplo, dado el vector (1,-2, 3, 8), 
los posibles pares de elementos del mismo son: {1,-2}, {1,3}, {1,8}, {-2,3}, {-2,8} y {3,8}.
La diferencia de los valores absolutos del primer par {1,-2} es igual a |1-(-2)|=3. 
De manera similar, la diferencia de los valores absolutos del segundo par es 2, 
la del tercer par 7, la del cuarto par 5, la del quinto par 10, y la del sexto par 5. 
Por tanto, el diámetro de este vector es 10 
(que es el mayor de los valores absolutos de las diferencias entre sus pares de elementos).
*/

#include <iostream>

using namespace std;

int diametro(int a[], int n) { //n siempre será positivo (es decir, podéis asumir n >= 1)
	int min = 1000000;
	int max = 0;
	int resul = 0;

	for (int i = 0; i < n; i++) {

		if (a[i] > max) {
			max = a[i];
		}
		if (a[i] < min) {
			min = a[i];
		}
	}

	resul = max - min;

	return resul;
}

const int TMAX = 1000000;  // No se podrán leer vectores de más de un millón de elementos

bool ejecuta_caso() {
	static int a[TMAX];
	int n;
	cin >> n;
	if (n == -1 || n > TMAX) {
		return false;
	}
	else {
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		cout << diametro(a, n) << endl;
		return true;
	}
}

int main() {
	while (ejecuta_caso());
}