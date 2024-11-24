#include <iostream>
#include <conio.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	
	int tam=10;
	int num[10] = {7, 2, 3, 8, 1, 4, 6, 5, 10, 9};
	cout << "Ordem original:" << endl;
	cout << "------------------------------" << endl;
	for (int i=0; i<tam; i++){
		cout << num[i] << ", ";
	}
	cout << endl << "------------------------------" << endl;
	bool flag=true;
	int passo = 1;
	while(flag){
		flag=false;
		cout << endl << passo <<"º passo de ordenação" << endl;
		cout << "------------------------------" << endl;
		for(int i=0; i<tam-1; i++){
			if(num[i] > num[i+1]){
				int aux = num[i];
				num[i] = num[i+1]; 
				num[i+1] = aux;
				flag = true;	
			}
			for (int j=0; j<tam; j++){
				cout << num[j] << ", ";
			}
			cout << endl;
		}
		cout << "------------------------------" << endl;
		passo++;
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
