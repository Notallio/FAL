/*
Tu primo Luis, de 12 años, está aprendiendo a usar la calculadora.
Su profesor le ha dicho que calcule el factorial de varios números. 
Pero, para evitar que le tengan que copiar números muy largos en el cuaderno, 
les ha pedido únicamente el último dígito, el de más a la derecha.


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