/*
Tu primo Luis, de 12 a�os, est� aprendiendo a usar la calculadora.
Su profesor le ha dicho que calcule el factorial de varios n�meros. 
Pero, para evitar que le tengan que copiar n�meros muy largos en el cuaderno, 
les ha pedido �nicamente el �ltimo d�gito, el de m�s a la derecha.


#include <iostream>
#include <string>

using namespace std;

void factorial(int num) {
	int resul = 1;

	for (int i = 1; i <= num; i++) {
		resul = resul * i;
	}

	cout << resul % 10 << endl;

}

int main() {
	int casos, num;
	int i = 0;
	cin >> casos;

	while (i < casos) {
		cin >> num;
		factorial(num);
		i++;
	}
	return 0;
}
*/