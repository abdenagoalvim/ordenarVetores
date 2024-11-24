#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	int menor, tam=10;
	int num[tam] = {7, 2, 3, 8, 1, 4, 6, 5, 10, 9};
	cout << "Ordem original:" << endl;
	cout << "------------------------------" << endl;
	for (int i=0; i<10; i++){
		cout << num[i] << ", ";
	}
	cout << endl << "------------------------------" << endl;
	
	for (int i=0; i<tam; i++){
		cout << endl << i+1 <<"º passo de ordenação" << endl;
		cout << "------------------------------" << endl;
		menor = i;
		cout << "Menor: " << menor << ", ";
		for (int j=i+1; j<tam; j++){
			if (num[j] < num[menor]){
				menor = j;
				cout << menor << ", ";
			}
		}
		int aux = num[i];
		num[i] = num[menor];
		num[menor] = aux;
		cout << endl;
		for (int j=0; j<tam; j++){
			cout << num[j] << ", ";
		}
		cout << endl;
		cout << "------------------------------" << endl;
	}
	
	cout << endl << "Ordem final:" << endl;
	cout << "------------------------------" << endl;
	for (int i=0; i<tam; i++){
		cout << num[i] << ", ";
	}
	cout << endl << "------------------------------" << endl;
	
	getch();
	return 0;
}
