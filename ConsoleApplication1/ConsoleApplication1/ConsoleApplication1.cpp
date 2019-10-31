#include <string>
#include <iostream>
using namespace std;

void menu();
int suma();
int resta();
int multiplicacion();
int division();
void pausa();
int main()
{
	menu();
	return 0;
}
void menu()
{
	bool bandera = false;
	char tecla;
	do
	{
		system("cls");
		cin.clear();
		cout << "calculadora con funciones" << endl;
		cout << "-------------------------" << endl;
		cout << "\t1.-sumar" << endl;
		cout << "\t2.-resta" << endl;
		cout << "\t3.-multiplicar" << endl;
		cout << "\t4.-dividir" << endl;
		cout << "\t5.-salir" << endl;
		cout << "elige una opcion: ";
		cin >> tecla;
		switch (tecla)
		{
		case '1':
			system("cls");
			suma();
			break;
		case '2':
			system("cls");
			resta();
			break;
		case '3':
			system("cls");
			multiplicacion();
			break;
		case '4':
			system("cls");
			division();
			break;
		case '5':
			bandera = true;
			break;

		default:
			break;
			system("cls");
			cout << "opcion no valida" << endl;
			pausa();
			break;

		}


	} while (bandera != true);

}
void pausa()
{
	cout << endl << "pulsa cualquier tecla";
	getwchar();
	getwchar();

}
int suma()
{
	int a, b, suma;
	cout << "primer valor: ";
	cin >> a;
	cout << "segundo valor: ";
	cin >> b;
	suma = a + b;
	cout << "el resultado es: " << suma;
	pausa();
	return 0;
}
int resta()
{
	int a, b, resta;
	cout << "primer valor: ";
	cin >> a;
	cout << "segundo valor: ";
	cin >> b;
	resta = a - b;
	cout << "el resultado es: " << resta;
	pausa();
	return 0;
}
int multiplicacion()
{
	int a, b, multiplicacion;
	cout << "primer valor: ";
	cin >> a;
	cout << "segundo valor: ";
	cin >> b;
	multiplicacion = a * b;
	cout << "el resultado es: " << multiplicacion;
	pausa();
	return 0;
}
int division()
{
	int a, b, division;
	cout << "primer valor: ";
	cin >> a;
	cout << "segundo valor: ";
	cin >> b;
	division = a / b;
	cout << "el resultado es: " << division;
	pausa();
	return 0;
}