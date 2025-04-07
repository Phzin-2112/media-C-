#include <iostream>
using namespace std;

const int ALUNOS = 4;
const int MATERIAS = 4;
float mediaAluno[ALUNOS] = {};
float mediasala = 0;

void init(float notas[][MATERIAS])
{
	for (int i = 0; i < ALUNOS; i++) {
		cout << "==================================\nAluno " << i + 1 << ":\n==================================\n";
		for (int j = 0; j < MATERIAS; j++) {
			switch (j) {
			case 0:
				cout << "Digite a nota de matemC!tica: ";
				break;
			case 1:
				cout << "Digite a nota de portuguC*s: ";
				break;
			case 2:
				cout << "Digite a nota de inglC*s: ";
				break;
			case 3:
				cout << "Digite a nota de geografia: ";
				break;
			}
			cin >> notas[i][j];
			mediaAluno[i] +=  notas[i][j];
			// mediaAluno[i] = mediaAluno[i] + notas[i][j];
		}
		mediaAluno[i] /= MATERIAS;
	}
}


void show(float notas[][MATERIAS])
{
	cout << "\nNotas dos alunos:\n";
	for (int i = 0; i < ALUNOS; i++) {
		cout << "Aluno " << i + 1 << ": ";
		for (int j = 0; j < MATERIAS; j++) {
			cout << notas[i][j] << "   ";
		}
		cout << endl;
	}

	cout << "\nMedia do aluno 1:\n" << mediaAluno[0];
	cout << "\nMedia do aluno 2:\n" << mediaAluno[1];
	cout << "\nMedia do aluno 3:\n" << mediaAluno[2];
	cout << "\nMedia do aluno 4:\n" << mediaAluno[3];

	float somasala = 0;
	for (int i = 0; i < ALUNOS; i++) {
		somasala += mediaAluno[i];
	}
	mediasala = somasala / ALUNOS;
	cout << "\nA media da sala e: " << mediasala;

	float mediaMateria[MATERIAS] = {};
	for (int j = 0; j < MATERIAS; j++) {
		for (int i = 0; i < ALUNOS; i++) {
			mediaMateria[j] += notas[i][j];
		}
		mediaMateria[j] /= ALUNOS;
	}

	cout << "\n\nMedia por materia:\n";
	cout << "Matematica: " << mediaMateria[0];
	cout << "\nPortugues: " << mediaMateria[1];
	cout << "\nIngles: " << mediaMateria[2];
	cout << "\nGeografia: " << mediaMateria[3] << endl;
}



int main()
{
	float notas[ALUNOS][MATERIAS];

	init(notas);
	show(notas);

	return 0;
}
