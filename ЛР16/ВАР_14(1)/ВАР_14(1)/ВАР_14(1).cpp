// ВАР_14(1).cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int sozdmass(int& a, int& b, int** A) {
	int i = 0, j = 0, c = 0;
	for (i = 0; i < a; i++) {
		for (j = 0; j < b; j++) {
			A[i][j] = rand() % 30 - 5;
			printf("%3d ", A[i][j]);
			
			
			
		} 	printf("\n");
	}
	return 0;
}
int proverkaizamena(int& a, int& b, int** A) {
    int positiveColumn;
    int isPositive = 0;
    for (int j = 0; j < a; j++) {

        for (int i = 0; i < b; i++) {
            if (A[i][j] >= 0) {
                isPositive = 1;
            }
            else {
                isPositive = 0;
                break;
            }
        }

        if (isPositive) {
            positiveColumn = j;
            break;
        }

    }

    // Если положительный столбец найден
    if (isPositive) {

        if (positiveColumn > 0) {
            // Если наш положительный столбец не первый
            // инверсируем знаки в предыдущем
            for (int i = 0; i < b; i++) {
                A[i][positiveColumn - 1] *= -1;
            }
        }
        else {
            // Если наш положительный столбец первый
            // инверсируем знаки в последнем
            for (int i = 0; i < b; i++) {
               A[i][a - 1] *= -1;
            }
        }
        printf("\n\n\n\n\n");
        // Выводим результат на экран
        printf("Результат:\n");
        for (int i = 0; i < b; i++) {
            for (int j = 0; j < a; j++) {
                printf("%3d ", A[i][j]);
            }
            printf("\n");
        }

    }
    else {
        printf("Матрица не имеет моложительных элементов.\n");
    }
	return 0;
}

int main()
{
	int a = 5, b = 5, i;
	int** A = new int* [a];
	for (i = 0; i < a; i++) {
		A[i] = new int[b];
	}
	sozdmass(a, b, A);
	proverkaizamena(a, b, A);
	printf("\n\n\n\n\n");

}

