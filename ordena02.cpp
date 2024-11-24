#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int tam=10;
	int num[tam] = {7, 2, 3, 8, 1, 4, 6, 5, 10, 9};
	cout << "Ordem original:" << endl;
	cout << "------------------------------" << endl;
	for (int i=0; i<tam; i++){
		cout << num[i] << ", ";
	}
	cout << endl << "------------------------------" << endl;

	for(int i=0; i<tam; i++){
		cout << endl << i+1 <<"º passo de ordenação" << endl;
		cout << "------------------------------" << endl;
		for(int j=0; j<tam-i; j++){
			if(num[j] > num[j+1]){
				int aux = num[j];
				num[j] = num[j+1]; 
				num[j+1] = aux;
			}
			for (int k=0; k<tam; k++){
				cout << num[k] << ", ";
			}
			cout << endl;
		}
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
