#include <iostream>
using namespace std;

void diferenca(int vA[], int vB[], int vD[], int tA, int tB);
void uniao(int vA[], int vB[], int vC[], int tA, int tB);
/********************FUNCÃO PRINCIPAL**********************************/
int main() {
	int tA, tB;
	cin >> tA >> tB;
	int VA[tA], VB[tB],VD [tA],VC[tA+tB];

	for(int i = 0; i < tA; i++){
		cin >> VA[i];
	}
	for(int i = 0; i < tB; i++){
		cin >> VB[i];
	}
	uniao(VA, VB, VC,tA,tB);
	diferenca(VA, VB, VD, tA, tB);
	
	int x = 0;
	while((VC[x] != -1) and (x < tA+tB)){
		cout << VC[x] << " ";
	x++;
	}
	cout << endl;
	x =0;
	while ((VD[x] != -1) and (x < tA)){
		cout << VD[x] << " ";
		x++;
	}
	cout << endl;
	return 0;
}
/********************FUNCÕES**********************************/
void uniao(int vA[], int vB[], int vC[], int tA, int tB)
{
	for (int i = 0;i < tA; i++){
		vC[i] = vA[i];
	}
	int indiceC = tA;
	for (int i = 0;i < tB; i++){
		int j = 0;
		while ((j < tA) and (vB[i] != vA[j])){
			j = j+1;
		}
		if (j == tA){
			vC[indiceC] = vB[i];
			indiceC++;
		}
	}
	while(indiceC < (tA + tB)){
		vC[indiceC] = -1;
		indiceC++;
	}
}
void diferenca(int vA[], int vB[], int vD[], int tA, int tB)
{
	int indiceA, indiceB, indiceC;
	indiceC = 0;
	for (indiceA = 0;indiceA < tA; indiceA++){
		indiceB = 0;
			while ((indiceB < tB) and (vB[indiceB] != vA[indiceA])){
				indiceB++;
			}
			if (indiceB == tB){
				vD[indiceC] = vA[indiceA];
				indiceC++;
			}
	}
	while(indiceC < tA ){
		vD[indiceC] = -1;
		indiceC++;
	}
}
